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
static const char *ng0 = "D:/soc/mars2_0/NPC.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {14, 0};
static unsigned int ng5[] = {2U, 0U};



static void Always_11_0(char *t0)
{
    char t9[8];
    char t11[8];
    char t18[8];
    char t21[8];
    char t29[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t10;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    char *t20;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t30;

LAB0:    t1 = (t0 + 1536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(11, ng0);
    t2 = (t0 + 1732);
    *((int *)t2) = 1;
    t3 = (t0 + 1564);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(11, ng0);

LAB5:    xsi_set_current_line(12, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(13, ng0);
    t7 = (t0 + 600U);
    t8 = *((char **)t7);
    t7 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t8, 30, t7, 32);
    t10 = (t0 + 1012);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 30);
    goto LAB15;

LAB9:    xsi_set_current_line(14, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 784U);
    t7 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t11 + 4);
    t8 = (t7 + 4);
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 0);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t8);
    t15 = (t14 >> 0);
    *((unsigned int *)t3) = t15;
    t16 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t16 & 65535U);
    t17 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t17 & 65535U);
    t10 = ((char*)((ng4)));
    t19 = (t0 + 784U);
    t20 = *((char **)t19);
    memset(t21, 0, 8);
    t19 = (t21 + 4);
    t22 = (t20 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 15);
    t25 = (t24 & 1);
    *((unsigned int *)t21) = t25;
    t26 = *((unsigned int *)t22);
    t27 = (t26 >> 15);
    t28 = (t27 & 1);
    *((unsigned int *)t19) = t28;
    xsi_vlog_mul_concat(t18, 14, 1, t10, 1U, t21, 1);
    xsi_vlogtype_concat(t9, 30, 30, 2U, t18, 14, t11, 16);
    memset(t29, 0, 8);
    xsi_vlog_unsigned_add(t29, 30, t4, 30, t9, 30);
    t30 = (t0 + 1012);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 30);
    goto LAB15;

LAB11:    xsi_set_current_line(15, ng0);
    t3 = (t0 + 784U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t11 + 4);
    t7 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 0);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t7);
    t15 = (t14 >> 0);
    *((unsigned int *)t3) = t15;
    t16 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t16 & 67108863U);
    t17 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t17 & 67108863U);
    t8 = (t0 + 600U);
    t10 = *((char **)t8);
    memset(t18, 0, 8);
    t8 = (t18 + 4);
    t19 = (t10 + 4);
    t23 = *((unsigned int *)t10);
    t24 = (t23 >> 26);
    *((unsigned int *)t18) = t24;
    t25 = *((unsigned int *)t19);
    t26 = (t25 >> 26);
    *((unsigned int *)t8) = t26;
    t27 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t27 & 15U);
    t28 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t28 & 15U);
    xsi_vlogtype_concat(t9, 30, 30, 2U, t18, 4, t11, 26);
    t20 = (t0 + 1012);
    xsi_vlogvar_assign_value(t20, t9, 0, 0, 30);
    goto LAB15;

}


extern void work_m_00000000000837636141_0757879789_init()
{
	static char *pe[] = {(void *)Always_11_0};
	xsi_register_didat("work_m_00000000000837636141_0757879789", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000000837636141_0757879789.didat");
	xsi_register_executes(pe);
}
