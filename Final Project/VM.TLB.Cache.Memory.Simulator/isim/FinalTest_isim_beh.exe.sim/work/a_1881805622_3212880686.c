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
static const char *ng0 = "E:/VHDL/Project/FinalProject/VM.TLB.Cache.Memory.Simulator/AllInOne.vhd";
extern char *IEEE_P_2592010699;



static void work_a_1881805622_3212880686_p_0(char *t0)
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

LAB0:    xsi_set_current_line(67, ng0);

LAB3:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = (15 - 6);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 6000);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 7U);
    xsi_driver_first_trans_fast(t6);

LAB2:    t11 = (t0 + 5888);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1881805622_3212880686_p_1(char *t0)
{
    char t7[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 2952U);
    t5 = *((char **)t1);
    t6 = ((IEEE_P_2592010699) + 4024);
    t8 = (t0 + 10412U);
    t9 = (t0 + 10444U);
    t1 = xsi_base_array_concat(t1, t7, t6, (char)97, t2, t8, (char)97, t5, t9, (char)101);
    t11 = (4U + 7U);
    t3 = (11U != t11);
    if (t3 == 1)
        goto LAB7;

LAB8:    t10 = (t0 + 6064);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t1, 11U);
    xsi_driver_first_trans_fast(t10);

LAB3:    t1 = (t0 + 5904);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 2312U);
    t5 = *((char **)t1);
    t1 = (t0 + 2952U);
    t6 = *((char **)t1);
    t8 = ((IEEE_P_2592010699) + 4024);
    t9 = (t0 + 10396U);
    t10 = (t0 + 10444U);
    t1 = xsi_base_array_concat(t1, t7, t8, (char)97, t5, t9, (char)97, t6, t10, (char)101);
    t11 = (4U + 7U);
    t12 = (11U != t11);
    if (t12 == 1)
        goto LAB5;

LAB6:    t13 = (t0 + 6064);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t1, 11U);
    xsi_driver_first_trans_fast(t13);
    goto LAB3;

LAB5:    xsi_size_not_matching(11U, t11, 0);
    goto LAB6;

LAB7:    xsi_size_not_matching(11U, t11, 0);
    goto LAB8;

}

static void work_a_1881805622_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(92, ng0);
    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t1 = (t0 + 6192);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(93, ng0);
    t1 = xsi_get_transient_memory(64U);
    memset(t1, 0, 64U);
    t2 = t1;
    memset(t2, (unsigned char)0, 64U);
    t5 = (t0 + 6128);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 64U);
    xsi_driver_first_trans_fast_port(t5);

LAB3:    t1 = (t0 + 5920);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(89, ng0);
    t1 = (t0 + 3272U);
    t5 = *((char **)t1);
    t1 = (t0 + 6128);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 64U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(90, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)0, 32U);
    t5 = (t0 + 6192);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 32U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB3;

}


extern void work_a_1881805622_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1881805622_3212880686_p_0,(void *)work_a_1881805622_3212880686_p_1,(void *)work_a_1881805622_3212880686_p_2};
	xsi_register_didat("work_a_1881805622_3212880686", "isim/FinalTest_isim_beh.exe.sim/work/a_1881805622_3212880686.didat");
	xsi_register_executes(pe);
}
