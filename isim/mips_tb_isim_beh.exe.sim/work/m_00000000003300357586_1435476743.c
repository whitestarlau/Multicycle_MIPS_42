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
static const char *ng0 = "D:/soc/mars2_0/mux.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};



static void Always_25_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 1892U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 2232);
    *((int *)t2) = 1;
    t3 = (t0 + 1920);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(25, ng0);

LAB5:    xsi_set_current_line(26, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:
LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(27, ng0);
    t7 = (t0 + 680U);
    t8 = *((char **)t7);
    t7 = (t0 + 1368);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    goto LAB17;

LAB9:    xsi_set_current_line(28, ng0);
    t3 = (t0 + 772U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB17;

LAB11:    xsi_set_current_line(29, ng0);
    t3 = (t0 + 864U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB17;

LAB13:    xsi_set_current_line(30, ng0);
    t3 = (t0 + 956U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB17;

}

static void Cont_35_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 2036U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1368);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2284);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 2240);
    *((int *)t10) = 1;

LAB1:    return;
}


extern void work_m_00000000003300357586_1435476743_init()
{
	static char *pe[] = {(void *)Always_25_0,(void *)Cont_35_1};
	xsi_register_didat("work_m_00000000003300357586_1435476743", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000003300357586_1435476743.didat");
	xsi_register_executes(pe);
}
