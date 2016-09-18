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
static const char *ng0 = "D:/soc/mars2_0/alu.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {2U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {4U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {8U, 0U};
static unsigned int ng9[] = {7U, 0U};
static unsigned int ng10[] = {17U, 0U};
static unsigned int ng11[] = {18U, 0U};
static unsigned int ng12[] = {9U, 0U};
static unsigned int ng13[] = {10U, 0U};
static unsigned int ng14[] = {11U, 0U};
static unsigned int ng15[] = {12U, 0U};
static unsigned int ng16[] = {13U, 0U};
static int ng17[] = {0, 0};
static unsigned int ng18[] = {14U, 0U};
static unsigned int ng19[] = {15U, 0U};
static unsigned int ng20[] = {16U, 0U};
static unsigned int ng21[] = {19U, 0U};
static int ng22[] = {1, 0};
static int ng23[] = {32, 0};
static int ng24[] = {31, 0};



static void Always_12_0(char *t0)
{
    char t9[8];
    char t10[8];
    char t18[8];
    char t28[16];
    char t29[16];
    char t30[16];
    char t41[8];
    char t49[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t50;
    unsigned int t51;
    char *t52;

LAB0:    t1 = (t0 + 1720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12, ng0);
    t2 = (t0 + 2060);
    *((int *)t2) = 1;
    t3 = (t0 + 1748);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(12, ng0);

LAB5:    xsi_set_current_line(13, ng0);
    t4 = (t0 + 784U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t4, 5);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng19)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng20)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng21)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB45;

LAB46:
LAB48:
LAB47:    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB49:    goto LAB2;

LAB7:    xsi_set_current_line(14, ng0);
    t7 = (t0 + 692U);
    t8 = *((char **)t7);
    t7 = (t0 + 1104);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    goto LAB49;

LAB9:    xsi_set_current_line(15, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t4, 32, t7, 32);
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t9, 0, 0, 32);
    goto LAB49;

LAB11:    xsi_set_current_line(16, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t4, 32, t7, 32);
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t9, 0, 0, 32);
    goto LAB49;

LAB13:    xsi_set_current_line(17, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_signed_minus(t9, 32, t4, 32, t7, 32);
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t9, 0, 0, 32);
    goto LAB49;

LAB15:    xsi_set_current_line(18, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_signed_minus(t9, 32, t4, 32, t7, 32);
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t9, 0, 0, 32);
    goto LAB49;

LAB17:    xsi_set_current_line(19, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_signed_bit_and(t9, 32, t4, 32, t7, 32);
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t9, 0, 0, 32);
    goto LAB49;

LAB19:    xsi_set_current_line(20, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_signed_bit_or(t9, 32, t4, 32, t7, 32);
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t9, 0, 0, 32);
    goto LAB49;

LAB21:    xsi_set_current_line(21, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_signed_bit_xor(t9, 32, t4, 32, t7, 32);
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t9, 0, 0, 32);
    goto LAB49;

LAB23:    xsi_set_current_line(22, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_signed_bit_or(t10, 32, t4, 32, t7, 32);
    memset(t9, 0, 8);
    t3 = (t9 + 4);
    t8 = (t10 + 4);
    memcpy(t9, t10, 8);
    t11 = *((unsigned int *)t9);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t12 | t13);
    *((unsigned int *)t9) = t14;
    t15 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t15 & 4294967295U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 4294967295U);
    t17 = (t0 + 1104);
    xsi_vlogvar_assign_value(t17, t9, 0, 0, 32);
    goto LAB49;

LAB25:    xsi_set_current_line(23, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = (t0 + 600U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t9 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t9) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 0);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t15 & 31U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 31U);
    memset(t10, 0, 8);
    xsi_vlog_signed_lshift(t10, 32, t4, 32, t9, 5);
    t17 = (t0 + 1104);
    xsi_vlogvar_assign_value(t17, t10, 0, 0, 32);
    goto LAB49;

LAB27:    xsi_set_current_line(24, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = (t0 + 600U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t9 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t9) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 0);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t15 & 31U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 31U);
    memset(t10, 0, 8);
    xsi_vlog_signed_rshift(t10, 32, t4, 32, t9, 5);
    t17 = (t0 + 1104);
    xsi_vlogvar_assign_value(t17, t10, 0, 0, 32);
    goto LAB49;

LAB29:    xsi_set_current_line(25, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    memset(t18, 0, 8);
    xsi_vlog_signed_less(t18, 32, t4, 32, t7, 32);
    memset(t10, 0, 8);
    t3 = (t18 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t18);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t3) != 0)
        goto LAB52;

