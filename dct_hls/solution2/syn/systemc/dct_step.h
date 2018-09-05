// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _dct_step_HH_
#define _dct_step_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct dct_step : public sc_module {
    // Port declarations 33
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<16> > src_0_0_read;
    sc_in< sc_lv<16> > src_0_1_read;
    sc_in< sc_lv<16> > src_0_2_read;
    sc_in< sc_lv<16> > src_0_3_read;
    sc_in< sc_lv<16> > src_1_0_read;
    sc_in< sc_lv<16> > src_1_1_read;
    sc_in< sc_lv<16> > src_1_2_read;
    sc_in< sc_lv<16> > src_1_3_read;
    sc_in< sc_lv<16> > src_2_0_read;
    sc_in< sc_lv<16> > src_2_1_read;
    sc_in< sc_lv<16> > src_2_2_read;
    sc_in< sc_lv<16> > src_2_3_read;
    sc_in< sc_lv<16> > src_3_0_read;
    sc_in< sc_lv<16> > src_3_1_read;
    sc_in< sc_lv<16> > src_3_2_read;
    sc_in< sc_lv<16> > src_3_3_read;
    sc_out< sc_lv<16> > ap_return_0;
    sc_out< sc_lv<16> > ap_return_1;
    sc_out< sc_lv<16> > ap_return_2;
    sc_out< sc_lv<16> > ap_return_3;
    sc_out< sc_lv<16> > ap_return_4;
    sc_out< sc_lv<16> > ap_return_5;
    sc_out< sc_lv<16> > ap_return_6;
    sc_out< sc_lv<16> > ap_return_7;
    sc_out< sc_lv<16> > ap_return_8;
    sc_out< sc_lv<16> > ap_return_9;
    sc_out< sc_lv<16> > ap_return_10;
    sc_out< sc_lv<16> > ap_return_11;
    sc_out< sc_lv<16> > ap_return_12;
    sc_out< sc_lv<16> > ap_return_13;
    sc_out< sc_lv<16> > ap_return_14;
    sc_out< sc_lv<16> > ap_return_15;


    // Module declarations
    dct_step(sc_module_name name);
    SC_HAS_PROCESS(dct_step);

    ~dct_step();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<16> > tmp2_fu_140_p2;
    sc_signal< sc_lv<16> > tmp1_fu_134_p2;
    sc_signal< sc_lv<16> > tmp4_fu_158_p2;
    sc_signal< sc_lv<16> > tmp3_fu_152_p2;
    sc_signal< sc_lv<16> > tmp6_fu_176_p2;
    sc_signal< sc_lv<16> > tmp5_fu_170_p2;
    sc_signal< sc_lv<16> > tmp8_fu_194_p2;
    sc_signal< sc_lv<16> > tmp7_fu_188_p2;
    sc_signal< sc_lv<16> > tmp_fu_206_p2;
    sc_signal< sc_lv<16> > tmp_28_fu_218_p2;
    sc_signal< sc_lv<16> > tmp_29_fu_224_p2;
    sc_signal< sc_lv<16> > tmp_75_fu_212_p2;
    sc_signal< sc_lv<16> > tmp_76_fu_236_p2;
    sc_signal< sc_lv<16> > tmp_s_fu_248_p2;
    sc_signal< sc_lv<16> > tmp_32_fu_254_p2;
    sc_signal< sc_lv<16> > tmp_77_fu_242_p2;
    sc_signal< sc_lv<16> > tmp_78_fu_266_p2;
    sc_signal< sc_lv<16> > tmp_33_fu_278_p2;
    sc_signal< sc_lv<16> > tmp_34_fu_284_p2;
    sc_signal< sc_lv<16> > tmp_79_fu_272_p2;
    sc_signal< sc_lv<16> > tmp_80_fu_296_p2;
    sc_signal< sc_lv<16> > tmp_35_fu_308_p2;
    sc_signal< sc_lv<16> > tmp_36_fu_314_p2;
    sc_signal< sc_lv<16> > tmp_81_fu_302_p2;
    sc_signal< sc_lv<16> > tmp_37_fu_326_p2;
    sc_signal< sc_lv<16> > tmp_38_fu_332_p2;
    sc_signal< sc_lv<16> > tmp_39_fu_344_p2;
    sc_signal< sc_lv<16> > tmp_40_fu_350_p2;
    sc_signal< sc_lv<16> > tmp_41_fu_362_p2;
    sc_signal< sc_lv<16> > tmp_42_fu_368_p2;
    sc_signal< sc_lv<16> > tmp_43_fu_380_p2;
    sc_signal< sc_lv<16> > tmp_44_fu_386_p2;
    sc_signal< sc_lv<16> > tmp_82_fu_398_p2;
    sc_signal< sc_lv<16> > tmp_45_fu_410_p2;
    sc_signal< sc_lv<16> > tmp_83_fu_404_p2;
    sc_signal< sc_lv<16> > tmp_46_fu_416_p2;
    sc_signal< sc_lv<16> > tmp_84_fu_428_p2;
    sc_signal< sc_lv<16> > tmp_47_fu_440_p2;
    sc_signal< sc_lv<16> > tmp_85_fu_434_p2;
    sc_signal< sc_lv<16> > tmp_48_fu_446_p2;
    sc_signal< sc_lv<16> > tmp_86_fu_458_p2;
    sc_signal< sc_lv<16> > tmp_49_fu_470_p2;
    sc_signal< sc_lv<16> > tmp_87_fu_464_p2;
    sc_signal< sc_lv<16> > tmp_50_fu_476_p2;
    sc_signal< sc_lv<16> > tmp_88_fu_488_p2;
    sc_signal< sc_lv<16> > tmp_51_fu_500_p2;
    sc_signal< sc_lv<16> > tmp_89_fu_494_p2;
    sc_signal< sc_lv<16> > tmp_52_fu_506_p2;
    sc_signal< sc_lv<16> > dst_0_0_write_assi_fu_146_p2;
    sc_signal< sc_lv<16> > dst_0_1_write_assi_fu_230_p2;
    sc_signal< sc_lv<16> > dst_0_2_write_assi_fu_338_p2;
    sc_signal< sc_lv<16> > dst_0_3_write_assi_fu_422_p2;
    sc_signal< sc_lv<16> > dst_1_0_write_assi_fu_164_p2;
    sc_signal< sc_lv<16> > dst_1_1_write_assi_fu_260_p2;
    sc_signal< sc_lv<16> > dst_1_2_write_assi_fu_356_p2;
    sc_signal< sc_lv<16> > dst_1_3_write_assi_fu_452_p2;
    sc_signal< sc_lv<16> > dst_2_0_write_assi_fu_182_p2;
    sc_signal< sc_lv<16> > dst_2_1_write_assi_fu_290_p2;
    sc_signal< sc_lv<16> > dst_2_2_write_assi_fu_374_p2;
    sc_signal< sc_lv<16> > dst_2_3_write_assi_fu_482_p2;
    sc_signal< sc_lv<16> > dst_3_0_write_assi_fu_200_p2;
    sc_signal< sc_lv<16> > dst_3_1_write_assi_fu_320_p2;
    sc_signal< sc_lv<16> > dst_3_2_write_assi_fu_392_p2;
    sc_signal< sc_lv<16> > dst_3_3_write_assi_fu_512_p2;
    static const sc_logic ap_const_logic_1;
    static const bool ap_const_boolean_1;
    static const sc_lv<16> ap_const_lv16_1;
    static const sc_logic ap_const_logic_0;
    // Thread declarations
    void thread_ap_ready();
    void thread_ap_return_0();
    void thread_ap_return_1();
    void thread_ap_return_10();
    void thread_ap_return_11();
    void thread_ap_return_12();
    void thread_ap_return_13();
    void thread_ap_return_14();
    void thread_ap_return_15();
    void thread_ap_return_2();
    void thread_ap_return_3();
    void thread_ap_return_4();
    void thread_ap_return_5();
    void thread_ap_return_6();
    void thread_ap_return_7();
    void thread_ap_return_8();
    void thread_ap_return_9();
    void thread_dst_0_0_write_assi_fu_146_p2();
    void thread_dst_0_1_write_assi_fu_230_p2();
    void thread_dst_0_2_write_assi_fu_338_p2();
    void thread_dst_0_3_write_assi_fu_422_p2();
    void thread_dst_1_0_write_assi_fu_164_p2();
    void thread_dst_1_1_write_assi_fu_260_p2();
    void thread_dst_1_2_write_assi_fu_356_p2();
    void thread_dst_1_3_write_assi_fu_452_p2();
    void thread_dst_2_0_write_assi_fu_182_p2();
    void thread_dst_2_1_write_assi_fu_290_p2();
    void thread_dst_2_2_write_assi_fu_374_p2();
    void thread_dst_2_3_write_assi_fu_482_p2();
    void thread_dst_3_0_write_assi_fu_200_p2();
    void thread_dst_3_1_write_assi_fu_320_p2();
    void thread_dst_3_2_write_assi_fu_392_p2();
    void thread_dst_3_3_write_assi_fu_512_p2();
    void thread_tmp1_fu_134_p2();
    void thread_tmp2_fu_140_p2();
    void thread_tmp3_fu_152_p2();
    void thread_tmp4_fu_158_p2();
    void thread_tmp5_fu_170_p2();
    void thread_tmp6_fu_176_p2();
    void thread_tmp7_fu_188_p2();
    void thread_tmp8_fu_194_p2();
    void thread_tmp_28_fu_218_p2();
    void thread_tmp_29_fu_224_p2();
    void thread_tmp_32_fu_254_p2();
    void thread_tmp_33_fu_278_p2();
    void thread_tmp_34_fu_284_p2();
    void thread_tmp_35_fu_308_p2();
    void thread_tmp_36_fu_314_p2();
    void thread_tmp_37_fu_326_p2();
    void thread_tmp_38_fu_332_p2();
    void thread_tmp_39_fu_344_p2();
    void thread_tmp_40_fu_350_p2();
    void thread_tmp_41_fu_362_p2();
    void thread_tmp_42_fu_368_p2();
    void thread_tmp_43_fu_380_p2();
    void thread_tmp_44_fu_386_p2();
    void thread_tmp_45_fu_410_p2();
    void thread_tmp_46_fu_416_p2();
    void thread_tmp_47_fu_440_p2();
    void thread_tmp_48_fu_446_p2();
    void thread_tmp_49_fu_470_p2();
    void thread_tmp_50_fu_476_p2();
    void thread_tmp_51_fu_500_p2();
    void thread_tmp_52_fu_506_p2();
    void thread_tmp_75_fu_212_p2();
    void thread_tmp_76_fu_236_p2();
    void thread_tmp_77_fu_242_p2();
    void thread_tmp_78_fu_266_p2();
    void thread_tmp_79_fu_272_p2();
    void thread_tmp_80_fu_296_p2();
    void thread_tmp_81_fu_302_p2();
    void thread_tmp_82_fu_398_p2();
    void thread_tmp_83_fu_404_p2();
    void thread_tmp_84_fu_428_p2();
    void thread_tmp_85_fu_434_p2();
    void thread_tmp_86_fu_458_p2();
    void thread_tmp_87_fu_464_p2();
    void thread_tmp_88_fu_488_p2();
    void thread_tmp_89_fu_494_p2();
    void thread_tmp_fu_206_p2();
    void thread_tmp_s_fu_248_p2();
};

}

using namespace ap_rtl;

#endif
