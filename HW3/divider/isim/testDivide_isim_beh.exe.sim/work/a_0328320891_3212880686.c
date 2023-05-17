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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "E:/VHDL/HW3/5_1/divider/optimizedDivision.vhd";
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1547198987_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_1547270861_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_3481121704_1035706684(char *, char *, char *, char *);


static void work_a_0328320891_3212880686_p_0(char *t0)
{
    char t9[16];
    char t24[16];
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    unsigned char t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    int t23;
    int t25;
    char *t26;
    unsigned int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned char t32;
    unsigned char t33;
    unsigned char t34;
    unsigned char t35;
    char *t36;

LAB0:    xsi_set_current_line(53, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = (31 - 31);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 1808U);
    t10 = *((char **)t1);
    t1 = (t10 + 0);
    memcpy(t1, t2, 32U);
    xsi_set_current_line(58, ng0);
    t1 = (t0 + 2048U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)0;

LAB3:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = (31 - 31);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 1928U);
    t10 = *((char **)t1);
    t4 = (63 - 31);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t10 + t6);
    t11 = (t1 + 0);
    memcpy(t11, t2, 32U);
    t12 = (t0 + 1872U);
    xsi_variable_act(t12);
    xsi_set_current_line(65, ng0);
    t1 = (t0 + 2168U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)0;

