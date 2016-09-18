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
static const char *ng0 = "D:/soc/mars2_0/dm.v";
static unsigned int ng1[] = {15U, 0U};
static unsigned int ng2[] = {12U, 0U};
static int ng3[] = {31, 0};
static int ng4[] = {16, 0};
static unsigned int ng5[] = {3U, 0U};
static int ng6[] = {15, 0};
static int ng7[] = {0, 0};
static unsigned int ng8[] = {8U, 0U};
static int ng9[] = {24, 0};
static unsigned int ng10[] = {4U, 0U};
static int ng11[] = {23, 0};
static unsigned int ng12[] = {2U, 0U};
static int ng13[] = {8, 0};
static unsigned int ng14[] = {1U, 0U};
static int ng15[] = {7, 0};



static void Always_12_0(char *t0)
{
    char t16[8];
    char t17[8];
    char t36[8];
    char t37[8];
    char t38[8];
    char t39[8];
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
    int t13;
    char *t14;
    char *t15;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    int t46;
    int t47;
    char *t48;
    unsigned int t49;
    int t50;
    int t51;
    unsigned int t52;
    int t53;
    unsigned int t54;
    unsigned int t55;
    int t56;
    unsigned int t57;
    unsigned int t58;
    int t59;
    int t60;

LAB0:    t1 = (t0 + 1812U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12, ng0);
    t2 = (t0 + 2152);
    *((int *)t2) = 1;
    t3 = (t0 + 1840);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(12, ng0);

LAB5:    xsi_set_current_line(13, ng0);
    t4 = (t0 + 876U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(13, ng0);

LAB9:    xsi_set_current_line(14, ng0);
    t11 = (t0 + 784U);
    t12 = *((char **)t11);

LAB10:    t11 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t11, 4);
    if (t13 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t13 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t13 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t13 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng10)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t13 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng12)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t13 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng14)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t13 == 1)
        goto LAB23;

LAB24:
LAB26:
LAB25:
LAB27:    goto LAB8;

