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
static const char *ng0 = "E:/VHDL/HW4/3/FullAdder/PiplinedFullAdder.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

char *ieee_p_3620187407_sub_4129134319_3965413181(char *, char *, unsigned char , char *, char *);
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_0768187121_3212880686_p_0(char *t0)
{
    char t14[16];
    char t15[16];
    char t16[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    int t25;
    unsigned int t26;
    unsigned int t27;

LAB0:    t1 = (t0 + 4112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);

LAB6:    t2 = (t0 + 4928);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t3 = (t0 + 4928);
    *((int *)t3) = 0;
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t7 = (3 - 1);
    t8 = (t7 * 1U);
    t9 = (0 + t8);
    t2 = (t3 + t9);
    t4 = (t0 + 5040);
    t10 = (t4 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 2U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t7 = (3 - 1);
    t8 = (t7 * 1U);
    t9 = (0 + t8);
    t2 = (t3 + t9);
    t4 = (t0 + 5104);
    t10 = (t4 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 2U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t7 = (3 - 3);
    t8 = (t7 * 1U);
    t9 = (0 + t8);
    t2 = (t3 + t9);
    t4 = (t0 + 5168);
    t10 = (t4 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 2U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t7 = (3 - 3);
    t8 = (t7 * 1U);
    t9 = (0 + t8);
    t2 = (t3 + t9);
    t4 = (t0 + 5232);
    t10 = (t4 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 2U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t4 = ((IEEE_P_2592010699) + 4024);
    t10 = (t0 + 7900U);
    t2 = xsi_base_array_concat(t2, t15, t4, (char)99, (unsigned char)2, (char)97, t3, t10, (char)101);
    t11 = (t0 + 1992U);
    t12 = *((char **)t11);
    t13 = ((IEEE_P_2592010699) + 4024);
    t17 = (t0 + 7916U);
    t11 = xsi_base_array_concat(t11, t16, t13, (char)99, (unsigned char)2, (char)97, t12, t17, (char)101);
    t18 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t14, t2, t15, t11, t16);
    t19 = (t14 + 12U);
    t7 = *((unsigned int *)t19);
    t8 = (1U * t7);
    t5 = (3U != t8);
    if (t5 == 1)
        goto LAB8;

LAB9:    t20 = (t0 + 5296);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t18, 3U);
    xsi_driver_first_trans_fast(t20);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2472U);
    t3 = *((char **)t2);
    t2 = (t0 + 7964U);
    t4 = (t0 + 2632U);
    t10 = *((char **)t4);
    t4 = (t0 + 7980U);
    t11 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t14, t3, t2, t10, t4);
    t12 = (t14 + 12U);
    t7 = *((unsigned int *)t12);
    t8 = (1U * t7);
    t5 = (2U != t8);
    if (t5 == 1)
        goto LAB10;

LAB11:    t13 = (t0 + 5360);
    t17 = (t13 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t11, 2U);
    xsi_driver_first_trans_fast(t13);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2312U);
    t3 = *((char **)t2);
    t7 = (2 - 1);
    t8 = (t7 * 1U);
    t9 = (0 + t8);
    t2 = (t3 + t9);
    t4 = (t0 + 5424);
    t10 = (t4 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 2U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2312U);
    t3 = *((char **)t2);
    t25 = (2 - 2);
    t7 = (t25 * -1);
    t8 = (1U * t7);
    t9 = (0 + t8);
    t2 = (t3 + t9);
    t5 = *((unsigned char *)t2);
    t4 = (t0 + 2952U);
    t10 = *((char **)t4);
    t4 = (t0 + 8012U);
    t11 = ieee_p_3620187407_sub_4129134319_3965413181(IEEE_P_3620187407, t14, t5, t10, t4);
    t12 = (t14 + 12U);
    t26 = *((unsigned int *)t12);
    t27 = (1U * t26);
    t6 = (2U != t27);
    if (t6 == 1)
        goto LAB12;

LAB13:    t13 = (t0 + 5488);
    t17 = (t13 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t11, 2U);
    xsi_driver_first_trans_fast(t13);
    goto LAB2;

LAB5:    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    xsi_size_not_matching(3U, t8, 0);
    goto LAB9;

LAB10:    xsi_size_not_matching(2U, t8, 0);
    goto LAB11;

LAB12:    xsi_size_not_matching(2U, t27, 0);
    goto LAB13;

}

static void work_a_0768187121_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(65, ng0);

LAB3:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = (2 - 1);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 5552);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 2U);
    xsi_driver_first_trans_fast_port(t6);

LAB2:    t11 = (t0 + 4944);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0768187121_3212880686_p_2(char *t0)
{
    char t4[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(66, ng0);

LAB3:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t5 = ((IEEE_P_2592010699) + 4024);
    t6 = (t0 + 7996U);
    t7 = (t0 + 7932U);
    t1 = xsi_base_array_concat(t1, t4, t5, (char)97, t2, t6, (char)97, t3, t7, (char)101);
    t8 = (2U + 2U);
    t9 = (4U != t8);
    if (t9 == 1)
        goto LAB5;

LAB6:    t10 = (t0 + 5616);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 4U);
    xsi_driver_first_trans_fast_port(t10);

LAB2:    t15 = (t0 + 4960);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(4U, t8, 0);
    goto LAB6;

}


extern void work_a_0768187121_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0768187121_3212880686_p_0,(void *)work_a_0768187121_3212880686_p_1,(void *)work_a_0768187121_3212880686_p_2};
	xsi_register_didat("work_a_0768187121_3212880686", "isim/PFATest_isim_beh.exe.sim/work/a_0768187121_3212880686.didat");
	xsi_register_executes(pe);
}
