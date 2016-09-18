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
static const char *ng0 = "D:/soc/mars2_0/lw.v";
static unsigned int ng1[] = {35U, 0U};
static unsigned int ng2[] = {37U, 0U};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {33U, 0U};
static int ng6[] = {16, 0};
static unsigned int ng7[] = {36U, 0U};
static unsigned int ng8[] = {2U, 0U};
static unsigned int ng9[] = {3U, 0U};
static unsigned int ng10[] = {32U, 0U};
static int ng11[] = {24, 0};



static void Always_10_0(char *t0)
{
    char t9[8];
    char t17[8];
    char t18[8];
    char t30[8];
    char t31[8];
    char t33[8];
    char t42[8];
    char t43[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    int t16;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t32;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;

LAB0:    t1 = (t0 + 1536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(10, ng0);
    t2 = (t0 + 1732);
    *((int *)t2) = 1;
    t3 = (t0 + 1564);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(11, ng0);

LAB5:    xsi_set_current_line(12, ng0);
    t4 = (t0 + 600U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t4, 6);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:
LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(14, ng0);
    t7 = (t0 + 784U);
    t8 = *((char **)t7);
    t7 = (t0 + 1012);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    goto LAB19;

LAB9:    xsi_set_current_line(17, ng0);

LAB20:    xsi_set_current_line(18, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t9 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 1);
    t12 = (t11 & 1);
    *((unsigned int *)t9) = t12;
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 1);
    t15 = (t14 & 1);
    *((unsigned int *)t3) = t15;

LAB21:    t8 = ((char*)((ng3)));
    t16 = xsi_vlog_unsigned_case_compare(t9, 1, t8, 1);
    if (t16 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t9, 1, t2, 1);
    if (t6 == 1)
        goto LAB24;

LAB25:
LAB27:
LAB26:
LAB28:    goto LAB19;

LAB11:    xsi_set_current_line(26, ng0);

LAB29:    xsi_set_current_line(27, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    memset(t17, 0, 8);
    t3 = (t17 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 1);
    t12 = (t11 & 1);
    *((unsigned int *)t17) = t12;
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 1);
    t15 = (t14 & 1);
    *((unsigned int *)t3) = t15;

LAB30:    t8 = ((char*)((ng3)));
    t16 = xsi_vlog_unsigned_case_compare(t17, 1, t8, 1);
    if (t16 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t17, 1, t2, 1);
    if (t6 == 1)
        goto LAB33;

LAB34:
LAB36:
LAB35:
LAB37:    goto LAB19;

LAB13:    xsi_set_current_line(35, ng0);

LAB38:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    memset(t18, 0, 8);
    t3 = (t18 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t18) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 0);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t14 & 3U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 3U);

LAB39:    t8 = ((char*)((ng3)));
    t16 = xsi_vlog_unsigned_case_compare(t18, 2, t8, 2);
    if (t16 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t18, 2, t2, 2);
    if (t6 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t18, 2, t2, 2);
    if (t6 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t18, 2, t2, 2);
    if (t6 == 1)
        goto LAB46;

LAB47:
LAB49:
LAB48:
LAB50:    goto LAB19;

LAB15:    xsi_set_current_line(46, ng0);

LAB51:    xsi_set_current_line(47, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    memset(t30, 0, 8);
    t3 = (t30 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t30) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 0);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t14 & 3U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 3U);

LAB52:    t8 = ((char*)((ng3)));
    t16 = xsi_vlog_unsigned_case_compare(t30, 2, t8, 2);
    if (t16 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t30, 2, t2, 2);
    if (t6 == 1)
        goto LAB55;

LAB56:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t30, 2, t2, 2);
    if (t6 == 1)
        goto LAB57;

LAB58:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t30, 2, t2, 2);
    if (t6 == 1)
        goto LAB59;

LAB60:
LAB62:
LAB61:
LAB63:    goto LAB19;

LAB22:    xsi_set_current_line(19, ng0);
    t19 = (t0 + 784U);
    t20 = *((char **)t19);
    memset(t18, 0, 8);
    t19 = (t18 + 4);
    t21 = (t20 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (t22 >> 0);
    *((unsigned int *)t18) = t23;
    t24 = *((unsigned int *)t21);
    t25 = (t24 >> 0);
    *((unsigned int *)t19) = t25;
    t26 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t26 & 65535U);
    t27 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t27 & 65535U);
    t28 = ((char*)((ng3)));
    xsi_vlogtype_concat(t17, 32, 32, 2U, t28, 16, t18, 16);
    t29 = (t0 + 1012);
    xsi_vlogvar_assign_value(t29, t17, 0, 0, 32);
    goto LAB28;

LAB24:    xsi_set_current_line(20, ng0);
    t3 = (t0 + 784U);
    t4 = *((char **)t3);
    memset(t18, 0, 8);
    t3 = (t18 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 16);
    *((unsigned int *)t18) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 16);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t14 & 65535U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 65535U);
    t8 = ((char*)((ng3)));
    xsi_vlogtype_concat(t17, 32, 32, 2U, t8, 16, t18, 16);
    t19 = (t0 + 1012);
    xsi_vlogvar_assign_value(t19, t17, 0, 0, 32);
    goto LAB28;

