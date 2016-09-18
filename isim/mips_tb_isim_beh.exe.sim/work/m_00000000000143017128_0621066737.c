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
static const char *ng0 = "D:/soc/mars2_0/RF.v";
static int ng1[] = {0, 0};
static int ng2[] = {32, 0};
static int ng3[] = {1, 0};
static const char *ng4 = "R[00-07]=%8X, %8X, %8X, %8X, %8X, %8X, %8X, %8X";
static int ng5[] = {2, 0};
static int ng6[] = {3, 0};
static int ng7[] = {4, 0};
static int ng8[] = {5, 0};
static int ng9[] = {6, 0};
static int ng10[] = {7, 0};
static const char *ng11 = "R[08-15]=%8X, %8X, %8X, %8X, %8X, %8X, %8X, %8X";
static int ng12[] = {8, 0};
static int ng13[] = {9, 0};
static int ng14[] = {10, 0};
static int ng15[] = {11, 0};
static int ng16[] = {12, 0};
static int ng17[] = {13, 0};
static int ng18[] = {14, 0};
static int ng19[] = {15, 0};
static const char *ng20 = "R[16-23]=%8X, %8X, %8X, %8X, %8X, %8X, %8X, %8X";
static int ng21[] = {16, 0};
static int ng22[] = {17, 0};
static int ng23[] = {18, 0};
static int ng24[] = {19, 0};
static int ng25[] = {20, 0};
static int ng26[] = {21, 0};
static int ng27[] = {22, 0};
static int ng28[] = {23, 0};
static const char *ng29 = "R[24-31]=%8X, %8X, %8X, %8X, %8X, %8X, %8X, %8X";
static int ng30[] = {24, 0};
static int ng31[] = {25, 0};
static int ng32[] = {26, 0};
static int ng33[] = {27, 0};
static int ng34[] = {28, 0};
static int ng35[] = {29, 0};
static int ng36[] = {30, 0};
static int ng37[] = {31, 0};
static unsigned int ng38[] = {0U, 0U};



static void Initial_13_0(char *t0)
{
    char t5[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
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

LAB0:    xsi_set_current_line(13, ng0);

LAB2:    xsi_set_current_line(14, ng0);
    xsi_set_current_line(14, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1564);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 1564);
    t2 = (t1 + 36U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(15, ng0);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 1472);
    t16 = (t0 + 1472);
    t17 = (t16 + 44U);
    t18 = *((char **)t17);
    t19 = (t0 + 1472);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    t22 = (t0 + 1564);
    t23 = (t22 + 36U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(14, ng0);
    t1 = (t0 + 1564);
    t2 = (t1 + 36U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 1564);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB6:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t15), t35);
    goto LAB7;

}

