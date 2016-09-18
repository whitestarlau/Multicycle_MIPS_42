`include "ctrl_encode_def.v"
`include "instruction_def.v"
module ctrl(clk,	rst, Zero, Op, Funct,
			ALUOut, rt,
            RFWr, DMWr, PCWr, IRWr,
            EXTOp, ALUOp, NPCOp, GPRSel,
            WDSel,ASel, BSel,be);
    
   input 		clk, rst, Zero;
   input  [5:0] Op;
   input  [5:0] Funct;
   input  [1:0] ALUOut;
   input  [4:0] rt;
   output       RFWr;
   output       DMWr;
   output       PCWr;
   output       IRWr;
   output [1:0] EXTOp;
   output [4:0] ALUOp;
   output [1:0] NPCOp;
   output [1:0] GPRSel;
   output [1:0] WDSel;
   output       ASel; 
   output       BSel;
   output [3:0] be;
   
    
   parameter Fetch  = 4'b0000,
             DCD    = 4'b0001,
             Exe    = 4'b0010,
             MA     = 4'b0011,
             Branch = 4'b0100,
             Jmp    = 4'b0101,
             MR     = 4'b0110,
             MW     = 4'b0111,
             WB     = 4'b1000,
             MemWB  = 4'b1001;
    
	
   wire RType;   // Type of R-Type Instruction
   wire IType;   // Tyoe of Imm    Instruction  
   wire BrType;  // Type of Branch Instruction
   wire JType;   // Type of Jump   Instruction
   wire LdType;  // Type of Load   Instruction
   wire StType;  // Type of Store  Instruction
   wire MemType; // Type pf Memory Instruction(Load/Store)
	
   assign RType   = (Op == `INSTR_RTYPE_OP);
   
   //IType
   assign IType=(Op==`INSTR_ADDI_OP||Op==`INSTR_ADDIU_OP||Op==`INSTR_ANDI_OP
					||Op==`INSTR_ORI_OP||Op==`INSTR_XORI_OP||Op==`INSTR_LUI_OP
					||Op==`INSTR_SLTI_OP||Op==`INSTR_SLTIU_OP);
   
   assign BrType  =(Op==`INSTR_BEQ_OP ||Op==`INSTR_BNE_OP||Op==`INSTR_BGEZ_OP
						||Op==`INSTR_BGTZ_OP||Op==`INSTR_BLEZ_OP||Op==`INSTR_BLTZ_OP);
   
   assign JType   = (Op==`INSTR_JAL_OP || Op==`INSTR_J_OP);
   
	assign LdType  = (Op ==`INSTR_LW_OP || Op==`INSTR_LB_OP ||Op==`INSTR_LH_OP 
							|| Op==`INSTR_LBU_OP ||Op==`INSTR_LHU_OP);
	
	assign StType  = (Op==`INSTR_SW_OP  || Op==`INSTR_SB_OP || Op==`INSTR_SH_OP);
	
   assign MemType = LdType || StType;
    
	/*************************************************/
	/******               FSM                   ******/
   reg [3:0] nextstate;
   reg [3:0] state;
   
   always @(posedge clk or posedge rst) begin
	   if ( rst )
		   state <= Fetch;
      else
         state <= nextstate;
	end // end always
             
   always @(*) begin
      case (state)
         Fetch: nextstate = DCD;
         DCD: begin
            if ( RType || IType ) 
				   nextstate = Exe;
            else if ( MemType ) 
               nextstate = MA;
            else if ( BrType )
               nextstate = Branch;
            else if ( JType )
               nextstate = Jmp;
            else   //if Op wrong, then fetch next one.
               nextstate = Fetch;
         end
         Exe:  nextstate = WB;
         MA: begin 
            if ( LdType )
				   nextstate = MR;   //LW
            else if ( StType )
					nextstate = MW;   //SW
			end
         Branch: nextstate = Fetch;
         Jmp: 	nextstate = Fetch;
         MR:   nextstate = MemWB;
         MW:   nextstate = Fetch;
         WB: 	 nextstate = Fetch;
         MemWB: nextstate = Fetch;      
			default: ;
       endcase
   end // end always
	
	
	/*************************************************/
	/******         Control Signal              ******/
	reg       RFWr;
   reg       DMWr;
   reg       PCWr;
   reg       IRWr;
   reg [1:0] EXTOp;
   reg [4:0] ALUOp;
   reg [1:0] NPCOp;
   reg [1:0] GPRSel;
   reg [1:0] WDSel;
   reg       ASel;
   reg       BSel;
   reg [3:0] be;
	
	always @( * ) begin
		ASel = 0;
		BSel = 0;
	   case ( state ) 
		   Fetch: begin
            PCWr   = 1'b1;
            NPCOp  = `NPC_PLUS4; 
            IRWr   = 1'b1;
            RFWr  = 1'b0;
            DMWr   = 1'b0;
            EXTOp  = 0;
            GPRSel = 0;
            WDSel  = 0;
            BSel   = 0;
            ALUOp  = 0;
			end // end Fetch
         DCD: begin
            PCWr   = 1'b0;
			IRWr   = 1'b0;
            RFWr  = 1'b0;
            DMWr   = 1'b0;
			
			if(RType)
				begin
				NPCOp  = 0;
				EXTOp = `EXT_SIGNED;
				GPRSel = `GPRSel_RD;
				if(Funct == `INSTR_JALR_FUNCT)
					WDSel = `WDSel_FromPC;
				else
					WDSel = `WDSel_FromALU;
				BSel   = 1'b0;
				end
			else if(IType)
				begin
				NPCOp = `NPC_PLUS4;
				if(Op == `INSTR_LUI_OP)
					EXTOp = `EXT_HIGHPOS;
				else
					EXTOp = `EXT_SIGNED;
					
				GPRSel = `GPRSel_RT;
				WDSel = `WDSel_FromALU;
				BSel   = 1'b1;
				end
		
			
			case(Op)
				`INSTR_RTYPE_OP:
				begin
					case(Funct)
					`INSTR_ADD_FUNCT: ALUOp = `ALUOp_ADD;
					`INSTR_ADDU_FUNCT: ALUOp = `ALUOp_ADDU;
					`INSTR_SUB_FUNCT: ALUOp = `ALUOp_SUB;
					`INSTR_SUBU_FUNCT: ALUOp = `ALUOp_SUBU;
					`INSTR_AND_FUNCT: ALUOp = `ALUOp_AND;
					`INSTR_NOR_FUNCT: ALUOp = `ALUOp_NOR;
					`INSTR_OR_FUNCT: ALUOp = `ALUOp_OR;
					`INSTR_XOR_FUNCT: ALUOp = `ALUOp_XOR;
					`INSTR_SLT_FUNCT: ALUOp = `ALUOp_SLT;
					`INSTR_SLTU_FUNCT: ALUOp = `ALUOp_SLTU;
					`INSTR_SLL_FUNCT: 
						begin
						ALUOp = `ALUOp_SLL;	ASel = 1;
						end
					`INSTR_SRL_FUNCT:
						begin
						ALUOp = `ALUOp_SRL;	ASel = 1;
						end
					`INSTR_SRA_FUNCT:
						begin
						ALUOp = `ALUOp_SRA;	ASel = 1;
						end
					
					`INSTR_SLLV_FUNCT:
						begin
						ALUOp = `ALUOp_SLL;
						end
					`INSTR_SRLV_FUNCT:
						begin
						ALUOp = `ALUOp_SRL;
						end
					`INSTR_SRAV_FUNCT:
						begin
						ALUOp = `ALUOp_SRA;
						end
					
					default: ;
					endcase
				end
				
				`INSTR_ADDI_OP: ALUOp = `ALUOp_ADD;
				`INSTR_ADDIU_OP: ALUOp = `ALUOp_ADDU;
				`INSTR_ANDI_OP: ALUOp = `ALUOp_AND;
				`INSTR_ORI_OP: ALUOp = `ALUOp_OR;
				`INSTR_XORI_OP: ALUOp = `ALUOp_XOR;
				`INSTR_LUI_OP: ALUOp = `ALUOp_NOP;
				`INSTR_SLTI_OP: ALUOp = `ALUOp_SLT;
				`INSTR_SLTIU_OP: ALUOp = `ALUOp_SLTU;
				
				//Branch
				`INSTR_BEQ_OP:	ALUOp = `ALUOp_EQL;
				`INSTR_BNE_OP:	ALUOp = `ALUOp_BNE;
				`INSTR_BGTZ_OP:	ALUOp = `ALUOp_GT0;
				`INSTR_BLEZ_OP:	ALUOp = `ALUOp_LE0;
				
				//BGEZ and BLTZ
				6'b000001:
					begin
					if(rt[0])
						ALUOp = `ALUOp_GE0;
					else
						ALUOp = `ALUOp_LT0;
					end
				default: ;
			endcase
		
			end	// end DCD
			
         Exe: 	begin
            PCWr   = 1'b0;
			IRWr   = 1'b0;
            RFWr  = 1'b0;
            DMWr   = 1'b0;
				NPCOp  = 0;
			
			if(RType)
				begin
				EXTOp = `EXT_SIGNED;
				GPRSel = `GPRSel_RD;
				if(Funct == `INSTR_JALR_FUNCT)
					WDSel = `WDSel_FromPC;
				else
					WDSel = `WDSel_FromALU;
				BSel   = 1'b0;
				end
			else if(IType)
				begin
				if(Op == `INSTR_LUI_OP)
					EXTOp = `EXT_HIGHPOS;
				else
					EXTOp = `EXT_SIGNED;
				GPRSel = `GPRSel_RT;
				WDSel = `WDSel_FromALU;
				BSel   = 1'b1;
				end
			case(Op)
				`INSTR_RTYPE_OP:
				begin
					case(Funct)
					`INSTR_ADD_FUNCT: ALUOp = `ALUOp_ADD;
					`INSTR_ADDU_FUNCT: ALUOp = `ALUOp_ADDU;
					`INSTR_SUB_FUNCT: ALUOp = `ALUOp_SUB;
					`INSTR_SUBU_FUNCT: ALUOp = `ALUOp_SUBU;
					`INSTR_AND_FUNCT: ALUOp = `ALUOp_AND;
					`INSTR_NOR_FUNCT: ALUOp = `ALUOp_NOR;
					`INSTR_OR_FUNCT: ALUOp = `ALUOp_OR;
					`INSTR_XOR_FUNCT: ALUOp = `ALUOp_XOR;
					`INSTR_SLT_FUNCT: ALUOp = `ALUOp_SLT;
					`INSTR_SLTU_FUNCT: ALUOp = `ALUOp_SLTU;
					`INSTR_SLL_FUNCT: 
						begin
						ALUOp = `ALUOp_SLL;	ASel = 1;
						end
					`INSTR_SRL_FUNCT:
						begin
						ALUOp = `ALUOp_SRL;	ASel = 1;
						end
					`INSTR_SRA_FUNCT:
						begin
						ALUOp = `ALUOp_SRA;	ASel = 1;
						end
					
					`INSTR_SLLV_FUNCT:
						begin
						ALUOp = `ALUOp_SLL;
						end
					`INSTR_SRLV_FUNCT:
						begin
						ALUOp = `ALUOp_SRL;
						end
					`INSTR_SRAV_FUNCT:
						begin
						ALUOp = `ALUOp_SRA;
						end
					
					default: ;
					endcase
				end
				
				`INSTR_ADDI_OP: ALUOp = `ALUOp_ADD;
				`INSTR_ADDIU_OP: ALUOp = `ALUOp_ADDU;
				`INSTR_ANDI_OP: ALUOp = `ALUOp_AND;
				`INSTR_ORI_OP: ALUOp = `ALUOp_OR;
				`INSTR_XORI_OP: ALUOp = `ALUOp_XOR;
				`INSTR_LUI_OP: ALUOp = `ALUOp_NOP;
				`INSTR_SLTI_OP: ALUOp = `ALUOp_SLT;
				`INSTR_SLTIU_OP: ALUOp = `ALUOp_SLTU;
				
				default: ;
			endcase
			
			end // end Exe
			
         MA: begin
            PCWr   = 1'b0;
            IRWr   = 1'b0;
            RFWr  = 1'b0;
            DMWr   = 1'b0;
				
			NPCOp  = `NPC_PLUS4;
				
            EXTOp  = `EXT_SIGNED;
            GPRSel = `GPRSel_RD;
            WDSel  = `WDSel_FromMEM;
            BSel   = 1'b1;
            ALUOp  = `ALUOp_ADDU;
			end // end MA
			
         Branch: begin
            if (Zero) 
               PCWr = 1'b1;
            else
               PCWr = 1'b0;
            IRWr   = 1'b0;
            RFWr  = 1'b0;
            DMWr   = 1'b0;
			
			NPCOp  = `NPC_BRANCH;
            EXTOp  = 0;
            GPRSel = 0;
            WDSel  = 0;
            BSel   = 1'b0;
            case(Op)
				//Branch
				`INSTR_BEQ_OP:	ALUOp = `ALUOp_EQL;
				`INSTR_BNE_OP:	ALUOp = `ALUOp_BNE;
				`INSTR_BGTZ_OP:	ALUOp = `ALUOp_GT0;
				`INSTR_BLEZ_OP:	ALUOp = `ALUOp_LE0;
				
				//BGEZ and BLTZ
				6'b000001:
					begin
					if(rt[0])
						ALUOp = `ALUOp_GE0;
					else
						ALUOp = `ALUOp_LT0;
					end
				default: ;
			endcase
			end // end Branch
			
         Jmp: 	begin
            PCWr   = 1'b1;
            IRWr   = 1'b0;
			if(Op == `INSTR_JAL_OP)
				RFWr  = 1'b1;
			else
				RFWr  = 1'b0;
            DMWr   = 1'b0;
			
			NPCOp  = `NPC_JUMP;
            EXTOp  = `EXT_SIGNED;
            GPRSel = `GPRSel_31;
            WDSel  = `WDSel_FromPC;
            BSel   = 0;
            ALUOp  = 0;
			end // end Jmp
			
         MR:  begin
			PCWr   = 1'b0;
            IRWr   = 1'b0;
            RFWr  = 1'b0;
            DMWr   = 1'b0;
			
			NPCOp  = 0;
            EXTOp  = `EXT_SIGNED;
            GPRSel = `GPRSel_RD;
            WDSel  = `WDSel_FromMEM;
            BSel   = 1'b1;
            ALUOp  = `ALUOp_ADDU;
			end // end MR
			
         MW:  begin
            PCWr   = 1'b0;
			IRWr   = 1'b0;
            RFWr  = 1'b0;
            DMWr   = 1'b1;
			
			NPCOp  = 0;
            EXTOp  = `EXT_SIGNED;
            GPRSel = `GPRSel_RD;
            WDSel  = `WDSel_FromALU;
            BSel   = 1'b1;
            ALUOp  = `ALUOp_ADDU;
			
			case(Op)
				`INSTR_SW_OP: be = 4'b1111;
				`INSTR_SH_OP:
					begin
					if(ALUOut[1])
						be = 4'b1100;
					else
						be = 4'b0011;
					end
				`INSTR_SB_OP:
					begin
					case(ALUOut)
						00:	be = 4'b0001;
						01: be = 4'b0010;
						10:	be = 4'b0100;
						11:	be = 4'b1000;
					default:;
					endcase
					end
				default: ;
			
			endcase
			
			end // end MW
			
         WB: 	begin
			if(Funct == `INSTR_JALR_FUNCT)
				PCWr = 1'b1;
			else
				PCWr   = 1'b0;
				
			if(Funct == `INSTR_JR_FUNCT)
				RFWr  = 1'b0;
			else
				RFWr  = 1'b1;
         
			IRWr   = 1'b0;
			DMWr   = 1'b0;
			
			if((Funct == `INSTR_JALR_FUNCT)||(Funct == `INSTR_JR_FUNCT))
				NPCOp = `NPC_JUMP;
			else
				NPCOp = `NPC_PLUS4;
			
            if(RType)
				begin
				EXTOp = `EXT_SIGNED;
				GPRSel = `GPRSel_RD;
				if(Funct == `INSTR_JALR_FUNCT)
					WDSel = `WDSel_FromPC;
				else
					WDSel = `WDSel_FromALU;
				BSel   = 1'b0;
				end
			else if(IType)
				begin
				if(Op == `INSTR_LUI_OP)
					EXTOp = `EXT_HIGHPOS;
				else
					EXTOp = `EXT_SIGNED;
				GPRSel = `GPRSel_RT;
				WDSel = `WDSel_FromALU;
				BSel   = 1'b1;
				end
			case(Op)
				`INSTR_RTYPE_OP:
				begin
					case(Funct)
					`INSTR_ADD_FUNCT: ALUOp = `ALUOp_ADD;
					`INSTR_ADDU_FUNCT: ALUOp = `ALUOp_ADDU;
					`INSTR_SUB_FUNCT: ALUOp = `ALUOp_SUB;
					`INSTR_SUBU_FUNCT: ALUOp = `ALUOp_SUBU;
					`INSTR_AND_FUNCT: ALUOp = `ALUOp_AND;
					`INSTR_NOR_FUNCT: ALUOp = `ALUOp_NOR;
					`INSTR_OR_FUNCT: ALUOp = `ALUOp_OR;
					`INSTR_XOR_FUNCT: ALUOp = `ALUOp_XOR;
					`INSTR_SLT_FUNCT: ALUOp = `ALUOp_SLT;
					`INSTR_SLTU_FUNCT: ALUOp = `ALUOp_SLTU;
					`INSTR_SLL_FUNCT: 
						begin
						ALUOp = `ALUOp_SLL;	ASel = 1;
						end
					`INSTR_SRL_FUNCT:
						begin
						ALUOp = `ALUOp_SRL;	ASel = 1;
						end
					`INSTR_SRA_FUNCT:
						begin
						ALUOp = `ALUOp_SRA;	ASel = 1;
						end
					
					`INSTR_SLLV_FUNCT:
						begin
						ALUOp = `ALUOp_SLL;
						end
					`INSTR_SRLV_FUNCT:
						begin
						ALUOp = `ALUOp_SRL;
						end
					`INSTR_SRAV_FUNCT:
						begin
						ALUOp = `ALUOp_SRA;
						end
						
					`INSTR_JALR_FUNCT:	ALUOp = `ALUOp_NOP;
					`INSTR_JALR_FUNCT:	ALUOp = `ALUOp_NOP;
					default: ;
					endcase
				end
				
				`INSTR_ADDI_OP: ALUOp = `ALUOp_ADD;
				`INSTR_ADDIU_OP: ALUOp = `ALUOp_ADDU;
				`INSTR_ANDI_OP: ALUOp = `ALUOp_AND;
				`INSTR_ORI_OP: ALUOp = `ALUOp_OR;
				`INSTR_XORI_OP: ALUOp = `ALUOp_XOR;
				`INSTR_LUI_OP: ALUOp = `ALUOp_NOP;
				`INSTR_SLTI_OP: ALUOp = `ALUOp_SLT;
				`INSTR_SLTIU_OP: ALUOp = `ALUOp_SLTU;
				
				default: ;
			endcase
			
            end
			
         MemWB: begin
            PCWr   = 1'b0;
            IRWr   = 1'b0;
            RFWr  = 1'b1;
            DMWr   = 1'b0;
			
			NPCOp  = 0;
            EXTOp  = `EXT_SIGNED;
            GPRSel = `GPRSel_RT;
            WDSel  = `WDSel_FromMEM;
            BSel   = 1'b1;
            ALUOp  = `ALUOp_ADDU;
			end // end MemWB
			
		default: begin
            PCWr   = 1'b0;
            NPCOp  = 0;
            IRWr   = 1'b0;
            RFWr  = 1'b0;
            DMWr   = 1'b0;
            EXTOp  = 0;
            GPRSel = 0;
            WDSel  = 0;
            BSel   = 0;
            ALUOp  = 0;
			end // end default
	   endcase
   end // end always
    
endmodule