LAB11:    xsi_set_current_line(16, ng0);
    t14 = (t0 + 692U);
    t15 = *((char **)t14);
    t14 = (t0 + 1288);
    t18 = (t0 + 1288);
    t19 = (t18 + 44U);
    t20 = *((char **)t19);
    t21 = (t0 + 1288);
    t22 = (t21 + 40U);
    t23 = *((char **)t22);
    t24 = (t0 + 600U);
    t25 = *((char **)t24);
    xsi_vlog_generic_convert_array_indices(t16, t17, t20, t23, 2, 1, t25, 10, 2);
    t24 = (t16 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (!(t26));
    t28 = (t17 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB28;

LAB29:    goto LAB27;

LAB13:    xsi_set_current_line(18, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    memset(t16, 0, 8);
    t3 = (t16 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t16) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t10 & 65535U);
    t26 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t26 & 65535U);
    t11 = (t0 + 1288);
    t14 = (t0 + 1288);
    t15 = (t14 + 44U);
    t18 = *((char **)t15);
    t19 = (t0 + 1288);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    t22 = (t0 + 600U);
    t23 = *((char **)t22);
    xsi_vlog_generic_convert_array_indices(t17, t36, t18, t21, 2, 1, t23, 10, 2);
    t22 = (t0 + 1288);
    t24 = (t22 + 44U);
    t25 = *((char **)t24);
    t28 = ((char*)((ng3)));
    t40 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t37, t38, t39, ((int*)(t25)), 2, t28, 32, 1, t40, 32, 1);
    t41 = (t17 + 4);
    t29 = *((unsigned int *)t41);
    t27 = (!(t29));
    t42 = (t36 + 4);
    t32 = *((unsigned int *)t42);
    t30 = (!(t32));
    t31 = (t27 && t30);
    t43 = (t37 + 4);
    t33 = *((unsigned int *)t43);
    t34 = (!(t33));
    t35 = (t31 && t34);
    t44 = (t38 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (!(t45));
    t47 = (t35 && t46);
    t48 = (t39 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (!(t49));
    t51 = (t47 && t50);
    if (t51 == 1)
        goto LAB30;

LAB31:    goto LAB27;

LAB15:    xsi_set_current_line(19, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    memset(t16, 0, 8);
    t3 = (t16 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t16) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t10 & 65535U);
    t26 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t26 & 65535U);
    t11 = (t0 + 1288);
    t14 = (t0 + 1288);
    t15 = (t14 + 44U);
    t18 = *((char **)t15);
    t19 = (t0 + 1288);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    t22 = (t0 + 600U);
    t23 = *((char **)t22);
    xsi_vlog_generic_convert_array_indices(t17, t36, t18, t21, 2, 1, t23, 10, 2);
    t22 = (t0 + 1288);
    t24 = (t22 + 44U);
    t25 = *((char **)t24);
    t28 = ((char*)((ng6)));
    t40 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t37, t38, t39, ((int*)(t25)), 2, t28, 32, 1, t40, 32, 1);
    t41 = (t17 + 4);
    t29 = *((unsigned int *)t41);
    t27 = (!(t29));
    t42 = (t36 + 4);
    t32 = *((unsigned int *)t42);
    t30 = (!(t32));
    t31 = (t27 && t30);
    t43 = (t37 + 4);
    t33 = *((unsigned int *)t43);
    t34 = (!(t33));
    t35 = (t31 && t34);
    t44 = (t38 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (!(t45));
    t47 = (t35 && t46);
    t48 = (t39 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (!(t49));
    t51 = (t47 && t50);
    if (t51 == 1)
        goto LAB32;

LAB33:    goto LAB27;

LAB17:    xsi_set_current_line(21, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    memset(t16, 0, 8);
    t3 = (t16 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t16) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t10 & 255U);
    t26 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t26 & 255U);
    t11 = (t0 + 1288);
    t14 = (t0 + 1288);
    t15 = (t14 + 44U);
    t18 = *((char **)t15);
    t19 = (t0 + 1288);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    t22 = (t0 + 600U);
    t23 = *((char **)t22);
    xsi_vlog_generic_convert_array_indices(t17, t36, t18, t21, 2, 1, t23, 10, 2);
    t22 = (t0 + 1288);
    t24 = (t22 + 44U);
    t25 = *((char **)t24);
    t28 = ((char*)((ng3)));
    t40 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t37, t38, t39, ((int*)(t25)), 2, t28, 32, 1, t40, 32, 1);
    t41 = (t17 + 4);
    t29 = *((unsigned int *)t41);
    t27 = (!(t29));
    t42 = (t36 + 4);
    t32 = *((unsigned int *)t42);
    t30 = (!(t32));
    t31 = (t27 && t30);
    t43 = (t37 + 4);
    t33 = *((unsigned int *)t43);
    t34 = (!(t33));
    t35 = (t31 && t34);
    t44 = (t38 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (!(t45));
    t47 = (t35 && t46);
    t48 = (t39 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (!(t49));
    t51 = (t47 && t50);
    if (t51 == 1)
        goto LAB34;

LAB35:    goto LAB27;

LAB19:    xsi_set_current_line(22, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    memset(t16, 0, 8);
    t3 = (t16 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t16) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t10 & 255U);
    t26 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t26 & 255U);
    t11 = (t0 + 1288);
    t14 = (t0 + 1288);
    t15 = (t14 + 44U);
    t18 = *((char **)t15);
    t19 = (t0 + 1288);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    t22 = (t0 + 600U);
    t23 = *((char **)t22);
    xsi_vlog_generic_convert_array_indices(t17, t36, t18, t21, 2, 1, t23, 10, 2);
    t22 = (t0 + 1288);
    t24 = (t22 + 44U);
    t25 = *((char **)t24);
    t28 = ((char*)((ng11)));
    t40 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t37, t38, t39, ((int*)(t25)), 2, t28, 32, 1, t40, 32, 1);
    t41 = (t17 + 4);
    t29 = *((unsigned int *)t41);
    t27 = (!(t29));
    t42 = (t36 + 4);
    t32 = *((unsigned int *)t42);
    t30 = (!(t32));
    t31 = (t27 && t30);
    t43 = (t37 + 4);
    t33 = *((unsigned int *)t43);
    t34 = (!(t33));
    t35 = (t31 && t34);
    t44 = (t38 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (!(t45));
    t47 = (t35 && t46);
    t48 = (t39 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (!(t49));
    t51 = (t47 && t50);
    if (t51 == 1)
        goto LAB36;

LAB37:    goto LAB27;

LAB21:    xsi_set_current_line(23, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    memset(t16, 0, 8);
    t3 = (t16 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t16) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t10 & 255U);
    t26 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t26 & 255U);
    t11 = (t0 + 1288);
    t14 = (t0 + 1288);
    t15 = (t14 + 44U);
    t18 = *((char **)t15);
    t19 = (t0 + 1288);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    t22 = (t0 + 600U);
    t23 = *((char **)t22);
    xsi_vlog_generic_convert_array_indices(t17, t36, t18, t21, 2, 1, t23, 10, 2);
    t22 = (t0 + 1288);
    t24 = (t22 + 44U);
    t25 = *((char **)t24);
    t28 = ((char*)((ng6)));
    t40 = ((char*)((ng13)));
    xsi_vlog_convert_partindices(t37, t38, t39, ((int*)(t25)), 2, t28, 32, 1, t40, 32, 1);
    t41 = (t17 + 4);
    t29 = *((unsigned int *)t41);
    t27 = (!(t29));
    t42 = (t36 + 4);
    t32 = *((unsigned int *)t42);
    t30 = (!(t32));
    t31 = (t27 && t30);
    t43 = (t37 + 4);
    t33 = *((unsigned int *)t43);
    t34 = (!(t33));
    t35 = (t31 && t34);
    t44 = (t38 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (!(t45));
    t47 = (t35 && t46);
    t48 = (t39 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (!(t49));
    t51 = (t47 && t50);
    if (t51 == 1)
        goto LAB38;

LAB39:    goto LAB27;

LAB23:    xsi_set_current_line(24, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    memset(t16, 0, 8);
    t3 = (t16 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t16) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t10 & 255U);
    t26 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t26 & 255U);
    t11 = (t0 + 1288);
    t14 = (t0 + 1288);
    t15 = (t14 + 44U);
    t18 = *((char **)t15);
    t19 = (t0 + 1288);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    t22 = (t0 + 600U);
    t23 = *((char **)t22);
    xsi_vlog_generic_convert_array_indices(t17, t36, t18, t21, 2, 1, t23, 10, 2);
    t22 = (t0 + 1288);
    t24 = (t22 + 44U);
    t25 = *((char **)t24);
    t28 = ((char*)((ng15)));
    t40 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t37, t38, t39, ((int*)(t25)), 2, t28, 32, 1, t40, 32, 1);
    t41 = (t17 + 4);
    t29 = *((unsigned int *)t41);
    t27 = (!(t29));
    t42 = (t36 + 4);
    t32 = *((unsigned int *)t42);
    t30 = (!(t32));
    t31 = (t27 && t30);
    t43 = (t37 + 4);
    t33 = *((unsigned int *)t43);
    t34 = (!(t33));
    t35 = (t31 && t34);
    t44 = (t38 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (!(t45));
    t47 = (t35 && t46);
    t48 = (t39 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (!(t49));
    t51 = (t47 && t50);
    if (t51 == 1)
        goto LAB40;

LAB41:    goto LAB27;

LAB28:    t32 = *((unsigned int *)t16);
    t33 = *((unsigned int *)t17);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_wait_assign_value(t14, t15, 0, *((unsigned int *)t17), t35, 0LL);
    goto LAB29;

LAB30:    t52 = *((unsigned int *)t39);
    t53 = (t52 + 0);
    t54 = *((unsigned int *)t36);
    t55 = *((unsigned int *)t38);
    t56 = (t54 + t55);
    t57 = *((unsigned int *)t37);
    t58 = *((unsigned int *)t38);
    t59 = (t57 - t58);
    t60 = (t59 + 1);
    xsi_vlogvar_wait_assign_value(t11, t16, t53, t56, t60, 0LL);
    goto LAB31;

LAB32:    t52 = *((unsigned int *)t39);
    t53 = (t52 + 0);
    t54 = *((unsigned int *)t36);
    t55 = *((unsigned int *)t38);
    t56 = (t54 + t55);
    t57 = *((unsigned int *)t37);
    t58 = *((unsigned int *)t38);
    t59 = (t57 - t58);
    t60 = (t59 + 1);
    xsi_vlogvar_wait_assign_value(t11, t16, t53, t56, t60, 0LL);
    goto LAB33;

LAB34:    t52 = *((unsigned int *)t39);
    t53 = (t52 + 0);
    t54 = *((unsigned int *)t36);
    t55 = *((unsigned int *)t38);
    t56 = (t54 + t55);
    t57 = *((unsigned int *)t37);
    t58 = *((unsigned int *)t38);
    t59 = (t57 - t58);
    t60 = (t59 + 1);
    xsi_vlogvar_wait_assign_value(t11, t16, t53, t56, t60, 0LL);
    goto LAB35;

LAB36:    t52 = *((unsigned int *)t39);
    t53 = (t52 + 0);
    t54 = *((unsigned int *)t36);
    t55 = *((unsigned int *)t38);
    t56 = (t54 + t55);
    t57 = *((unsigned int *)t37);
    t58 = *((unsigned int *)t38);
    t59 = (t57 - t58);
    t60 = (t59 + 1);
    xsi_vlogvar_wait_assign_value(t11, t16, t53, t56, t60, 0LL);
    goto LAB37;

LAB38:    t52 = *((unsigned int *)t39);
    t53 = (t52 + 0);
    t54 = *((unsigned int *)t36);
    t55 = *((unsigned int *)t38);
    t56 = (t54 + t55);
    t57 = *((unsigned int *)t37);
    t58 = *((unsigned int *)t38);
    t59 = (t57 - t58);
    t60 = (t59 + 1);
    xsi_vlogvar_wait_assign_value(t11, t16, t53, t56, t60, 0LL);
    goto LAB39;

LAB40:    t52 = *((unsigned int *)t39);
    t53 = (t52 + 0);
    t54 = *((unsigned int *)t36);
    t55 = *((unsigned int *)t38);
    t56 = (t54 + t55);
    t57 = *((unsigned int *)t37);
    t58 = *((unsigned int *)t38);
    t59 = (t57 - t58);
    t60 = (t59 + 1);
    xsi_vlogvar_wait_assign_value(t11, t16, t53, t56, t60, 0LL);
    goto LAB41;

}

static void Cont_30_1(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 1956U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t6 = (t0 + 1288);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t9 = (t0 + 1288);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    t12 = (t0 + 600U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 10, 2);
    t12 = (t0 + 2204);
    t14 = (t12 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t18 = (t0 + 2160);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000002958924945_1806979977_init()
{
	static char *pe[] = {(void *)Always_12_0,(void *)Cont_30_1};
	xsi_register_didat("work_m_00000000002958924945_1806979977", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000002958924945_1806979977.didat");
	xsi_register_executes(pe);
}