LAB53:    t17 = (t10 + 4);
    t16 = *((unsigned int *)t10);
    t19 = *((unsigned int *)t17);
    t20 = (t16 || t19);
    if (t20 > 0)
        goto LAB54;

LAB55:    t22 = *((unsigned int *)t10);
    t23 = (~(t22));
    t24 = *((unsigned int *)t17);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t17) > 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t10) > 0)
        goto LAB60;

LAB61:    memcpy(t9, t26, 8);

LAB62:    t27 = (t0 + 1104);
    xsi_vlogvar_assign_value(t27, t9, 0, 0, 32);
    goto LAB49;

LAB31:    xsi_set_current_line(26, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    xsi_vlogtype_concat(t28, 33, 33, 2U, t3, 1, t4, 32);
    t7 = (t0 + 692U);
    t8 = *((char **)t7);
    t7 = ((char*)((ng1)));
    xsi_vlogtype_concat(t29, 33, 33, 2U, t7, 1, t8, 32);
    xsi_vlog_unsigned_less(t30, 33, t28, 33, t29, 33);
    memset(t10, 0, 8);
    t17 = (t30 + 4);
    t11 = *((unsigned int *)t17);
    t12 = (~(t11));
    t13 = *((unsigned int *)t30);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t17) != 0)
        goto LAB65;

LAB66:    t26 = (t10 + 4);
    t16 = *((unsigned int *)t10);
    t19 = *((unsigned int *)t26);
    t20 = (t16 || t19);
    if (t20 > 0)
        goto LAB67;

LAB68:    t22 = *((unsigned int *)t10);
    t23 = (~(t22));
    t24 = *((unsigned int *)t26);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t26) > 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t10) > 0)
        goto LAB73;

LAB74:    memcpy(t9, t31, 8);

LAB75:    t32 = (t0 + 1104);
    xsi_vlogvar_assign_value(t32, t9, 0, 0, 32);
    goto LAB49;

LAB33:    xsi_set_current_line(27, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    memset(t18, 0, 8);
    xsi_vlog_signed_equal(t18, 32, t4, 32, t7, 32);
    memset(t10, 0, 8);
    t3 = (t18 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t18);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t3) != 0)
        goto LAB78;

LAB79:    t17 = (t10 + 4);
    t16 = *((unsigned int *)t10);
    t19 = *((unsigned int *)t17);
    t20 = (t16 || t19);
    if (t20 > 0)
        goto LAB80;

LAB81:    t22 = *((unsigned int *)t10);
    t23 = (~(t22));
    t24 = *((unsigned int *)t17);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t17) > 0)
        goto LAB84;

LAB85:    if (*((unsigned int *)t10) > 0)
        goto LAB86;

LAB87:    memcpy(t9, t26, 8);

LAB88:    t27 = (t0 + 1104);
    xsi_vlogvar_assign_value(t27, t9, 0, 0, 32);
    goto LAB49;

LAB35:    xsi_set_current_line(28, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    memset(t18, 0, 8);
    xsi_vlog_signed_not_equal(t18, 32, t4, 32, t7, 32);
    memset(t10, 0, 8);
    t3 = (t18 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t18);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB89;

LAB90:    if (*((unsigned int *)t3) != 0)
        goto LAB91;

LAB92:    t17 = (t10 + 4);
    t16 = *((unsigned int *)t10);
    t19 = *((unsigned int *)t17);
    t20 = (t16 || t19);
    if (t20 > 0)
        goto LAB93;

LAB94:    t22 = *((unsigned int *)t10);
    t23 = (~(t22));
    t24 = *((unsigned int *)t17);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB95;

LAB96:    if (*((unsigned int *)t17) > 0)
        goto LAB97;

LAB98:    if (*((unsigned int *)t10) > 0)
        goto LAB99;

LAB100:    memcpy(t9, t26, 8);

LAB101:    t27 = (t0 + 1104);
    xsi_vlogvar_assign_value(t27, t9, 0, 0, 32);
    goto LAB49;

LAB37:    xsi_set_current_line(29, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng17)));
    memset(t18, 0, 8);
    xsi_vlog_signed_greater(t18, 32, t4, 32, t3, 32);
    memset(t10, 0, 8);
    t7 = (t18 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t18);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB102;

LAB103:    if (*((unsigned int *)t7) != 0)
        goto LAB104;

LAB105:    t17 = (t10 + 4);
    t16 = *((unsigned int *)t10);
    t19 = *((unsigned int *)t17);
    t20 = (t16 || t19);
    if (t20 > 0)
        goto LAB106;

