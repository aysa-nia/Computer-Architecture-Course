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
static const char *ng0 = "E:/VHDL/HW5/miss-hit-logic/Miss_Hit.vhd";
extern char *IEEE_P_2592010699;



static void work_a_2770408624_3212880686_p_0(char *t0)
{
    char t4[16];
    char t15[16];
    unsigned char t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    char *t8;
    char *t9;
    unsigned char t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned char t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t5 = ((IEEE_P_2592010699) + 4024);
    t6 = (t0 + 5200U);
    t2 = xsi_base_array_concat(t2, t4, t5, (char)99, (unsigned char)3, (char)97, t3, t6, (char)101);
    t7 = (1U + 4U);
    t8 = (t0 + 1192U);
    t9 = *((char **)t8);
    t10 = 1;
    if (t7 == 5U)
        goto LAB8;

LAB9:    t10 = 0;

LAB10:    if (t10 == 1)
        goto LAB5;

LAB6:    t13 = (t0 + 1032U);
    t14 = *((char **)t13);
    t16 = ((IEEE_P_2592010699) + 4024);
    t17 = (t0 + 5200U);
    t13 = xsi_base_array_concat(t13, t15, t16, (char)99, (unsigned char)3, (char)97, t14, t17, (char)101);
    t18 = (1U + 4U);
    t19 = (t0 + 1352U);
    t20 = *((char **)t19);
    t21 = 1;
    if (t18 == 5U)
        goto LAB14;

LAB15:    t21 = 0;

LAB16:    t1 = t21;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 3392);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);

LAB3:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t5 = ((IEEE_P_2592010699) + 4024);
    t6 = (t0 + 5200U);
    t2 = xsi_base_array_concat(t2, t4, t5, (char)99, (unsigned char)3, (char)97, t3, t6, (char)101);
    t7 = (1U + 4U);
    t8 = (t0 + 1192U);
    t9 = *((char **)t8);
    t1 = 1;
    if (t7 == 5U)
        goto LAB23;

LAB24:    t1 = 0;

LAB25:    if (t1 != 0)
        goto LAB20;

LAB22:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3456);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);

LAB21:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t5 = ((IEEE_P_2592010699) + 4024);
    t6 = (t0 + 5200U);
    t2 = xsi_base_array_concat(t2, t4, t5, (char)99, (unsigned char)3, (char)97, t3, t6, (char)101);
    t7 = (1U + 4U);
    t8 = (t0 + 1352U);
    t9 = *((char **)t8);
    t1 = 1;
    if (t7 == 5U)
        goto LAB32;

LAB33:    t1 = 0;

LAB34:    if (t1 != 0)
        goto LAB29;

LAB31:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 3520);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);

LAB30:    t2 = (t0 + 3312);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(47, ng0);
    t24 = (t0 + 3392);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    *((unsigned char *)t28) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t24);
    goto LAB3;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t11 = 0;

LAB11:    if (t11 < t7)
        goto LAB12;
    else
        goto LAB10;

LAB12:    t8 = (t2 + t11);
    t12 = (t9 + t11);
    if (*((unsigned char *)t8) != *((unsigned char *)t12))
        goto LAB9;

LAB13:    t11 = (t11 + 1);
    goto LAB11;

LAB14:    t22 = 0;

LAB17:    if (t22 < t18)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t19 = (t13 + t22);
    t23 = (t20 + t22);
    if (*((unsigned char *)t19) != *((unsigned char *)t23))
        goto LAB15;

LAB19:    t22 = (t22 + 1);
    goto LAB17;

LAB20:    xsi_set_current_line(52, ng0);
    t13 = (t0 + 3456);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    t17 = (t16 + 56U);
    t19 = *((char **)t17);
    *((unsigned char *)t19) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t13);
    goto LAB21;

LAB23:    t11 = 0;

LAB26:    if (t11 < t7)
        goto LAB27;
    else
        goto LAB25;

LAB27:    t8 = (t2 + t11);
    t12 = (t9 + t11);
    if (*((unsigned char *)t8) != *((unsigned char *)t12))
        goto LAB24;

LAB28:    t11 = (t11 + 1);
    goto LAB26;

LAB29:    xsi_set_current_line(57, ng0);
    t13 = (t0 + 3520);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    t17 = (t16 + 56U);
    t19 = *((char **)t17);
    *((unsigned char *)t19) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t13);
    goto LAB30;

LAB32:    t11 = 0;

LAB35:    if (t11 < t7)
        goto LAB36;
    else
        goto LAB34;

LAB36:    t8 = (t2 + t11);
    t12 = (t9 + t11);
    if (*((unsigned char *)t8) != *((unsigned char *)t12))
        goto LAB33;

LAB37:    t11 = (t11 + 1);
    goto LAB35;

}


extern void work_a_2770408624_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2770408624_3212880686_p_0};
	xsi_register_didat("work_a_2770408624_3212880686", "isim/Miss_hit_test_isim_beh.exe.sim/work/a_2770408624_3212880686.didat");
	xsi_register_executes(pe);
}
