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
static const char *ng0 = "E:/VHDL/HW3/4_2/multiplier/multiplier/multiplier8bit6bit.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;
extern char *IEEE_P_3620187407;

char *ieee_p_1242562249_sub_3410769178_1035706684(char *, char *, char *, char *, int );
char *ieee_p_1242562249_sub_3666425753_1035706684(char *, char *, int , char *, char *);
unsigned char ieee_p_2592010699_sub_2507238156_503743352(char *, unsigned char , unsigned char );
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767740470_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_3739191342_3212880686_p_0(char *t0)
{
    char t18[16];
    char t23[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned char t9;
    int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    int t25;
    int t26;
    char *t27;
    char *t28;

LAB0:    xsi_set_current_line(53, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t3 = (t0 + 2008U);
    t4 = *((char **)t3);
    t3 = (t4 + 0);
    memcpy(t3, t1, 8U);
    xsi_set_current_line(54, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t2 = t1;
    memset(t2, (unsigned char)2, 16U);
    t3 = (t0 + 1888U);
    t4 = *((char **)t3);
    t3 = (t4 + 0);
    memcpy(t3, t1, 16U);
    xsi_set_current_line(55, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t5 = (7 - 7);
    t6 = (t5 * -1);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t9 = *((unsigned char *)t1);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t10 = (5 - 5);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t3 = (t4 + t13);
    t14 = *((unsigned char *)t3);
    t15 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t9, t14);
    t16 = (t0 + 2248U);
    t17 = *((char **)t16);
    t16 = (t17 + 0);
    *((unsigned char *)t16) = t15;
    xsi_set_current_line(56, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t5 = (7 - 7);
    t6 = (t5 * -1);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t9 = *((unsigned char *)t1);
    t14 = (t9 == (unsigned char)2);
    if (t14 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(59, ng0);
    t5 = (-(1));
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5780U);
    t3 = ieee_p_1242562249_sub_3666425753_1035706684(IEEE_P_1242562249, t23, t5, t2, t1);
    t4 = ieee_p_1242562249_sub_3410769178_1035706684(IEEE_P_1242562249, t18, t3, t23, 16);
    t16 = (t0 + 1648U);
    t17 = *((char **)t16);
    t16 = (t17 + 0);
    t19 = (t18 + 12U);
    t6 = *((unsigned int *)t19);
    t6 = (t6 * 1U);
    memcpy(t16, t4, t6);

LAB3:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t5 = (5 - 5);
    t6 = (t5 * -1);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t9 = *((unsigned char *)t1);
    t14 = (t9 == (unsigned char)2);
    if (t14 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(64, ng0);
    t5 = (-(1));
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 5796U);
    t3 = ieee_p_1242562249_sub_3666425753_1035706684(IEEE_P_1242562249, t18, t5, t2, t1);
    t4 = (t0 + 1768U);
    t16 = *((char **)t4);
    t4 = (t16 + 0);
    t17 = (t18 + 12U);
    t6 = *((unsigned int *)t17);
    t7 = (1U * t6);
    memcpy(t4, t3, t7);

LAB6:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 5997);
    *((int *)t1) = 0;
    t2 = (t0 + 6001);
    *((int *)t2) = 5;
    t5 = 0;
    t10 = 5;

LAB8:    if (t5 <= t10)
        goto LAB9;

LAB11:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 2248U);
    t2 = *((char **)t1);
    t9 = *((unsigned char *)t2);
    t14 = (t9 == (unsigned char)3);
    if (t14 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 1888U);
    t2 = *((char **)t1);
    t1 = (t0 + 1888U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    memcpy(t1, t2, 16U);

LAB17:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 1888U);
    t2 = *((char **)t1);
    t1 = (t0 + 3632);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t16 = (t4 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);
    t1 = (t0 + 3552);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(57, ng0);
    t3 = (t0 + 2008U);
    t4 = *((char **)t3);
    t3 = (t0 + 1032U);
    t16 = *((char **)t3);
    t17 = ((IEEE_P_2592010699) + 4024);
    t19 = (t0 + 5876U);
    t20 = (t0 + 5780U);
    t3 = xsi_base_array_concat(t3, t18, t17, (char)97, t4, t19, (char)97, t16, t20, (char)101);
    t21 = (t0 + 1648U);
    t22 = *((char **)t21);
    t21 = (t22 + 0);
    t11 = (8U + 8U);
    memcpy(t21, t3, t11);
    goto LAB3;

LAB5:    xsi_set_current_line(62, ng0);
    t3 = (t0 + 5995);
    t16 = (t0 + 1192U);
    t17 = *((char **)t16);
    t19 = ((IEEE_P_2592010699) + 4024);
    t20 = (t23 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = 0;
    t21 = (t20 + 4U);
    *((int *)t21) = 1;
    t21 = (t20 + 8U);
    *((int *)t21) = 1;
    t10 = (1 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t11;
    t21 = (t0 + 5796U);
    t16 = xsi_base_array_concat(t16, t18, t19, (char)97, t3, t23, (char)97, t17, t21, (char)101);
    t22 = (t0 + 1768U);
    t24 = *((char **)t22);
    t22 = (t24 + 0);
    t11 = (2U + 6U);
    memcpy(t22, t16, t11);
    goto LAB6;

LAB9:    xsi_set_current_line(67, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t3 = (t0 + 5997);
    t25 = *((int *)t3);
    t26 = (t25 - 5);
    t6 = (t26 * -1);
    xsi_vhdl_check_range_of_index(5, 0, -1, *((int *)t3));
    t7 = (1U * t6);
    t8 = (0 + t7);
    t16 = (t4 + t8);
    t9 = *((unsigned char *)t16);
    t14 = (t9 == (unsigned char)3);
    if (t14 != 0)
        goto LAB12;

LAB14:
LAB13:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 1648U);
    t2 = *((char **)t1);
    t6 = (15 - 14);
    t7 = (t6 * 1U);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t4 = ((IEEE_P_2592010699) + 4024);
    t16 = (t23 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 14;
    t17 = (t16 + 4U);
    *((int *)t17) = 0;
    t17 = (t16 + 8U);
    *((int *)t17) = -1;
    t25 = (0 - 14);
    t11 = (t25 * -1);
    t11 = (t11 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t11;
    t3 = xsi_base_array_concat(t3, t18, t4, (char)97, t1, t23, (char)99, (unsigned char)2, (char)101);
    t17 = (t0 + 1648U);
    t19 = *((char **)t17);
    t17 = (t19 + 0);
    t11 = (15U + 1U);
    memcpy(t17, t3, t11);

LAB10:    t1 = (t0 + 5997);
    t5 = *((int *)t1);
    t2 = (t0 + 6001);
    t10 = *((int *)t2);
    if (t5 == t10)
        goto LAB11;

LAB15:    t25 = (t5 + 1);
    t5 = t25;
    t3 = (t0 + 5997);
    *((int *)t3) = t5;
    goto LAB8;

LAB12:    xsi_set_current_line(68, ng0);
    t17 = (t0 + 1888U);
    t19 = *((char **)t17);
    t17 = (t0 + 5860U);
    t20 = (t0 + 1648U);
    t21 = *((char **)t20);
    t20 = (t0 + 5828U);
    t22 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t18, t19, t17, t21, t20);
    t24 = (t0 + 1888U);
    t27 = *((char **)t24);
    t24 = (t27 + 0);
    t28 = (t18 + 12U);
    t11 = *((unsigned int *)t28);
    t12 = (1U * t11);
    memcpy(t24, t22, t12);
    goto LAB13;

LAB16:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 1888U);
    t3 = *((char **)t1);
    t1 = (t0 + 5860U);
    t4 = (t0 + 1888U);
    t16 = *((char **)t4);
    t4 = (t0 + 5860U);
    t17 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t23, t3, t1, t16, t4);
    t19 = (t0 + 1888U);
    t20 = *((char **)t19);
    t19 = (t0 + 5860U);
    t21 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t18, t17, t23, t20, t19);
    t22 = (t0 + 1888U);
    t24 = *((char **)t22);
    t22 = (t24 + 0);
    t27 = (t18 + 12U);
    t6 = *((unsigned int *)t27);
    t7 = (1U * t6);
    memcpy(t22, t21, t7);
    goto LAB17;

}


extern void work_a_3739191342_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3739191342_3212880686_p_0};
	xsi_register_didat("work_a_3739191342_3212880686", "isim/testttt_isim_beh.exe.sim/work/a_3739191342_3212880686.didat");
	xsi_register_executes(pe);
}
