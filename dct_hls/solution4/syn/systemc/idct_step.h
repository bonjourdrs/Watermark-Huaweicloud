// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _idct_step_HH_
#define _idct_step_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct idct_step : public sc_module {
    // Port declarations 33
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<20> > isrc_0_0_V_read;
    sc_in< sc_lv<20> > isrc_0_1_V_read;
    sc_in< sc_lv<20> > isrc_0_2_V_read;
    sc_in< sc_lv<20> > isrc_0_3_V_read;
    sc_in< sc_lv<20> > isrc_1_0_V_read;
    sc_in< sc_lv<20> > isrc_1_1_V_read;
    sc_in< sc_lv<20> > isrc_1_2_V_read;
    sc_in< sc_lv<20> > isrc_1_3_V_read;
    sc_in< sc_lv<20> > isrc_2_0_V_read;
    sc_in< sc_lv<20> > isrc_2_1_V_read;
    sc_in< sc_lv<20> > isrc_2_2_V_read;
    sc_in< sc_lv<20> > isrc_2_3_V_read;
    sc_in< sc_lv<20> > isrc_3_0_V_read;
    sc_in< sc_lv<20> > isrc_3_1_V_read;
    sc_in< sc_lv<20> > isrc_3_2_V_read;
    sc_in< sc_lv<20> > isrc_3_3_V_read;
    sc_out< sc_lv<20> > ap_return_0;
    sc_out< sc_lv<20> > ap_return_1;
    sc_out< sc_lv<20> > ap_return_2;
    sc_out< sc_lv<20> > ap_return_3;
    sc_out< sc_lv<20> > ap_return_4;
    sc_out< sc_lv<20> > ap_return_5;
    sc_out< sc_lv<20> > ap_return_6;
    sc_out< sc_lv<20> > ap_return_7;
    sc_out< sc_lv<20> > ap_return_8;
    sc_out< sc_lv<20> > ap_return_9;
    sc_out< sc_lv<20> > ap_return_10;
    sc_out< sc_lv<20> > ap_return_11;
    sc_out< sc_lv<20> > ap_return_12;
    sc_out< sc_lv<20> > ap_return_13;
    sc_out< sc_lv<20> > ap_return_14;
    sc_out< sc_lv<20> > ap_return_15;


    // Module declarations
    idct_step(sc_module_name name);
    SC_HAS_PROCESS(idct_step);

    ~idct_step();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<19> > tmp_fu_138_p1;
    sc_signal< sc_lv<19> > tmp_55_fu_146_p1;
    sc_signal< sc_lv<19> > tmp1_fu_150_p2;
    sc_signal< sc_lv<19> > tmp_54_fu_142_p1;
    sc_signal< sc_lv<19> > tmp6_fu_156_p2;
    sc_signal< sc_lv<20> > tmp4_fu_162_p3;
    sc_signal< sc_lv<19> > tmp_56_fu_176_p1;
    sc_signal< sc_lv<19> > tmp_58_fu_184_p1;
    sc_signal< sc_lv<19> > tmp2_fu_188_p2;
    sc_signal< sc_lv<19> > tmp_57_fu_180_p1;
    sc_signal< sc_lv<19> > tmp3_fu_194_p2;
    sc_signal< sc_lv<20> > tmp7_fu_200_p3;
    sc_signal< sc_lv<19> > tmp_59_fu_214_p1;
    sc_signal< sc_lv<19> > tmp_61_fu_222_p1;
    sc_signal< sc_lv<19> > tmp15_fu_226_p2;
    sc_signal< sc_lv<19> > tmp_60_fu_218_p1;
    sc_signal< sc_lv<19> > tmp9_fu_232_p2;
    sc_signal< sc_lv<20> > tmp10_fu_238_p3;
    sc_signal< sc_lv<19> > tmp_62_fu_252_p1;
    sc_signal< sc_lv<19> > tmp_64_fu_260_p1;
    sc_signal< sc_lv<19> > tmp16_fu_264_p2;
    sc_signal< sc_lv<19> > tmp_63_fu_256_p1;
    sc_signal< sc_lv<19> > tmp12_fu_270_p2;
    sc_signal< sc_lv<20> > tmp13_fu_276_p3;
    sc_signal< sc_lv<20> > r_V_fu_290_p2;
    sc_signal< sc_lv<20> > addconv4_fu_308_p2;
    sc_signal< sc_lv<20> > r_V_1_fu_296_p2;
    sc_signal< sc_lv<20> > tmp_s_fu_314_p2;
    sc_signal< sc_lv<20> > r_V_2_fu_302_p2;
    sc_signal< sc_lv<20> > r_V_3_fu_326_p2;
    sc_signal< sc_lv<20> > addconv5_fu_344_p2;
    sc_signal< sc_lv<20> > r_V_4_fu_332_p2;
    sc_signal< sc_lv<20> > tmp_39_fu_350_p2;
    sc_signal< sc_lv<20> > r_V_5_fu_338_p2;
    sc_signal< sc_lv<20> > r_V_6_fu_362_p2;
    sc_signal< sc_lv<20> > addconv6_fu_380_p2;
    sc_signal< sc_lv<20> > r_V_7_fu_368_p2;
    sc_signal< sc_lv<20> > tmp_40_fu_386_p2;
    sc_signal< sc_lv<20> > r_V_8_fu_374_p2;
    sc_signal< sc_lv<20> > r_V_9_fu_398_p2;
    sc_signal< sc_lv<20> > addconv7_fu_416_p2;
    sc_signal< sc_lv<20> > r_V_10_fu_404_p2;
    sc_signal< sc_lv<20> > tmp_41_fu_422_p2;
    sc_signal< sc_lv<20> > r_V_11_fu_410_p2;
    sc_signal< sc_lv<20> > tmp_42_fu_434_p2;
    sc_signal< sc_lv<20> > tmp_43_fu_440_p2;
    sc_signal< sc_lv<20> > tmp_44_fu_452_p2;
    sc_signal< sc_lv<20> > tmp_45_fu_458_p2;
    sc_signal< sc_lv<20> > tmp_46_fu_470_p2;
    sc_signal< sc_lv<20> > tmp_47_fu_476_p2;
    sc_signal< sc_lv<20> > tmp_48_fu_488_p2;
    sc_signal< sc_lv<20> > tmp_49_fu_494_p2;
    sc_signal< sc_lv<20> > r_V_12_fu_506_p2;
    sc_signal< sc_lv<20> > tmp_50_fu_512_p2;
    sc_signal< sc_lv<20> > addconv_fu_518_p2;
    sc_signal< sc_lv<20> > r_V_13_fu_530_p2;
    sc_signal< sc_lv<20> > tmp_51_fu_536_p2;
    sc_signal< sc_lv<20> > addconv1_fu_542_p2;
    sc_signal< sc_lv<20> > r_V_14_fu_554_p2;
    sc_signal< sc_lv<20> > tmp_52_fu_560_p2;
    sc_signal< sc_lv<20> > addconv2_fu_566_p2;
    sc_signal< sc_lv<20> > r_V_15_fu_578_p2;
    sc_signal< sc_lv<20> > tmp_53_fu_584_p2;
    sc_signal< sc_lv<20> > addconv3_fu_590_p2;
    sc_signal< sc_lv<20> > idst_0_0_V_write_a_fu_170_p2;
    sc_signal< sc_lv<20> > idst_0_1_V_write_a_fu_208_p2;
    sc_signal< sc_lv<20> > idst_0_2_V_write_a_fu_246_p2;
    sc_signal< sc_lv<20> > idst_0_3_V_write_a_fu_284_p2;
    sc_signal< sc_lv<20> > idst_1_0_V_write_a_fu_320_p2;
    sc_signal< sc_lv<20> > idst_1_1_V_write_a_fu_356_p2;
    sc_signal< sc_lv<20> > idst_1_2_V_write_a_fu_392_p2;
    sc_signal< sc_lv<20> > idst_1_3_V_write_a_fu_428_p2;
    sc_signal< sc_lv<20> > idst_2_0_V_write_a_fu_446_p2;
    sc_signal< sc_lv<20> > idst_2_1_V_write_a_fu_464_p2;
    sc_signal< sc_lv<20> > idst_2_2_V_write_a_fu_482_p2;
    sc_signal< sc_lv<20> > idst_2_3_V_write_a_fu_500_p2;
    sc_signal< sc_lv<20> > idst_3_0_V_write_a_fu_524_p2;
    sc_signal< sc_lv<20> > idst_3_1_V_write_a_fu_548_p2;
    sc_signal< sc_lv<20> > idst_3_2_V_write_a_fu_572_p2;
    sc_signal< sc_lv<20> > idst_3_3_V_write_a_fu_596_p2;
    static const sc_logic ap_const_logic_1;
    static const bool ap_const_boolean_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<20> ap_const_lv20_1;
    static const sc_logic ap_const_logic_0;
    // Thread declarations
    void thread_addconv1_fu_542_p2();
    void thread_addconv2_fu_566_p2();
    void thread_addconv3_fu_590_p2();
    void thread_addconv4_fu_308_p2();
    void thread_addconv5_fu_344_p2();
    void thread_addconv6_fu_380_p2();
    void thread_addconv7_fu_416_p2();
    void thread_addconv_fu_518_p2();
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
    void thread_idst_0_0_V_write_a_fu_170_p2();
    void thread_idst_0_1_V_write_a_fu_208_p2();
    void thread_idst_0_2_V_write_a_fu_246_p2();
    void thread_idst_0_3_V_write_a_fu_284_p2();
    void thread_idst_1_0_V_write_a_fu_320_p2();
    void thread_idst_1_1_V_write_a_fu_356_p2();
    void thread_idst_1_2_V_write_a_fu_392_p2();
    void thread_idst_1_3_V_write_a_fu_428_p2();
    void thread_idst_2_0_V_write_a_fu_446_p2();
    void thread_idst_2_1_V_write_a_fu_464_p2();
    void thread_idst_2_2_V_write_a_fu_482_p2();
    void thread_idst_2_3_V_write_a_fu_500_p2();
    void thread_idst_3_0_V_write_a_fu_524_p2();
    void thread_idst_3_1_V_write_a_fu_548_p2();
    void thread_idst_3_2_V_write_a_fu_572_p2();
    void thread_idst_3_3_V_write_a_fu_596_p2();
    void thread_r_V_10_fu_404_p2();
    void thread_r_V_11_fu_410_p2();
    void thread_r_V_12_fu_506_p2();
    void thread_r_V_13_fu_530_p2();
    void thread_r_V_14_fu_554_p2();
    void thread_r_V_15_fu_578_p2();
    void thread_r_V_1_fu_296_p2();
    void thread_r_V_2_fu_302_p2();
    void thread_r_V_3_fu_326_p2();
    void thread_r_V_4_fu_332_p2();
    void thread_r_V_5_fu_338_p2();
    void thread_r_V_6_fu_362_p2();
    void thread_r_V_7_fu_368_p2();
    void thread_r_V_8_fu_374_p2();
    void thread_r_V_9_fu_398_p2();
    void thread_r_V_fu_290_p2();
    void thread_tmp10_fu_238_p3();
    void thread_tmp12_fu_270_p2();
    void thread_tmp13_fu_276_p3();
    void thread_tmp15_fu_226_p2();
    void thread_tmp16_fu_264_p2();
    void thread_tmp1_fu_150_p2();
    void thread_tmp2_fu_188_p2();
    void thread_tmp3_fu_194_p2();
    void thread_tmp4_fu_162_p3();
    void thread_tmp6_fu_156_p2();
    void thread_tmp7_fu_200_p3();
    void thread_tmp9_fu_232_p2();
    void thread_tmp_39_fu_350_p2();
    void thread_tmp_40_fu_386_p2();
    void thread_tmp_41_fu_422_p2();
    void thread_tmp_42_fu_434_p2();
    void thread_tmp_43_fu_440_p2();
    void thread_tmp_44_fu_452_p2();
    void thread_tmp_45_fu_458_p2();
    void thread_tmp_46_fu_470_p2();
    void thread_tmp_47_fu_476_p2();
    void thread_tmp_48_fu_488_p2();
    void thread_tmp_49_fu_494_p2();
    void thread_tmp_50_fu_512_p2();
    void thread_tmp_51_fu_536_p2();
    void thread_tmp_52_fu_560_p2();
    void thread_tmp_53_fu_584_p2();
    void thread_tmp_54_fu_142_p1();
    void thread_tmp_55_fu_146_p1();
    void thread_tmp_56_fu_176_p1();
    void thread_tmp_57_fu_180_p1();
    void thread_tmp_58_fu_184_p1();
    void thread_tmp_59_fu_214_p1();
    void thread_tmp_60_fu_218_p1();
    void thread_tmp_61_fu_222_p1();
    void thread_tmp_62_fu_252_p1();
    void thread_tmp_63_fu_256_p1();
    void thread_tmp_64_fu_260_p1();
    void thread_tmp_fu_138_p1();
    void thread_tmp_s_fu_314_p2();
};

}

using namespace ap_rtl;

#endif
