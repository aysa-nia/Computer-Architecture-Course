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
static const char *ng0 = "E:/VHDL/Project/FinalProject/VM.TLB.Cache.Memory.Simulator/Processor.vhd";



static void work_a_1640669797_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(59, ng0);

LAB3:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 0);
    t6 = (t5 * 1);
    xsi_vhdl_check_range_of_index(0, 99, 1, t4);
    t7 = (16U * t6);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t9 = (t0 + 3072);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 16U);
    xsi_driver_first_trans_fast_port(t9);

LAB2:    t14 = (t0 + 2992);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1640669797_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1640669797_3212880686_p_0};
	xsi_register_didat("work_a_1640669797_3212880686", "isim/FinalTest_isim_beh.exe.sim/work/a_1640669797_3212880686.didat");
	xsi_register_executes(pe);
}