LAB31:    xsi_set_current_line(28, ng0);
    t19 = (t0 + 784U);
    t20 = *((char **)t19);
    memset(t30, 0, 8);
    t19 = (t30 + 4);
    t21 = (t20 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (t22 >> 0);
    *((unsigned int *)t30) = t23;
    t24 = *((unsigned int *)t21);
    t25 = (t24 >> 0);
    *((unsigned int *)t19) = t25;
    t26 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t26 & 65535U);
    t27 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t27 & 65535U);
    t28 = ((char*)((ng6)));
    t29 = (t0 + 784U);
    t32 = *((char **)t29);
    memset(t33, 0, 8);
    t29 = (t33 + 4);
    t34 = (t32 + 4);
    t35 = *((unsigned int *)t32);
    t36 = (t35 >> 15);
    t37 = (t36 & 1);
    *((unsigned int *)t33) = t37;
    t38 = *((unsigned int *)t34);
    t39 = (t38 >> 15);
    t40 = (t39 & 1);
    *((unsigned int *)t29) = t40;
    xsi_vlog_mul_concat(t31, 16, 1, t28, 1U, t33, 1);
    xsi_vlogtype_concat(t18, 32, 32, 2U, t31, 16, t30, 16);
    t41 = (t0 + 1012);
    xsi_vlogvar_assign_value(t41, t18, 0, 0, 32);
    goto LAB37;

LAB33:    xsi_set_current_line(29, ng0);
    t3 = (t0 + 784U);
    t4 = *((char **)t3);
    memset(t30, 0, 8);
    t3 = (t30 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 16);
    *((unsigned int *)t30) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 16);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t14 & 65535U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 65535U);
    t8 = ((char*)((ng6)));
    t19 = (t0 + 784U);
    t20 = *((char **)t19);
    memset(t33, 0, 8);
    t19 = (t33 + 4);
    t21 = (t20 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (t22 >> 31);
    t24 = (t23 & 1);
    *((unsigned int *)t33) = t24;
    t25 = *((unsigned int *)t21);
    t26 = (t25 >> 31);
    t27 = (t26 & 1);
    *((unsigned int *)t19) = t27;
    xsi_vlog_mul_concat(t31, 16, 1, t8, 1U, t33, 1);
    xsi_vlogtype_concat(t18, 32, 32, 2U, t31, 16, t30, 16);
    t28 = (t0 + 1012);
    xsi_vlogvar_assign_value(t28, t18, 0, 0, 32);
    goto LAB37;

LAB40:    xsi_set_current_line(37, ng0);
    t19 = (t0 + 784U);
    t20 = *((char **)t19);
    memset(t31, 0, 8);
    t19 = (t31 + 4);
    t21 = (t20 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (t22 >> 0);
    *((unsigned int *)t31) = t23;
    t24 = *((unsigned int *)t21);
    t25 = (t24 >> 0);
    *((unsigned int *)t19) = t25;
    t26 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t26 & 255U);
    t27 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t27 & 255U);
    t28 = ((char*)((ng3)));
    xsi_vlogtype_concat(t30, 32, 32, 2U, t28, 24, t31, 8);
    t29 = (t0 + 1012);
    xsi_vlogvar_assign_value(t29, t30, 0, 0, 32);
    goto LAB50;

LAB42:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 784U);
    t4 = *((char **)t3);
    memset(t31, 0, 8);
    t3 = (t31 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 8);
    *((unsigned int *)t31) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 8);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t14 & 255U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 255U);
    t8 = ((char*)((ng3)));
    xsi_vlogtype_concat(t30, 32, 32, 2U, t8, 24, t31, 8);
    t19 = (t0 + 1012);
    xsi_vlogvar_assign_value(t19, t30, 0, 0, 32);
    goto LAB50;

LAB44:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 784U);
    t4 = *((char **)t3);
    memset(t31, 0, 8);
    t3 = (t31 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 16);
    *((unsigned int *)t31) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 16);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t14 & 255U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 255U);
    t8 = ((char*)((ng3)));
    xsi_vlogtype_concat(t30, 32, 32, 2U, t8, 24, t31, 8);
    t19 = (t0 + 1012);
    xsi_vlogvar_assign_value(t19, t30, 0, 0, 32);
    goto LAB50;

LAB46:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 784U);
    t4 = *((char **)t3);
    memset(t31, 0, 8);
    t3 = (t31 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 24);
    *((unsigned int *)t31) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 24);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t14 & 255U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 255U);
    t8 = ((char*)((ng3)));
    xsi_vlogtype_concat(t30, 32, 32, 2U, t8, 24, t31, 8);
    t19 = (t0 + 1012);
    xsi_vlogvar_assign_value(t19, t30, 0, 0, 32);
    goto LAB50;

