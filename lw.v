module lw(op,addr,in_,out);

	input [5:0] op;
	input [1:0] addr;
	input [31:0] in_;
	output [31:0] out;
	
	reg [31:0] out;
	
	always @(op or addr or in_)
	begin
	case(op)
		//LW
		6'b100011:out=in_;
		//LHU
		6'b100101: 
		begin
		case(addr[1])
			1'b0: out={16'b0,in_[15:0]};
			1'b1: out={16'b0,in_[31:16]};
			default: ;
		endcase
		end
		//`INSERT_LH_OP
		6'b100001:
		begin
		case(addr[1])
			1'b0: out={{16{in_[15]}},in_[15:0]};
			1'b1: out={{16{in_[31]}},in_[31:16]};
			default: ;
		endcase
		end
		//`INSERT_LBU_OP
		6'b100100:
		begin
		case(addr[1:0])
			2'b00: out={24'b0,in_[7:0]};
			2'b01: out={24'b0,in_[15:8]};
			2'b10: out={24'b0,in_[23:16]};
			2'b11: out={24'b0,in_[31:24]};
			default: ;
		endcase
		end
		//`INSERT_LB_OP
		6'b100000:
		begin
		case(addr[1:0])
			2'b00: out={{24{in_[7]}},in_[7:0]};
			2'b01: out={{24{in_[15]}},in_[15:8]};
			2'b10: out={{24{in_[23]}},in_[23:16]};
			2'b11: out={{24{in_[31]}},in_[31:24]};
			default: ;
		endcase
		end
		default:;
	endcase
	end
endmodule