LAB107:    t22 = *((unsigned int *)t10);
    t23 = (~(t22));
    t24 = *((unsigned int *)t17);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB108;

LAB109:    if (*((unsigned int *)t17) > 0)
        goto LAB110;

LAB111:    if (*((unsigned int *)t10) > 0)
        goto LAB112;

LAB113:    memcpy(t9, t26, 8);

LAB114:    t27 = (t0 + 1104);
    xsi_vlogvar_assign_value(t27, t9, 0, 0, 32);
    goto LAB49;

LAB39:    xsi_set_current_line(30, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng17)));
    memset(t18, 0, 8);
    xsi_vlog_signed_greatereq(t18, 32, t4, 32, t3, 32);
    memset(t10, 0, 8);
    t7 = (t18 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t18);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB115;

LAB116:    if (*((unsigned int *)t7) != 0)
        goto LAB117;

LAB118:    t17 = (t10 + 4);
    t16 = *((unsigned int *)t10);
    t19 = *((unsigned int *)t17);
    t20 = (t16 || t19);
    if (t20 > 0)
        goto LAB119;

LAB120:    t22 = *((unsigned int *)t10);
    t23 = (~(t22));
    t24 = *((unsigned int *)t17);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB121;

LAB122:    if (*((unsigned int *)t17) > 0)
        goto LAB123;

LAB124:    if (*((unsigned int *)t10) > 0)
        goto LAB125;

LAB126:    memcpy(t9, t26, 8);

LAB127:    t27 = (t0 + 1104);
    xsi_vlogvar_assign_value(t27, t9, 0, 0, 32);
    goto LAB49;

LAB41:    xsi_set_current_line(31, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng17)));
    memset(t18, 0, 8);
    xsi_vlog_signed_less(t18, 32, t4, 32, t3, 32);
    memset(t10, 0, 8);
    t7 = (t18 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t18);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB128;

LAB129:    if (*((unsigned int *)t7) != 0)
        goto LAB130;

LAB131:    t17 = (t10 + 4);
    t16 = *((unsigned int *)t10);
    t19 = *((unsigned int *)t17);
    t20 = (t16 || t19);
    if (t20 > 0)
        goto LAB132;

LAB133:    t22 = *((unsigned int *)t10);
    t23 = (~(t22));
    t24 = *((unsigned int *)t17);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB134;

LAB135:    if (*((unsigned int *)t17) > 0)
        goto LAB136;

LAB137:    if (*((unsigned int *)t10) > 0)
        goto LAB138;

LAB139:    memcpy(t9, t26, 8);

LAB140:    t27 = (t0 + 1104);
    xsi_vlogvar_assign_value(t27, t9, 0, 0, 32);
    goto LAB49;

LAB43:    xsi_set_current_line(32, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng17)));
    memset(t18, 0, 8);
    xsi_vlog_signed_leq(t18, 32, t4, 32, t3, 32);
    memset(t10, 0, 8);
    t7 = (t18 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t18);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB141;

LAB142:    if (*((unsigned int *)t7) != 0)
        goto LAB143;

LAB144:    t17 = (t10 + 4);
    t16 = *((unsigned int *)t10);
    t19 = *((unsigned int *)t17);
    t20 = (t16 || t19);
    if (t20 > 0)
        goto LAB145;

LAB146:    t22 = *((unsigned int *)t10);
    t23 = (~(t22));
    t24 = *((unsigned int *)t17);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB147;

LAB148:    if (*((unsigned int *)t17) > 0)
        goto LAB149;

LAB150:    if (*((unsigned int *)t10) > 0)
        goto LAB151;

LAB152:    memcpy(t9, t26, 8);

LAB153:    t27 = (t0 + 1104);
    xsi_vlogvar_assign_value(t27, t9, 0, 0, 32);
    goto LAB49;

LAB45:    xsi_set_current_line(33, ng0);

LAB154:    xsi_set_current_line(34, ng0);
    xsi_set_current_line(34, ng0);
    t3 = ((char*)((ng22)));
    t4 = (t0 + 1196);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB155:    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t7 = (t0 + 600U);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    t7 = (t9 + 4);
    t17 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t9) = t12;
    t13 = *((unsigned int *)t17);
    t14 = (t13 >> 0);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t15 & 31U);
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t16 & 31U);
    memset(t10, 0, 8);
    t21 = (t4 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB157;

LAB156:    t26 = (t9 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB157;

LAB160:    if (*((unsigned int *)t4) > *((unsigned int *)t9))
        goto LAB159;

LAB158:    *((unsigned int *)t10) = 1;

LAB159:    t31 = (t10 + 4);
    t19 = *((unsigned int *)t31);
    t20 = (~(t19));
    t22 = *((unsigned int *)t10);
    t23 = (t22 & t20);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB161;

LAB162:    xsi_set_current_line(36, ng0);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t9 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t9) = t12;
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 0);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t15 & 31U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 31U);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 32, t2, 32, t9, 32);
    t8 = (t0 + 1196);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);

