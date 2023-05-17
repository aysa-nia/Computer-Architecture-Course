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
static const char *ng0 = "E:/VHDL/Project/FinalProject/VM.TLB.Cache.Memory.Simulator/mainMemory.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;
extern char *IEEE_P_3620187407;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_3620187407_sub_674691591_3965413181(char *, char *, char *, char *, unsigned char );
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_0933335888_3212880686_p_0(char *t0)
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

LAB0:    xsi_set_current_line(34, ng0);

LAB3:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = (15 - 15);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 5200);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 9U);
    xsi_driver_first_trans_fast(t6);

LAB2:    t11 = (t0 + 5088);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0933335888_3212880686_p_1(char *t0)
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

LAB0:    xsi_set_current_line(35, ng0);

LAB3:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = (15 - 6);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 5264);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 7U);
    xsi_driver_first_trans_fast(t6);

LAB2:    t11 = (t0 + 5104);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0933335888_3212880686_p_2(char *t0)
{
    char t19[16];
    char t20[16];
    char t21[16];
    char t28[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t29;
    int t30;
    unsigned int t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    int t42;
    int t43;
    unsigned char t44;
    char *t45;
    char *t46;

LAB0:    xsi_set_current_line(44, ng0);
    t1 = (t0 + 1792U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 5120);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 1992U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)2);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 2632U);
    t3 = *((char **)t1);
    t1 = (t0 + 2312U);
    t4 = *((char **)t1);
    t1 = (t0 + 9648U);
    t13 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t4, t1);
    t14 = (t13 - 0);
    t15 = (t14 * 1);
    xsi_vhdl_check_range_of_index(0, 511, 1, t13);
    t16 = (5U * t15);
    t17 = (0 + t16);
    t7 = (t3 + t17);
    t8 = (t19 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 4;
    t9 = (t8 + 4U);
    *((int *)t9) = 0;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t30 = (0 - 4);
    t22 = (t30 * -1);
    t22 = (t22 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t22;
    t9 = (t0 + 24757);
    t11 = (t20 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 0;
    t12 = (t11 + 4U);
    *((int *)t12) = 4;
    t12 = (t11 + 8U);
    *((int *)t12) = 1;
    t32 = (4 - 0);
    t22 = (t32 * 1);
    t22 = (t22 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t22;
    t5 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t7, t19, t9, t20);
    if (t5 == 1)
        goto LAB14;

LAB15:    t12 = (t0 + 2632U);
    t18 = *((char **)t12);
    t33 = (4 - 4);
    t22 = (t33 * -1);
    t23 = (1U * t22);
    t12 = (t0 + 2312U);
    t29 = *((char **)t12);
    t12 = (t0 + 9648U);
    t42 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t29, t12);
    t43 = (t42 - 0);
    t24 = (t43 * 1);
    xsi_vhdl_check_range_of_index(0, 511, 1, t42);
    t25 = (5U * t24);
    t26 = (0 + t25);
    t27 = (t26 + t23);
    t36 = (t18 + t27);
    t6 = *((unsigned char *)t36);
    t44 = (t6 == (unsigned char)2);
    t2 = t44;

LAB16:    if (t2 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 2632U);
    t3 = *((char **)t1);
    t15 = (4 - 3);
    t16 = (t15 * 1U);
    t1 = (t0 + 2312U);
    t4 = *((char **)t1);
    t1 = (t0 + 9648U);
    t13 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t4, t1);
    t14 = (t13 - 0);
    t17 = (t14 * 1);
    xsi_vhdl_check_range_of_index(0, 511, 1, t13);
    t22 = (5U * t17);
    t23 = (0 + t22);
    t24 = (t23 + t16);
    t7 = (t3 + t24);
    t8 = (t0 + 5328);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t7, 4U);
    xsi_driver_first_trans_fast_port(t8);