LAB6:    xsi_set_current_line(69, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t10 = (t0 + 1928U);
    t11 = *((char **)t10);
    t4 = (63 - 63);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t10 = (t11 + t6);
    t12 = (t10 + 0);
    memcpy(t12, t1, 32U);
    t13 = (t0 + 1872U);
    xsi_variable_act(t13);
    xsi_set_current_line(71, ng0);
    t1 = (t0 + 5906);
    *((int *)t1) = 1;
    t2 = (t0 + 5910);
    *((int *)t2) = 32;
    t3 = 1;
    t23 = 32;

LAB8:    if (t3 <= t23)
        goto LAB9;

LAB11:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 2168U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t32 = (t8 == (unsigned char)1);
    if (t32 == 1)
        goto LAB19;

LAB20:    t7 = (unsigned char)0;

LAB21:    if (t7 != 0)
        goto LAB16;

LAB18:    t1 = (t0 + 2168U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t32 = (t8 == (unsigned char)1);
    if (t32 == 1)
        goto LAB26;

LAB27:    t7 = (unsigned char)0;

LAB28:    if (t7 != 0)
        goto LAB24;

LAB25:    t1 = (t0 + 2168U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t32 = (t8 == (unsigned char)0);
    if (t32 == 1)
        goto LAB35;

LAB36:    t7 = (unsigned char)0;

LAB37:    if (t7 != 0)
        goto LAB33;

LAB34:    t1 = (t0 + 2168U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t32 = (t8 == (unsigned char)0);
    if (t32 == 1)
        goto LAB42;

LAB43:    t7 = (unsigned char)0;

LAB44:    if (t7 != 0)
        goto LAB40;

LAB41:
LAB17:    t1 = (t0 + 3472);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(54, ng0);
    t10 = (t0 + 1032U);
    t11 = *((char **)t10);
    t10 = (t0 + 5608U);
    t12 = ieee_p_1242562249_sub_3481121704_1035706684(IEEE_P_1242562249, t9, t11, t10);
    t13 = (t0 + 1808U);
    t14 = *((char **)t13);
    t13 = (t14 + 0);
    t15 = (t9 + 12U);
    t16 = *((unsigned int *)t15);
    t17 = (1U * t16);
    memcpy(t13, t12, t17);
    xsi_set_current_line(55, ng0);
    t1 = (t0 + 2048U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)1;
    goto LAB3;

LAB5:    xsi_set_current_line(61, ng0);
    t10 = (t0 + 1192U);
    t11 = *((char **)t10);
    t10 = (t0 + 5624U);
    t12 = ieee_p_1242562249_sub_3481121704_1035706684(IEEE_P_1242562249, t9, t11, t10);
    t13 = (t0 + 1928U);
    t14 = *((char **)t13);
    t16 = (63 - 31);
    t17 = (t16 * 1U);
    t18 = (0 + t17);
    t13 = (t14 + t18);
    t15 = (t13 + 0);
    t19 = (t9 + 12U);
    t20 = *((unsigned int *)t19);
    t21 = (1U * t20);
    memcpy(t15, t12, t21);
    t22 = (t0 + 1872U);
    xsi_variable_act(t22);
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 2168U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)1;
    goto LAB6;

LAB9:    xsi_set_current_line(72, ng0);
    t10 = (t0 + 1928U);
    t11 = *((char **)t10);
    t4 = (63 - 62);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t10 = (t11 + t6);
    t13 = ((IEEE_P_1242562249) + 3000);
    t14 = (t24 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 62;
    t15 = (t14 + 4U);
    *((int *)t15) = 0;
    t15 = (t14 + 8U);
    *((int *)t15) = -1;
    t25 = (0 - 62);
    t16 = (t25 * -1);
    t16 = (t16 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t16;
    t12 = xsi_base_array_concat(t12, t9, t13, (char)97, t10, t24, (char)99, (unsigned char)2, (char)101);
    t15 = (t0 + 1928U);
    t19 = *((char **)t15);
    t15 = (t19 + 0);
    t16 = (63U + 1U);
    memcpy(t15, t12, t16);
    xsi_set_current_line(73, ng0);
    t1 = (t0 + 1928U);
    t2 = *((char **)t1);
    t4 = (63 - 63);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t10 = (t0 + 5704U);
    t11 = (t0 + 1808U);
    t12 = *((char **)t11);
    t11 = (t0 + 5672U);
    t13 = ieee_p_1242562249_sub_1547270861_1035706684(IEEE_P_1242562249, t9, t1, t10, t12, t11);
    t14 = (t0 + 1928U);
    t15 = *((char **)t14);
    t16 = (63 - 63);
    t17 = (t16 * 1U);
    t18 = (0 + t17);
    t14 = (t15 + t18);
    t19 = (t14 + 0);
    t22 = (t9 + 12U);
    t20 = *((unsigned int *)t22);
    t21 = (1U * t20);
    memcpy(t19, t13, t21);
    t26 = (t0 + 1872U);
    xsi_variable_act(t26);
    xsi_set_current_line(74, ng0);
    t1 = (t0 + 1928U);
    t2 = *((char **)t1);
    t4 = (63 - 63);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t25 = (31 - 31);
    t16 = (t25 * -1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t10 = (t1 + t18);
    t7 = *((unsigned char *)t10);
    t8 = (t7 == (unsigned char)2);
    if (t8 != 0)
        goto LAB12;

LAB14:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 1928U);
    t2 = *((char **)t1);
    t4 = (63 - 31);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t25 = (0 - 31);
    t16 = (t25 * -1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t10 = (t1 + t18);
    *((unsigned char *)t10) = (unsigned char)2;
    t11 = (t0 + 1872U);
    xsi_variable_act(t11);
    xsi_set_current_line(78, ng0);
    t1 = (t0 + 1928U);
    t2 = *((char **)t1);
    t4 = (63 - 63);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t10 = (t0 + 5704U);
    t11 = (t0 + 1808U);
    t12 = *((char **)t11);
    t11 = (t0 + 5672U);
    t13 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t9, t1, t10, t12, t11);
    t14 = (t0 + 1928U);
    t15 = *((char **)t14);
    t16 = (63 - 63);
    t17 = (t16 * 1U);
    t18 = (0 + t17);
    t14 = (t15 + t18);
    t19 = (t14 + 0);
    t22 = (t9 + 12U);
    t20 = *((unsigned int *)t22);
    t21 = (1U * t20);
    memcpy(t19, t13, t21);
    t26 = (t0 + 1872U);
    xsi_variable_act(t26);

LAB13:
LAB10:    t1 = (t0 + 5906);
    t3 = *((int *)t1);
    t2 = (t0 + 5910);
    t23 = *((int *)t2);
    if (t3 == t23)
        goto LAB11;

LAB15:    t25 = (t3 + 1);
    t3 = t25;
    t10 = (t0 + 5906);
    *((int *)t10) = t3;
    goto LAB8;

LAB12:    xsi_set_current_line(75, ng0);
    t11 = (t0 + 1928U);
    t12 = *((char **)t11);
    t20 = (63 - 31);
    t21 = (t20 * 1U);
    t27 = (0 + t21);
    t11 = (t12 + t27);
    t28 = (0 - 31);
    t29 = (t28 * -1);
    t30 = (1U * t29);
    t31 = (0 + t30);
    t13 = (t11 + t31);
    *((unsigned char *)t13) = (unsigned char)3;
    t14 = (t0 + 1872U);
    xsi_variable_act(t14);
    goto LAB13;

LAB16:    xsi_set_current_line(82, ng0);
    t1 = (t0 + 1928U);
    t11 = *((char **)t1);
    t4 = (63 - 31);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t11 + t6);
    t12 = (t0 + 3552);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t19 = *((char **)t15);
    memcpy(t19, t1, 32U);
    xsi_driver_first_trans_fast_port(t12);
    xsi_set_current_line(83, ng0);
    t1 = (t0 + 1928U);
    t2 = *((char **)t1);
    t4 = (63 - 63);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t10 = (t0 + 5704U);
    t11 = ieee_p_1242562249_sub_3481121704_1035706684(IEEE_P_1242562249, t9, t1, t10);
    t12 = (t9 + 12U);
    t16 = *((unsigned int *)t12);
    t17 = (1U * t16);
    t7 = (32U != t17);
    if (t7 == 1)
        goto LAB22;

LAB23:    t13 = (t0 + 3616);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t19 = (t15 + 56U);
    t22 = *((char **)t19);
    memcpy(t22, t11, 32U);
    xsi_driver_first_trans_fast_port(t13);
    goto LAB17;

LAB19:    t1 = (t0 + 2048U);
    t10 = *((char **)t1);
    t33 = *((unsigned char *)t10);
    t34 = (t33 == (unsigned char)1);
    t7 = t34;
    goto LAB21;

LAB22:    xsi_size_not_matching(32U, t17, 0);
    goto LAB23;

LAB24:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 1928U);
    t11 = *((char **)t1);
    t4 = (63 - 31);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t11 + t6);
    t12 = (t0 + 5720U);
    t13 = ieee_p_1242562249_sub_3481121704_1035706684(IEEE_P_1242562249, t9, t1, t12);
    t14 = (t9 + 12U);
    t16 = *((unsigned int *)t14);
    t17 = (1U * t16);
    t35 = (32U != t17);
    if (t35 == 1)
        goto LAB29;

LAB30:    t15 = (t0 + 3552);
    t19 = (t15 + 56U);
    t22 = *((char **)t19);
    t26 = (t22 + 56U);
    t36 = *((char **)t26);
    memcpy(t36, t13, 32U);
    xsi_driver_first_trans_fast_port(t15);
    xsi_set_current_line(86, ng0);
    t1 = (t0 + 1928U);
    t2 = *((char **)t1);
    t4 = (63 - 63);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t10 = (t0 + 5704U);
    t11 = ieee_p_1242562249_sub_3481121704_1035706684(IEEE_P_1242562249, t9, t1, t10);
    t12 = (t9 + 12U);
    t16 = *((unsigned int *)t12);
    t17 = (1U * t16);
    t7 = (32U != t17);
    if (t7 == 1)
        goto LAB31;

LAB32:    t13 = (t0 + 3616);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t19 = (t15 + 56U);
    t22 = *((char **)t19);
    memcpy(t22, t11, 32U);
    xsi_driver_first_trans_fast_port(t13);
    goto LAB17;

LAB26:    t1 = (t0 + 2048U);
    t10 = *((char **)t1);
    t33 = *((unsigned char *)t10);
    t34 = (t33 == (unsigned char)0);
    t7 = t34;
    goto LAB28;

LAB29:    xsi_size_not_matching(32U, t17, 0);
    goto LAB30;

LAB31:    xsi_size_not_matching(32U, t17, 0);
    goto LAB32;

LAB33:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 1928U);
    t11 = *((char **)t1);
    t4 = (63 - 31);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t11 + t6);
    t12 = (t0 + 5720U);
    t13 = ieee_p_1242562249_sub_3481121704_1035706684(IEEE_P_1242562249, t9, t1, t12);
    t14 = (t9 + 12U);
    t16 = *((unsigned int *)t14);
    t17 = (1U * t16);
    t35 = (32U != t17);
    if (t35 == 1)
        goto LAB38;