LAB165:    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng17)));
    memset(t9, 0, 8);
    xsi_vlog_signed_greatereq(t9, 32, t4, 32, t7, 32);
    t8 = (t9 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB166;

LAB167:    goto LAB49;

LAB50:    *((unsigned int *)t10) = 1;
    goto LAB53;

LAB52:    t8 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB53;

LAB54:    t21 = ((char*)((ng3)));
    goto LAB55;

LAB56:    t26 = ((char*)((ng1)));
    goto LAB57;

LAB58:    xsi_vlog_unsigned_bit_combine(t9, 32, t21, 32, t26, 32);
    goto LAB62;

LAB60:    memcpy(t9, t21, 8);
    goto LAB62;

LAB63:    *((unsigned int *)t10) = 1;
    goto LAB66;

LAB65:    t21 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB66;

LAB67:    t27 = ((char*)((ng3)));
    goto LAB68;

LAB69:    t31 = ((char*)((ng1)));
    goto LAB70;

LAB71:    xsi_vlog_unsigned_bit_combine(t9, 32, t27, 32, t31, 32);
    goto LAB75;

LAB73:    memcpy(t9, t27, 8);
    goto LAB75;

LAB76:    *((unsigned int *)t10) = 1;
    goto LAB79;

LAB78:    t8 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB79;

LAB80:    t21 = ((char*)((ng3)));
    goto LAB81;

LAB82:    t26 = ((char*)((ng1)));
    goto LAB83;

LAB84:    xsi_vlog_unsigned_bit_combine(t9, 32, t21, 32, t26, 32);
    goto LAB88;

LAB86:    memcpy(t9, t21, 8);
    goto LAB88;

LAB89:    *((unsigned int *)t10) = 1;
    goto LAB92;

LAB91:    t8 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB92;

LAB93:    t21 = ((char*)((ng3)));
    goto LAB94;

LAB95:    t26 = ((char*)((ng1)));
    goto LAB96;

LAB97:    xsi_vlog_unsigned_bit_combine(t9, 32, t21, 32, t26, 32);
    goto LAB101;

LAB99:    memcpy(t9, t21, 8);
    goto LAB101;

LAB102:    *((unsigned int *)t10) = 1;
    goto LAB105;

LAB104:    t8 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB105;

LAB106:    t21 = ((char*)((ng3)));
    goto LAB107;

LAB108:    t26 = ((char*)((ng1)));
    goto LAB109;

LAB110:    xsi_vlog_unsigned_bit_combine(t9, 32, t21, 32, t26, 32);
    goto LAB114;

LAB112:    memcpy(t9, t21, 8);
    goto LAB114;

LAB115:    *((unsigned int *)t10) = 1;
    goto LAB118;

LAB117:    t8 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB118;

LAB119:    t21 = ((char*)((ng3)));
    goto LAB120;

LAB121:    t26 = ((char*)((ng1)));
    goto LAB122;

LAB123:    xsi_vlog_unsigned_bit_combine(t9, 32, t21, 32, t26, 32);
    goto LAB127;

LAB125:    memcpy(t9, t21, 8);
    goto LAB127;

LAB128:    *((unsigned int *)t10) = 1;
    goto LAB131;

LAB130:    t8 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB131;

LAB132:    t21 = ((char*)((ng3)));
    goto LAB133;

LAB134:    t26 = ((char*)((ng1)));
    goto LAB135;

LAB136:    xsi_vlog_unsigned_bit_combine(t9, 32, t21, 32, t26, 32);
    goto LAB140;

LAB138:    memcpy(t9, t21, 8);
    goto LAB140;

LAB141:    *((unsigned int *)t10) = 1;
    goto LAB144;

LAB143:    t8 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB144;

LAB145:    t21 = ((char*)((ng3)));
    goto LAB146;

LAB147:    t26 = ((char*)((ng1)));
    goto LAB148;

LAB149:    xsi_vlog_unsigned_bit_combine(t9, 32, t21, 32, t26, 32);
    goto LAB153;

LAB151:    memcpy(t9, t21, 8);
    goto LAB153;

LAB157:    t27 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB159;

LAB161:    xsi_set_current_line(35, ng0);
    t32 = (t0 + 692U);
    t33 = *((char **)t32);
    memset(t18, 0, 8);
    t32 = (t18 + 4);
    t34 = (t33 + 4);
    t25 = *((unsigned int *)t33);
    t35 = (t25 >> 31);
    t36 = (t35 & 1);
    *((unsigned int *)t18) = t36;
    t37 = *((unsigned int *)t34);
    t38 = (t37 >> 31);
    t39 = (t38 & 1);
    *((unsigned int *)t32) = t39;
    t40 = (t0 + 1104);
    t42 = (t0 + 1104);
    t43 = (t42 + 44U);
    t44 = *((char **)t43);
    t45 = ((char*)((ng23)));
    t46 = (t0 + 1196);
    t47 = (t46 + 36U);
    t48 = *((char **)t47);
    memset(t49, 0, 8);
    xsi_vlog_signed_minus(t49, 32, t45, 32, t48, 32);
    xsi_vlog_generic_convert_bit_index(t41, t44, 2, t49, 32, 1);
    t50 = (t41 + 4);
    t51 = *((unsigned int *)t50);
    t6 = (!(t51));
    if (t6 == 1)
        goto LAB163;

LAB164:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng22)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t4, 32, t7, 32);
    t8 = (t0 + 1196);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB155;

