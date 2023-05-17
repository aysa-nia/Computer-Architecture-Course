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
static const char *ng0 = "E:/VHDL/Project/FinalProject/VM.TLB.Cache.Memory.Simulator/HardDisk.vhd";



static void work_a_2739574174_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned char t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned char t21;

LAB0:    xsi_set_current_line(396, ng0);
    t1 = (t0 + 2608U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(397, ng0);
    t1 = (t0 + 98768);
    *((int *)t1) = 0;
    t2 = (t0 + 98772);
    *((int *)t2) = 999;
    t3 = 0;
    t4 = 999;

LAB2:    if (t3 <= t4)
        goto LAB3;

LAB5:    xsi_set_current_line(402, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 2608U);
    t5 = *((char **)t1);
    t3 = *((int *)t5);
    t4 = (t3 - 0);
    t9 = (t4 * 1);
    xsi_vhdl_check_range_of_index(0, 999, 1, t3);
    t10 = (11U * t9);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t6 = (t0 + 3992);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t17 = *((char **)t14);
    memcpy(t17, t1, 11U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(403, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t15 = *((unsigned char *)t2);
    t21 = (t15 == (unsigned char)2);
    if (t21 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(407, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 2608U);
    t5 = *((char **)t1);
    t3 = *((int *)t5);
    t4 = (t3 - 0);
    t9 = (t4 * 1);
    xsi_vhdl_check_range_of_index(0, 999, 1, t3);
    t10 = (32U * t9);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t6 = (t0 + 4056);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t17 = *((char **)t14);
    memcpy(t17, t1, 32U);
    xsi_driver_first_trans_delta(t6, 32U, 32U, 0LL);
    xsi_set_current_line(408, ng0);
    t1 = (t0 + 98776);
    t15 = (32U != 32U);
    if (t15 == 1)
        goto LAB19;

LAB20:    t5 = (t0 + 4056);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 32U);
    xsi_driver_first_trans_delta(t5, 0U, 32U, 0LL);

LAB17:    t1 = (t0 + 3912);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(398, ng0);
    t5 = (t0 + 1992U);
    t6 = *((char **)t5);
    t5 = (t0 + 98768);
    t7 = *((int *)t5);
    t8 = (t7 - 0);
    t9 = (t8 * 1);
    xsi_vhdl_check_range_of_index(0, 999, 1, *((int *)t5));
    t10 = (16U * t9);
    t11 = (0 + t10);
    t12 = (t6 + t11);
    t13 = (t0 + 1032U);
    t14 = *((char **)t13);
    t15 = 1;
    if (16U == 16U)
        goto LAB9;

LAB10:    t15 = 0;

LAB11:    if (t15 != 0)
        goto LAB6;

LAB8:
LAB7:
LAB4:    t1 = (t0 + 98768);
    t3 = *((int *)t1);
    t2 = (t0 + 98772);
    t4 = *((int *)t2);
    if (t3 == t4)
        goto LAB5;

LAB15:    t7 = (t3 + 1);
    t3 = t7;
    t5 = (t0 + 98768);
    *((int *)t5) = t3;
    goto LAB2;

LAB6:    xsi_set_current_line(399, ng0);
    t18 = (t0 + 98768);
    t19 = (t0 + 2608U);
    t20 = *((char **)t19);
    t19 = (t20 + 0);
    *((int *)t19) = *((int *)t18);
    goto LAB7;

LAB9:    t16 = 0;

LAB12:    if (t16 < 16U)
        goto LAB13;
    else
        goto LAB11;

LAB13:    t13 = (t12 + t16);
    t17 = (t14 + t16);
    if (*((unsigned char *)t13) != *((unsigned char *)t17))
        goto LAB10;

LAB14:    t16 = (t16 + 1);
    goto LAB12;

LAB16:    xsi_set_current_line(404, ng0);
    t1 = (t0 + 2152U);
    t5 = *((char **)t1);
    t1 = (t0 + 2608U);
    t6 = *((char **)t1);
    t3 = *((int *)t6);
    t4 = (t3 - 0);
    t9 = (t4 * 1);
    xsi_vhdl_check_range_of_index(0, 999, 1, t3);
    t10 = (32U * t9);
    t11 = (0 + t10);
    t1 = (t5 + t11);
    t12 = (t0 + 4056);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t17 = (t14 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t1, 32U);
    xsi_driver_first_trans_delta(t12, 32U, 32U, 0LL);
    xsi_set_current_line(405, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 2608U);
    t5 = *((char **)t1);
    t3 = *((int *)t5);
    t4 = (t3 - 0);
    t9 = (t4 * 1);
    xsi_vhdl_check_range_of_index(0, 999, 1, t3);
    t10 = (32U * t9);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t6 = (t0 + 4056);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t17 = *((char **)t14);
    memcpy(t17, t1, 32U);
    xsi_driver_first_trans_delta(t6, 0U, 32U, 0LL);
    goto LAB17;

LAB19:    xsi_size_not_matching(32U, 32U, 0);
    goto LAB20;

}


extern void work_a_2739574174_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2739574174_3212880686_p_0};
	xsi_register_didat("work_a_2739574174_3212880686", "isim/TLB_isim_beh.exe.sim/work/a_2739574174_3212880686.didat");
	xsi_register_executes(pe);
}