LAB39:    t15 = (t0 + 3552);
    t19 = (t15 + 56U);
    t22 = *((char **)t19);
    t26 = (t22 + 56U);
    t36 = *((char **)t26);
    memcpy(t36, t13, 32U);
    xsi_driver_first_trans_fast_port(t15);
    xsi_set_current_line(89, ng0);
    t1 = (t0 + 1928U);
    t2 = *((char **)t1);
    t4 = (63 - 63);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t10 = (t0 + 3616);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 32U);
    xsi_driver_first_trans_fast_port(t10);
    goto LAB17;

LAB35:    t1 = (t0 + 2048U);
    t10 = *((char **)t1);
    t33 = *((unsigned char *)t10);
    t34 = (t33 == (unsigned char)1);
    t7 = t34;
    goto LAB37;

LAB38:    xsi_size_not_matching(32U, t17, 0);
    goto LAB39;

LAB40:    xsi_set_current_line(91, ng0);
    t1 = (t0 + 1928U);
    t11 = *((char **)t1);
    t4 = (63 - 31);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t11 + t6);
    t12 = (t0 + 3552);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t19 = *((char **)t15);
    memcpy(t19, t1, 32U);
    xsi_driver_first_trans_fast_port(t12);
    xsi_set_current_line(92, ng0);
    t1 = (t0 + 1928U);
    t2 = *((char **)t1);
    t4 = (63 - 63);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t10 = (t0 + 3616);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 32U);
    xsi_driver_first_trans_fast_port(t10);
    goto LAB17;

LAB42:    t1 = (t0 + 2048U);
    t10 = *((char **)t1);
    t33 = *((unsigned char *)t10);
    t34 = (t33 == (unsigned char)0);
    t7 = t34;
    goto LAB44;

}


extern void work_a_0328320891_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0328320891_3212880686_p_0};
	xsi_register_didat("work_a_0328320891_3212880686", "isim/testDivide_isim_beh.exe.sim/work/a_0328320891_3212880686.didat");
	xsi_register_executes(pe);
}