LAB53:    xsi_set_current_line(48, ng0);
    t19 = (t0 + 784U);
    t20 = *((char **)t19);
    memset(t33, 0, 8);
    t19 = (t33 + 4);
    t21 = (t20 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (t22 >> 0);
    *((unsigned int *)t33) = t23;
    t24 = *((unsigned int *)t21);
    t25 = (t24 >> 0);
    *((unsigned int *)t19) = t25;
    t26 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t26 & 255U);
    t27 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t27 & 255U);
    t28 = ((char*)((ng11)));
    t29 = (t0 + 784U);
    t32 = *((char **)t29);
    memset(t43, 0, 8);
    t29 = (t43 + 4);
    t34 = (t32 + 4);
    t35 = *((unsigned int *)t32);
    t36 = (t35 >> 7);
    t37 = (t36 & 1);
    *((unsigned int *)t43) = t37;
    t38 = *((unsigned int *)t34);
    t39 = (t38 >> 7);
    t40 = (t39 & 1);
    *((unsigned int *)t29) = t40;
    xsi_vlog_mul_concat(t42, 24, 1, t28, 1U, t43, 1);
    xsi_vlogtype_concat(t31, 32, 32, 2U, t42, 24, t33, 8);
    t41 = (t0 + 1012);
    xsi_vlogvar_assign_value(t41, t31, 0, 0, 32);
    goto LAB63;

LAB55:    xsi_set_current_line(49, ng0);
    t3 = (t0 + 784U);
    t4 = *((char **)t3);
    memset(t33, 0, 8);
    t3 = (t33 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 8);
    *((unsigned int *)t33) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 8);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t14 & 255U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 255U);
    t8 = ((char*)((ng11)));
    t19 = (t0 + 784U);
    t20 = *((char **)t19);
    memset(t43, 0, 8);
    t19 = (t43 + 4);
    t21 = (t20 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (t22 >> 15);
    t24 = (t23 & 1);
    *((unsigned int *)t43) = t24;
    t25 = *((unsigned int *)t21);
    t26 = (t25 >> 15);
    t27 = (t26 & 1);
    *((unsigned int *)t19) = t27;
    xsi_vlog_mul_concat(t42, 24, 1, t8, 1U, t43, 1);
    xsi_vlogtype_concat(t31, 32, 32, 2U, t42, 24, t33, 8);
    t28 = (t0 + 1012);
    xsi_vlogvar_assign_value(t28, t31, 0, 0, 32);
    goto LAB63;

LAB57:    xsi_set_current_line(50, ng0);
    t3 = (t0 + 784U);
    t4 = *((char **)t3);
    memset(t33, 0, 8);
    t3 = (t33 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 16);
    *((unsigned int *)t33) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 16);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t14 & 255U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 255U);
    t8 = ((char*)((ng11)));
    t19 = (t0 + 784U);
    t20 = *((char **)t19);
    memset(t43, 0, 8);
    t19 = (t43 + 4);
    t21 = (t20 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (t22 >> 23);
    t24 = (t23 & 1);
    *((unsigned int *)t43) = t24;
    t25 = *((unsigned int *)t21);
    t26 = (t25 >> 23);
    t27 = (t26 & 1);
    *((unsigned int *)t19) = t27;
    xsi_vlog_mul_concat(t42, 24, 1, t8, 1U, t43, 1);
    xsi_vlogtype_concat(t31, 32, 32, 2U, t42, 24, t33, 8);
    t28 = (t0 + 1012);
    xsi_vlogvar_assign_value(t28, t31, 0, 0, 32);
    goto LAB63;

LAB59:    xsi_set_current_line(51, ng0);
    t3 = (t0 + 784U);
    t4 = *((char **)t3);
    memset(t33, 0, 8);
    t3 = (t33 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 24);
    *((unsigned int *)t33) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 24);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t14 & 255U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 255U);
    t8 = ((char*)((ng11)));
    t19 = (t0 + 784U);
    t20 = *((char **)t19);
    memset(t43, 0, 8);
    t19 = (t43 + 4);
    t21 = (t20 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (t22 >> 31);
    t24 = (t23 & 1);
    *((unsigned int *)t43) = t24;
    t25 = *((unsigned int *)t21);
    t26 = (t25 >> 31);
    t27 = (t26 & 1);
    *((unsigned int *)t19) = t27;
    xsi_vlog_mul_concat(t42, 24, 1, t8, 1U, t43, 1);
    xsi_vlogtype_concat(t31, 32, 32, 2U, t42, 24, t33, 8);
    t28 = (t0 + 1012);
    xsi_vlogvar_assign_value(t28, t31, 0, 0, 32);
    goto LAB63;

}


extern void work_m_00000000000710532766_0891265718_init()
{
	static char *pe[] = {(void *)Always_10_0};
	xsi_register_didat("work_m_00000000000710532766_0891265718", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000000710532766_0891265718.didat");
	xsi_register_executes(pe);
}