LAB163:    xsi_vlogvar_assign_value(t40, t18, 0, *((unsigned int *)t41), 1);
    goto LAB164;

LAB166:    xsi_set_current_line(37, ng0);
    t17 = (t0 + 692U);
    t21 = *((char **)t17);
    t17 = (t0 + 668U);
    t26 = (t17 + 44U);
    t27 = *((char **)t26);
    t31 = (t0 + 1196);
    t32 = (t31 + 36U);
    t33 = *((char **)t32);
    t34 = (t0 + 600U);
    t40 = *((char **)t34);
    memset(t18, 0, 8);
    t34 = (t18 + 4);
    t42 = (t40 + 4);
    t16 = *((unsigned int *)t40);
    t19 = (t16 >> 0);
    *((unsigned int *)t18) = t19;
    t20 = *((unsigned int *)t42);
    t22 = (t20 >> 0);
    *((unsigned int *)t34) = t22;
    t23 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t23 & 31U);
    t24 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t24 & 31U);
    memset(t41, 0, 8);
    xsi_vlog_unsigned_add(t41, 32, t33, 32, t18, 32);
    xsi_vlog_generic_get_index_select_value(t10, 1, t21, t27, 2, t41, 32, 2);
    t43 = (t0 + 1104);
    t44 = (t0 + 1104);
    t45 = (t44 + 44U);
    t46 = *((char **)t45);
    t47 = (t0 + 1196);
    t48 = (t47 + 36U);
    t50 = *((char **)t48);
    xsi_vlog_generic_convert_bit_index(t49, t46, 2, t50, 32, 1);
    t52 = (t49 + 4);
    t25 = *((unsigned int *)t52);
    t6 = (!(t25));
    if (t6 == 1)
        goto LAB168;

LAB169:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng22)));
    memset(t9, 0, 8);
    xsi_vlog_signed_minus(t9, 32, t4, 32, t7, 32);
    t8 = (t0 + 1196);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB165;

LAB168:    xsi_vlogvar_assign_value(t43, t10, 0, *((unsigned int *)t49), 1);
    goto LAB169;

}

static void Cont_43_1(char *t0)
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
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;

LAB0:    t1 = (t0 + 1864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1104);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t6 = (t0 + 1104);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng17)));
    xsi_vlog_generic_get_index_select_value(t5, 6, t4, t8, 2, t9, 32, 1);
    t10 = (t0 + 2112);
    t11 = (t10 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    memset(t14, 0, 8);
    t15 = 63U;
    t16 = t15;
    t17 = (t5 + 4);
    t18 = *((unsigned int *)t5);
    t15 = (t15 & t18);
    t19 = *((unsigned int *)t17);
    t16 = (t16 & t19);
    t20 = (t14 + 4);
    t21 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t21 | t15);
    t22 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t22 | t16);
    xsi_driver_vfirst_trans(t10, 0, 5);
    t23 = (t0 + 2068);
    *((int *)t23) = 1;

LAB1:    return;
}


extern void work_m_00000000002391890253_2725559894_init()
{
	static char *pe[] = {(void *)Always_12_0,(void *)Cont_43_1};
	xsi_register_didat("work_m_00000000002391890253_2725559894", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000002391890253_2725559894.didat");
	xsi_register_executes(pe);
}