LAB12:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 24721);
    t8 = (t0 + 5328);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 4U);
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(47, ng0);
    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 2472U);
    t3 = *((char **)t1);
    t1 = (t0 + 1512U);
    t4 = *((char **)t1);
    t1 = (t0 + 9552U);
    t13 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t4, t1);
    t14 = (t13 - 0);
    t15 = (t14 * 1);
    xsi_vhdl_check_range_of_index(0, 384, 1, t13);
    t16 = (32U * t15);
    t17 = (0 + t16);
    t7 = (t3 + t17);
    t8 = (t0 + 5392);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t7, 32U);
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(53, ng0);
    t1 = (t0 + 2472U);
    t3 = *((char **)t1);
    t1 = (t0 + 1512U);
    t4 = *((char **)t1);
    t15 = (10 - 10);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t1 = (t4 + t17);
    t7 = (t21 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 10;
    t8 = (t7 + 4U);
    *((int *)t8) = 3;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t13 = (3 - 10);
    t22 = (t13 * -1);
    t22 = (t22 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t22;
    t8 = (t0 + 1512U);
    t9 = *((char **)t8);
    t14 = (2 - 10);
    t22 = (t14 * -1);
    t23 = (1U * t22);
    t24 = (0 + t23);
    t8 = (t9 + t24);
    t2 = *((unsigned char *)t8);
    t5 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t2);
    t10 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t20, t1, t21, t5);
    t11 = (t0 + 1512U);
    t12 = *((char **)t11);
    t25 = (10 - 1);
    t26 = (t25 * 1U);
    t27 = (0 + t26);
    t11 = (t12 + t27);
    t18 = (t28 + 0U);
    t29 = (t18 + 0U);
    *((int *)t29) = 1;
    t29 = (t18 + 4U);
    *((int *)t29) = 0;
    t29 = (t18 + 8U);
    *((int *)t29) = -1;
    t30 = (0 - 1);
    t31 = (t30 * -1);
    t31 = (t31 + 1);
    t29 = (t18 + 12U);
    *((unsigned int *)t29) = t31;
    t29 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t19, t10, t20, t11, t28);
    t32 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t29, t19);
    t33 = (t32 - 0);
    t31 = (t33 * 1);
    xsi_vhdl_check_range_of_index(0, 384, 1, t32);
    t34 = (32U * t31);
    t35 = (0 + t34);
    t36 = (t3 + t35);
    t37 = (t0 + 5456);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    memcpy(t41, t36, 32U);
    xsi_driver_first_trans_fast_port(t37);

LAB9:    goto LAB6;

LAB8:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 2472U);
    t4 = *((char **)t1);
    t1 = (t0 + 1512U);
    t7 = *((char **)t1);
    t1 = (t0 + 9552U);
    t13 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t7, t1);
    t14 = (t13 - 0);
    t15 = (t14 * 1);
    xsi_vhdl_check_range_of_index(0, 384, 1, t13);
    t16 = (32U * t15);
    t17 = (0 + t16);
    t8 = (t4 + t17);
    t9 = (t0 + 5392);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t18 = *((char **)t12);
    memcpy(t18, t8, 32U);
    xsi_driver_first_trans_fast_port(t9);
    xsi_set_current_line(49, ng0);
    t1 = (t0 + 24725);
    t4 = (t0 + 5456);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 32U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(57, ng0);
    t37 = (t0 + 2792U);
    t38 = *((char **)t37);
    t31 = (10 - 10);
    t34 = (t31 * 1U);
    t35 = (0 + t34);
    t37 = (t38 + t35);
    t39 = (t0 + 5328);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    t45 = (t41 + 56U);
    t46 = *((char **)t45);
    memcpy(t46, t37, 4U);
    xsi_driver_first_trans_fast_port(t39);
    xsi_set_current_line(58, ng0);
    t1 = (t0 + 2792U);
    t3 = *((char **)t1);
    t15 = (10 - 10);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t1 = (t3 + t17);
    t7 = ((IEEE_P_2592010699) + 4024);
    t8 = (t20 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 10;
    t9 = (t8 + 4U);
    *((int *)t9) = 7;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t13 = (7 - 10);
    t22 = (t13 * -1);
    t22 = (t22 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t22;
    t4 = xsi_base_array_concat(t4, t19, t7, (char)99, (unsigned char)3, (char)97, t1, t20, (char)101);
    t22 = (1U + 4U);
    t2 = (5U != t22);
    if (t2 == 1)
        goto LAB17;

LAB18:    t9 = (t0 + 2312U);
    t10 = *((char **)t9);
    t9 = (t0 + 9648U);
    t14 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t10, t9);
    t30 = (t14 - 0);
    t23 = (t30 * 1);
    t24 = (5U * t23);
    t25 = (0U + t24);
    t11 = (t0 + 5520);
    t12 = (t11 + 56U);
    t18 = *((char **)t12);
    t29 = (t18 + 56U);
    t36 = *((char **)t29);
    memcpy(t36, t4, 5U);
    xsi_driver_first_trans_delta(t11, t25, 5U, 0LL);
    xsi_set_current_line(59, ng0);
    t1 = (t0 + 2952U);
    t3 = *((char **)t1);
    t15 = (63 - 31);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t1 = (t3 + t17);
    t4 = (t0 + 2792U);
    t7 = *((char **)t4);
    t4 = (t0 + 9664U);
    t13 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t7, t4);
    t14 = (t13 - 0);
    t22 = (t14 * 1);
    t23 = (32U * t22);
    t24 = (0U + t23);
    t8 = (t0 + 5584);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 32U);
    xsi_driver_first_trans_delta(t8, t24, 32U, 0LL);
    goto LAB12;

LAB14:    t2 = (unsigned char)1;
    goto LAB16;

LAB17:    xsi_size_not_matching(5U, t22, 0);
    goto LAB18;

}


extern void work_a_0933335888_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0933335888_3212880686_p_0,(void *)work_a_0933335888_3212880686_p_1,(void *)work_a_0933335888_3212880686_p_2};
	xsi_register_didat("work_a_0933335888_3212880686", "isim/mainMemory_isim_beh.exe.sim/work/a_0933335888_3212880686.didat");
	xsi_register_executes(pe);
}
