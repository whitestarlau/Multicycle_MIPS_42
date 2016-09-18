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
static const char *ng0 = "D:/soc/mars2_0/PC.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {12288U, 0U};



static void Cont_13_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 1812U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(13, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 1196);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    xsi_vlogtype_concat(t3, 32, 32, 2U, t6, 30, t2, 2);
    t7 = (t0 + 2204);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t3, 8);
    xsi_driver_vfirst_trans(t7, 0, 31);
    t12 = (t0 + 2152);
    *((int *)t12) = 1;

LAB1:    return;
}

static void Always_15_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    t1 = (t0 + 1956U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15, ng0);
    t2 = (t0 + 2160);
    *((int *)t2) = 1;
    t3 = (t0 + 1984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(15, ng0);

LAB5:    xsi_set_current_line(16, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB9;

LAB10:
LAB11:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(17, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 1288);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 0LL);
    t13 = (t0 + 1196);
    xsi_vlogvar_wait_assign_value(t13, t11, 2, 0, 30, 0LL);
    goto LAB8;

LAB9:    xsi_set_current_line(19, ng0);
    t4 = (t0 + 876U);
    t5 = *((char **)t4);
    t4 = (t0 + 1196);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 30, 0LL);
    goto LAB11;

}


extern void work_m_00000000001702301088_1733832700_init()
{
	static char *pe[] = {(void *)Cont_13_0,(void *)Always_15_1};
	xsi_register_didat("work_m_00000000001702301088_1733832700", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000001702301088_1733832700.didat");
	xsi_register_executes(pe);
}