static void Always_18_1(char *t0)
{
    char t13[8];
    char t14[8];
    char t42[8];
    char t53[8];
    char t64[8];
    char t75[8];
    char t86[8];
    char t96[8];
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
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    int t24;
    char *t25;
    unsigned int t26;
    int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t97;
    char *t98;
    char *t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;

LAB0:    t1 = (t0 + 2232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 2716);
    *((int *)t2) = 1;
    t3 = (t0 + 2260);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(18, ng0);

LAB5:    xsi_set_current_line(19, ng0);
    t4 = (t0 + 1060U);
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
LAB8:    xsi_set_current_line(22, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1472);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t11 = (t0 + 1472);
    t12 = (t11 + 44U);
    t15 = *((char **)t12);
    t16 = (t0 + 1472);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t13, 32, t5, t15, t18, 2, 1, t19, 32, 1);
    t20 = (t0 + 1472);
    t21 = (t20 + 36U);
    t22 = *((char **)t21);
    t25 = (t0 + 1472);
    t33 = (t25 + 44U);
    t34 = *((char **)t33);
    t35 = (t0 + 1472);
    t36 = (t35 + 40U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t14, 32, t22, t34, t37, 2, 1, t38, 32, 1);
    t39 = (t0 + 1472);
    t40 = (t39 + 36U);
    t41 = *((char **)t40);
    t43 = (t0 + 1472);
    t44 = (t43 + 44U);
    t45 = *((char **)t44);
    t46 = (t0 + 1472);
    t47 = (t46 + 40U);
    t48 = *((char **)t47);
    t49 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t42, 32, t41, t45, t48, 2, 1, t49, 32, 1);
    t50 = (t0 + 1472);
    t51 = (t50 + 36U);
    t52 = *((char **)t51);
    t54 = (t0 + 1472);
    t55 = (t54 + 44U);
    t56 = *((char **)t55);
    t57 = (t0 + 1472);
    t58 = (t57 + 40U);
    t59 = *((char **)t58);
    t60 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t53, 32, t52, t56, t59, 2, 1, t60, 32, 1);
    t61 = (t0 + 1472);
    t62 = (t61 + 36U);
    t63 = *((char **)t62);
    t65 = (t0 + 1472);
    t66 = (t65 + 44U);
    t67 = *((char **)t66);
    t68 = (t0 + 1472);
    t69 = (t68 + 40U);
    t70 = *((char **)t69);
    t71 = ((char*)((ng8)));
    xsi_vlog_generic_get_array_select_value(t64, 32, t63, t67, t70, 2, 1, t71, 32, 1);
    t72 = (t0 + 1472);
    t73 = (t72 + 36U);
    t74 = *((char **)t73);
    t76 = (t0 + 1472);
    t77 = (t76 + 44U);
    t78 = *((char **)t77);
    t79 = (t0 + 1472);
    t80 = (t79 + 40U);
    t81 = *((char **)t80);
    t82 = ((char*)((ng9)));
    xsi_vlog_generic_get_array_select_value(t75, 32, t74, t78, t81, 2, 1, t82, 32, 1);
    t83 = (t0 + 1472);
    t84 = (t83 + 36U);
    t85 = *((char **)t84);
    t87 = (t0 + 1472);
    t88 = (t87 + 44U);
    t89 = *((char **)t88);
    t90 = (t0 + 1472);
    t91 = (t90 + 40U);
    t92 = *((char **)t91);
    t93 = ((char*)((ng10)));
    xsi_vlog_generic_get_array_select_value(t86, 32, t85, t89, t92, 2, 1, t93, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng4, 9, t0, (char)119, t2, 32, (char)118, t13, 32, (char)118, t14, 32, (char)118, t42, 32, (char)118, t53, 32, (char)118, t64, 32, (char)118, t75, 32, (char)118, t86, 32);
    xsi_set_current_line(23, ng0);
    t2 = (t0 + 1472);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1472);
    t11 = (t5 + 44U);
    t12 = *((char **)t11);
    t15 = (t0 + 1472);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng12)));
    xsi_vlog_generic_get_array_select_value(t13, 32, t4, t12, t17, 2, 1, t18, 32, 1);
    t19 = (t0 + 1472);
    t20 = (t19 + 36U);
    t21 = *((char **)t20);
    t22 = (t0 + 1472);
    t25 = (t22 + 44U);
    t33 = *((char **)t25);
    t34 = (t0 + 1472);
    t35 = (t34 + 40U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng13)));
    xsi_vlog_generic_get_array_select_value(t14, 32, t21, t33, t36, 2, 1, t37, 32, 1);
    t38 = (t0 + 1472);
    t39 = (t38 + 36U);
    t40 = *((char **)t39);
    t41 = (t0 + 1472);
    t43 = (t41 + 44U);
    t44 = *((char **)t43);
    t45 = (t0 + 1472);
    t46 = (t45 + 40U);
    t47 = *((char **)t46);
    t48 = ((char*)((ng14)));
    xsi_vlog_generic_get_array_select_value(t42, 32, t40, t44, t47, 2, 1, t48, 32, 1);
    t49 = (t0 + 1472);
    t50 = (t49 + 36U);
    t51 = *((char **)t50);
    t52 = (t0 + 1472);
    t54 = (t52 + 44U);
    t55 = *((char **)t54);
    t56 = (t0 + 1472);
    t57 = (t56 + 40U);
    t58 = *((char **)t57);
    t59 = ((char*)((ng15)));
    xsi_vlog_generic_get_array_select_value(t53, 32, t51, t55, t58, 2, 1, t59, 32, 1);
    t60 = (t0 + 1472);
    t61 = (t60 + 36U);
    t62 = *((char **)t61);
    t63 = (t0 + 1472);
    t65 = (t63 + 44U);
    t66 = *((char **)t65);
    t67 = (t0 + 1472);
    t68 = (t67 + 40U);
    t69 = *((char **)t68);
    t70 = ((char*)((ng16)));
    xsi_vlog_generic_get_array_select_value(t64, 32, t62, t66, t69, 2, 1, t70, 32, 1);
    t71 = (t0 + 1472);
    t72 = (t71 + 36U);
    t73 = *((char **)t72);
    t74 = (t0 + 1472);
    t76 = (t74 + 44U);
    t77 = *((char **)t76);
    t78 = (t0 + 1472);
    t79 = (t78 + 40U);
    t80 = *((char **)t79);
    t81 = ((char*)((ng17)));
    xsi_vlog_generic_get_array_select_value(t75, 32, t73, t77, t80, 2, 1, t81, 32, 1);
    t82 = (t0 + 1472);
    t83 = (t82 + 36U);
    t84 = *((char **)t83);
    t85 = (t0 + 1472);
    t87 = (t85 + 44U);
    t88 = *((char **)t87);
    t89 = (t0 + 1472);
    t90 = (t89 + 40U);
    t91 = *((char **)t90);
    t92 = ((char*)((ng18)));
    xsi_vlog_generic_get_array_select_value(t86, 32, t84, t88, t91, 2, 1, t92, 32, 1);
    t93 = (t0 + 1472);
    t94 = (t93 + 36U);
    t95 = *((char **)t94);
    t97 = (t0 + 1472);
    t98 = (t97 + 44U);
    t99 = *((char **)t98);
    t100 = (t0 + 1472);
    t101 = (t100 + 40U);
    t102 = *((char **)t101);
    t103 = ((char*)((ng19)));
    xsi_vlog_generic_get_array_select_value(t96, 32, t95, t99, t102, 2, 1, t103, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng11, 9, t0, (char)118, t13, 32, (char)118, t14, 32, (char)118, t42, 32, (char)118, t53, 32, (char)118, t64, 32, (char)118, t75, 32, (char)118, t86, 32, (char)118, t96, 32);
    xsi_set_current_line(24, ng0);
    t2 = (t0 + 1472);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1472);
    t11 = (t5 + 44U);
    t12 = *((char **)t11);
    t15 = (t0 + 1472);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng21)));
    xsi_vlog_generic_get_array_select_value(t13, 32, t4, t12, t17, 2, 1, t18, 32, 1);
    t19 = (t0 + 1472);
    t20 = (t19 + 36U);
    t21 = *((char **)t20);
    t22 = (t0 + 1472);
    t25 = (t22 + 44U);
    t33 = *((char **)t25);
    t34 = (t0 + 1472);
    t35 = (t34 + 40U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng22)));
    xsi_vlog_generic_get_array_select_value(t14, 32, t21, t33, t36, 2, 1, t37, 32, 1);
    t38 = (t0 + 1472);
    t39 = (t38 + 36U);
    t40 = *((char **)t39);
    t41 = (t0 + 1472);
    t43 = (t41 + 44U);
    t44 = *((char **)t43);
    t45 = (t0 + 1472);
    t46 = (t45 + 40U);
    t47 = *((char **)t46);
    t48 = ((char*)((ng23)));
    xsi_vlog_generic_get_array_select_value(t42, 32, t40, t44, t47, 2, 1, t48, 32, 1);
    t49 = (t0 + 1472);
    t50 = (t49 + 36U);
    t51 = *((char **)t50);
    t52 = (t0 + 1472);
    t54 = (t52 + 44U);
    t55 = *((char **)t54);
    t56 = (t0 + 1472);
    t57 = (t56 + 40U);
    t58 = *((char **)t57);
    t59 = ((char*)((ng24)));
    xsi_vlog_generic_get_array_select_value(t53, 32, t51, t55, t58, 2, 1, t59, 32, 1);
    t60 = (t0 + 1472);
    t61 = (t60 + 36U);
    t62 = *((char **)t61);
    t63 = (t0 + 1472);
    t65 = (t63 + 44U);
    t66 = *((char **)t65);
    t67 = (t0 + 1472);
    t68 = (t67 + 40U);
    t69 = *((char **)t68);
    t70 = ((char*)((ng25)));
    xsi_vlog_generic_get_array_select_value(t64, 32, t62, t66, t69, 2, 1, t70, 32, 1);
    t71 = (t0 + 1472);
    t72 = (t71 + 36U);
    t73 = *((char **)t72);
    t74 = (t0 + 1472);
    t76 = (t74 + 44U);
    t77 = *((char **)t76);
    t78 = (t0 + 1472);
    t79 = (t78 + 40U);
    t80 = *((char **)t79);
    t81 = ((char*)((ng26)));
    xsi_vlog_generic_get_array_select_value(t75, 32, t73, t77, t80, 2, 1, t81, 32, 1);
    t82 = (t0 + 1472);
    t83 = (t82 + 36U);
    t84 = *((char **)t83);
    t85 = (t0 + 1472);
    t87 = (t85 + 44U);
    t88 = *((char **)t87);
    t89 = (t0 + 1472);
    t90 = (t89 + 40U);
    t91 = *((char **)t90);
    t92 = ((char*)((ng27)));
    xsi_vlog_generic_get_array_select_value(t86, 32, t84, t88, t91, 2, 1, t92, 32, 1);
    t93 = (t0 + 1472);
    t94 = (t93 + 36U);
    t95 = *((char **)t94);
    t97 = (t0 + 1472);
    t98 = (t97 + 44U);
    t99 = *((char **)t98);
    t100 = (t0 + 1472);
    t101 = (t100 + 40U);
    t102 = *((char **)t101);
    t103 = ((char*)((ng28)));
    xsi_vlog_generic_get_array_select_value(t96, 32, t95, t99, t102, 2, 1, t103, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng20, 9, t0, (char)118, t13, 32, (char)118, t14, 32, (char)118, t42, 32, (char)118, t53, 32, (char)118, t64, 32, (char)118, t75, 32, (char)118, t86, 32, (char)118, t96, 32);
    xsi_set_current_line(25, ng0);
    t2 = (t0 + 1472);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1472);
    t11 = (t5 + 44U);
    t12 = *((char **)t11);
    t15 = (t0 + 1472);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng30)));
    xsi_vlog_generic_get_array_select_value(t13, 32, t4, t12, t17, 2, 1, t18, 32, 1);
    t19 = (t0 + 1472);
    t20 = (t19 + 36U);
    t21 = *((char **)t20);
    t22 = (t0 + 1472);
    t25 = (t22 + 44U);
    t33 = *((char **)t25);
    t34 = (t0 + 1472);
    t35 = (t34 + 40U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng31)));
    xsi_vlog_generic_get_array_select_value(t14, 32, t21, t33, t36, 2, 1, t37, 32, 1);
    t38 = (t0 + 1472);
    t39 = (t38 + 36U);
    t40 = *((char **)t39);
    t41 = (t0 + 1472);
    t43 = (t41 + 44U);
    t44 = *((char **)t43);
    t45 = (t0 + 1472);
    t46 = (t45 + 40U);
    t47 = *((char **)t46);
    t48 = ((char*)((ng32)));
    xsi_vlog_generic_get_array_select_value(t42, 32, t40, t44, t47, 2, 1, t48, 32, 1);
    t49 = (t0 + 1472);
    t50 = (t49 + 36U);
    t51 = *((char **)t50);
    t52 = (t0 + 1472);
    t54 = (t52 + 44U);
    t55 = *((char **)t54);
    t56 = (t0 + 1472);
    t57 = (t56 + 40U);
    t58 = *((char **)t57);
    t59 = ((char*)((ng33)));
    xsi_vlog_generic_get_array_select_value(t53, 32, t51, t55, t58, 2, 1, t59, 32, 1);
    t60 = (t0 + 1472);
    t61 = (t60 + 36U);
    t62 = *((char **)t61);
    t63 = (t0 + 1472);
    t65 = (t63 + 44U);
    t66 = *((char **)t65);
    t67 = (t0 + 1472);
    t68 = (t67 + 40U);
    t69 = *((char **)t68);
    t70 = ((char*)((ng34)));
    xsi_vlog_generic_get_array_select_value(t64, 32, t62, t66, t69, 2, 1, t70, 32, 1);
    t71 = (t0 + 1472);
    t72 = (t71 + 36U);
    t73 = *((char **)t72);
    t74 = (t0 + 1472);
    t76 = (t74 + 44U);
    t77 = *((char **)t76);
    t78 = (t0 + 1472);
    t79 = (t78 + 40U);
    t80 = *((char **)t79);
    t81 = ((char*)((ng35)));
    xsi_vlog_generic_get_array_select_value(t75, 32, t73, t77, t80, 2, 1, t81, 32, 1);
    t82 = (t0 + 1472);
    t83 = (t82 + 36U);
    t84 = *((char **)t83);
    t85 = (t0 + 1472);
    t87 = (t85 + 44U);
    t88 = *((char **)t87);
    t89 = (t0 + 1472);
    t90 = (t89 + 40U);
    t91 = *((char **)t90);
    t92 = ((char*)((ng36)));
    xsi_vlog_generic_get_array_select_value(t86, 32, t84, t88, t91, 2, 1, t92, 32, 1);
    t93 = (t0 + 1472);
    t94 = (t93 + 36U);
    t95 = *((char **)t94);
    t97 = (t0 + 1472);
    t98 = (t97 + 44U);
    t99 = *((char **)t98);
    t100 = (t0 + 1472);
    t101 = (t100 + 40U);
    t102 = *((char **)t101);
    t103 = ((char*)((ng37)));
    xsi_vlog_generic_get_array_select_value(t96, 32, t95, t99, t102, 2, 1, t103, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng29, 9, t0, (char)118, t13, 32, (char)118, t14, 32, (char)118, t42, 32, (char)118, t53, 32, (char)118, t64, 32, (char)118, t75, 32, (char)118, t86, 32, (char)118, t96, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(20, ng0);
    t11 = (t0 + 876U);
    t12 = *((char **)t11);
    t11 = (t0 + 1472);
    t15 = (t0 + 1472);
    t16 = (t15 + 44U);
    t17 = *((char **)t16);
    t18 = (t0 + 1472);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    t21 = (t0 + 784U);
    t22 = *((char **)t21);
    xsi_vlog_generic_convert_array_indices(t13, t14, t17, t20, 2, 1, t22, 5, 2);
    t21 = (t13 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (!(t23));
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB9;

LAB10:    goto LAB8;

LAB9:    t29 = *((unsigned int *)t13);
    t30 = *((unsigned int *)t14);
    t31 = (t29 - t30);
    t32 = (t31 + 1);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, *((unsigned int *)t14), t32, 0LL);
    goto LAB10;

}

