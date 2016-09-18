/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x6dd86d03 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "PC = 0x%8X, IR = 0x%8X";
static const char *ng1 = "D:/soc/mars2_0/mips_tb.v";
static const char *ng2 = "D:/soc/mars2_0/code.txt";
static int ng3[] = {1, 0};
static int ng4[] = {0, 0};

void Monitor_11_1(char *);
void Monitor_11_1(char *);


static void Monitor_11_1_Func(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 2884);
    t2 = *((char **)t1);
    t3 = ((((char*)(t2))) + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2904);
    t6 = *((char **)t5);
    t7 = ((((char*)(t6))) + 24U);
    t8 = *((char **)t7);
    xsi_vlogfile_write(1, 0, 3, ng0, 3, t0, (char)118, t4, 30, (char)118, t8, 32);

LAB1:    return;
}

static void Initial_9_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(9, ng1);

LAB4:    xsi_set_current_line(10, ng1);
    t2 = (t0 + 2928);
    t3 = *((char **)t2);
    xsi_vlogfile_readmemh(ng2, 0, ((char*)(t3)), 0, 0, 0, 0);
    xsi_set_current_line(11, ng1);
    Monitor_11_1(t0);
    xsi_set_current_line(12, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 736);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(13, ng1);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(14, ng1);
    t2 = (t0 + 1252);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(15, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(16, ng1);
    t2 = (t0 + 1252);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(17, ng1);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB1;

}

static void Always_20_2(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 1496U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21, ng1);
    t2 = (t0 + 1396);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(21, ng1);
    t4 = (t0 + 736);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 736);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

void Monitor_11_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 1540);
    t2 = (t0 + 1836);
    xsi_vlogfile_monitor((void *)Monitor_11_1_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000003918610685_0258635663_init()
{
	static char *pe[] = {(void *)Initial_9_0,(void *)Always_20_2,(void *)Monitor_11_1};
	xsi_register_didat("work_m_00000000003918610685_0258635663", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000003918610685_0258635663.didat");
	xsi_register_executes(pe);
}