static void Cont_29_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t41[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;

LAB0:    t1 = (t0 + 2376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 600U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t34 = *((unsigned int *)t4);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t41, 8);

LAB20:    t48 = (t0 + 2776);
    t50 = (t48 + 32U);
    t51 = *((char **)t50);
    t52 = (t51 + 40U);
    t53 = *((char **)t52);
    memcpy(t53, t3, 8);
    xsi_driver_vfirst_trans(t48, 0, 31);
    t54 = (t0 + 2724);
    *((int *)t54) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t33 = ((char*)((ng38)));
    goto LAB13;

LAB14:    t38 = (t0 + 1472);
    t39 = (t38 + 36U);
    t40 = *((char **)t39);
    t42 = (t0 + 1472);
    t43 = (t42 + 44U);
    t44 = *((char **)t43);
    t45 = (t0 + 1472);
    t46 = (t45 + 40U);
    t47 = *((char **)t46);
    t48 = (t0 + 600U);
    t49 = *((char **)t48);
    xsi_vlog_generic_get_array_select_value(t41, 32, t40, t44, t47, 2, 1, t49, 5, 2);
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t33, 32, t41, 32);
    goto LAB20;

LAB18:    memcpy(t3, t33, 8);
    goto LAB20;

}

static void Cont_30_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t41[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;

LAB0:    t1 = (t0 + 2520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 692U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t34 = *((unsigned int *)t4);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t41, 8);

LAB20:    t48 = (t0 + 2812);
    t50 = (t48 + 32U);
    t51 = *((char **)t50);
    t52 = (t51 + 40U);
    t53 = *((char **)t52);
    memcpy(t53, t3, 8);
    xsi_driver_vfirst_trans(t48, 0, 31);
    t54 = (t0 + 2732);
    *((int *)t54) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t33 = ((char*)((ng38)));
    goto LAB13;

LAB14:    t38 = (t0 + 1472);
    t39 = (t38 + 36U);
    t40 = *((char **)t39);
    t42 = (t0 + 1472);
    t43 = (t42 + 44U);
    t44 = *((char **)t43);
    t45 = (t0 + 1472);
    t46 = (t45 + 40U);
    t47 = *((char **)t46);
    t48 = (t0 + 692U);
    t49 = *((char **)t48);
    xsi_vlog_generic_get_array_select_value(t41, 32, t40, t44, t47, 2, 1, t49, 5, 2);
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t33, 32, t41, 32);
    goto LAB20;

LAB18:    memcpy(t3, t33, 8);
    goto LAB20;

}


extern void work_m_00000000000143017128_0621066737_init()
{
	static char *pe[] = {(void *)Initial_13_0,(void *)Always_18_1,(void *)Cont_29_2,(void *)Cont_30_3};
	xsi_register_didat("work_m_00000000000143017128_0621066737", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000000143017128_0621066737.didat");
	xsi_register_executes(pe);
}
