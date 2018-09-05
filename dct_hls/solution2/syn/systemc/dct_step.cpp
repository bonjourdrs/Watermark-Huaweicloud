// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "dct_step.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic dct_step::ap_const_logic_1 = sc_dt::Log_1;
const bool dct_step::ap_const_boolean_1 = true;
const sc_lv<16> dct_step::ap_const_lv16_1 = "1";
const sc_logic dct_step::ap_const_logic_0 = sc_dt::Log_0;

dct_step::dct_step(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_ready);

    SC_METHOD(thread_ap_return_0);
    sensitive << ( dst_0_0_write_assi_fu_146_p2 );

    SC_METHOD(thread_ap_return_1);
    sensitive << ( dst_0_1_write_assi_fu_230_p2 );

    SC_METHOD(thread_ap_return_10);
    sensitive << ( dst_2_2_write_assi_fu_374_p2 );

    SC_METHOD(thread_ap_return_11);
    sensitive << ( dst_2_3_write_assi_fu_482_p2 );

    SC_METHOD(thread_ap_return_12);
    sensitive << ( dst_3_0_write_assi_fu_200_p2 );

    SC_METHOD(thread_ap_return_13);
    sensitive << ( dst_3_1_write_assi_fu_320_p2 );

    SC_METHOD(thread_ap_return_14);
    sensitive << ( dst_3_2_write_assi_fu_392_p2 );

    SC_METHOD(thread_ap_return_15);
    sensitive << ( dst_3_3_write_assi_fu_512_p2 );

    SC_METHOD(thread_ap_return_2);
    sensitive << ( dst_0_2_write_assi_fu_338_p2 );

    SC_METHOD(thread_ap_return_3);
    sensitive << ( dst_0_3_write_assi_fu_422_p2 );

    SC_METHOD(thread_ap_return_4);
    sensitive << ( dst_1_0_write_assi_fu_164_p2 );

    SC_METHOD(thread_ap_return_5);
    sensitive << ( dst_1_1_write_assi_fu_260_p2 );

    SC_METHOD(thread_ap_return_6);
    sensitive << ( dst_1_2_write_assi_fu_356_p2 );

    SC_METHOD(thread_ap_return_7);
    sensitive << ( dst_1_3_write_assi_fu_452_p2 );

    SC_METHOD(thread_ap_return_8);
    sensitive << ( dst_2_0_write_assi_fu_182_p2 );

    SC_METHOD(thread_ap_return_9);
    sensitive << ( dst_2_1_write_assi_fu_290_p2 );

    SC_METHOD(thread_dst_0_0_write_assi_fu_146_p2);
    sensitive << ( tmp2_fu_140_p2 );
    sensitive << ( tmp1_fu_134_p2 );

    SC_METHOD(thread_dst_0_1_write_assi_fu_230_p2);
    sensitive << ( tmp_29_fu_224_p2 );
    sensitive << ( tmp_75_fu_212_p2 );

    SC_METHOD(thread_dst_0_2_write_assi_fu_338_p2);
    sensitive << ( src_3_0_read );
    sensitive << ( tmp_38_fu_332_p2 );

    SC_METHOD(thread_dst_0_3_write_assi_fu_422_p2);
    sensitive << ( src_3_0_read );
    sensitive << ( tmp_46_fu_416_p2 );

    SC_METHOD(thread_dst_1_0_write_assi_fu_164_p2);
    sensitive << ( tmp4_fu_158_p2 );
    sensitive << ( tmp3_fu_152_p2 );

    SC_METHOD(thread_dst_1_1_write_assi_fu_260_p2);
    sensitive << ( tmp_32_fu_254_p2 );
    sensitive << ( tmp_77_fu_242_p2 );

    SC_METHOD(thread_dst_1_2_write_assi_fu_356_p2);
    sensitive << ( src_3_1_read );
    sensitive << ( tmp_40_fu_350_p2 );

    SC_METHOD(thread_dst_1_3_write_assi_fu_452_p2);
    sensitive << ( src_3_1_read );
    sensitive << ( tmp_48_fu_446_p2 );

    SC_METHOD(thread_dst_2_0_write_assi_fu_182_p2);
    sensitive << ( tmp6_fu_176_p2 );
    sensitive << ( tmp5_fu_170_p2 );

    SC_METHOD(thread_dst_2_1_write_assi_fu_290_p2);
    sensitive << ( tmp_34_fu_284_p2 );
    sensitive << ( tmp_79_fu_272_p2 );

    SC_METHOD(thread_dst_2_2_write_assi_fu_374_p2);
    sensitive << ( src_3_2_read );
    sensitive << ( tmp_42_fu_368_p2 );

    SC_METHOD(thread_dst_2_3_write_assi_fu_482_p2);
    sensitive << ( src_3_2_read );
    sensitive << ( tmp_50_fu_476_p2 );

    SC_METHOD(thread_dst_3_0_write_assi_fu_200_p2);
    sensitive << ( tmp8_fu_194_p2 );
    sensitive << ( tmp7_fu_188_p2 );

    SC_METHOD(thread_dst_3_1_write_assi_fu_320_p2);
    sensitive << ( tmp_36_fu_314_p2 );
    sensitive << ( tmp_81_fu_302_p2 );

    SC_METHOD(thread_dst_3_2_write_assi_fu_392_p2);
    sensitive << ( src_3_3_read );
    sensitive << ( tmp_44_fu_386_p2 );

    SC_METHOD(thread_dst_3_3_write_assi_fu_512_p2);
    sensitive << ( src_3_3_read );
    sensitive << ( tmp_52_fu_506_p2 );

    SC_METHOD(thread_tmp1_fu_134_p2);
    sensitive << ( src_0_0_read );
    sensitive << ( src_1_0_read );

    SC_METHOD(thread_tmp2_fu_140_p2);
    sensitive << ( src_2_0_read );
    sensitive << ( src_3_0_read );

    SC_METHOD(thread_tmp3_fu_152_p2);
    sensitive << ( src_0_1_read );
    sensitive << ( src_1_1_read );

    SC_METHOD(thread_tmp4_fu_158_p2);
    sensitive << ( src_2_1_read );
    sensitive << ( src_3_1_read );

    SC_METHOD(thread_tmp5_fu_170_p2);
    sensitive << ( src_0_2_read );
    sensitive << ( src_1_2_read );

    SC_METHOD(thread_tmp6_fu_176_p2);
    sensitive << ( src_2_2_read );
    sensitive << ( src_3_2_read );

    SC_METHOD(thread_tmp7_fu_188_p2);
    sensitive << ( src_0_3_read );
    sensitive << ( src_1_3_read );

    SC_METHOD(thread_tmp8_fu_194_p2);
    sensitive << ( src_2_3_read );
    sensitive << ( src_3_3_read );

    SC_METHOD(thread_tmp_28_fu_218_p2);
    sensitive << ( src_1_0_read );
    sensitive << ( tmp_fu_206_p2 );

    SC_METHOD(thread_tmp_29_fu_224_p2);
    sensitive << ( src_2_0_read );
    sensitive << ( tmp_28_fu_218_p2 );

    SC_METHOD(thread_tmp_32_fu_254_p2);
    sensitive << ( src_2_1_read );
    sensitive << ( tmp_s_fu_248_p2 );

    SC_METHOD(thread_tmp_33_fu_278_p2);
    sensitive << ( src_1_2_read );
    sensitive << ( tmp_78_fu_266_p2 );

    SC_METHOD(thread_tmp_34_fu_284_p2);
    sensitive << ( src_2_2_read );
    sensitive << ( tmp_33_fu_278_p2 );

    SC_METHOD(thread_tmp_35_fu_308_p2);
    sensitive << ( src_1_3_read );
    sensitive << ( tmp_80_fu_296_p2 );

    SC_METHOD(thread_tmp_36_fu_314_p2);
    sensitive << ( src_2_3_read );
    sensitive << ( tmp_35_fu_308_p2 );

    SC_METHOD(thread_tmp_37_fu_326_p2);
    sensitive << ( src_0_0_read );
    sensitive << ( src_1_0_read );

    SC_METHOD(thread_tmp_38_fu_332_p2);
    sensitive << ( src_2_0_read );
    sensitive << ( tmp_37_fu_326_p2 );

    SC_METHOD(thread_tmp_39_fu_344_p2);
    sensitive << ( src_0_1_read );
    sensitive << ( src_1_1_read );

    SC_METHOD(thread_tmp_40_fu_350_p2);
    sensitive << ( src_2_1_read );
    sensitive << ( tmp_39_fu_344_p2 );

    SC_METHOD(thread_tmp_41_fu_362_p2);
    sensitive << ( src_0_2_read );
    sensitive << ( src_1_2_read );

    SC_METHOD(thread_tmp_42_fu_368_p2);
    sensitive << ( src_2_2_read );
    sensitive << ( tmp_41_fu_362_p2 );

    SC_METHOD(thread_tmp_43_fu_380_p2);
    sensitive << ( src_0_3_read );
    sensitive << ( src_1_3_read );

    SC_METHOD(thread_tmp_44_fu_386_p2);
    sensitive << ( src_2_3_read );
    sensitive << ( tmp_43_fu_380_p2 );

    SC_METHOD(thread_tmp_45_fu_410_p2);
    sensitive << ( src_0_0_read );
    sensitive << ( tmp_82_fu_398_p2 );

    SC_METHOD(thread_tmp_46_fu_416_p2);
    sensitive << ( tmp_45_fu_410_p2 );
    sensitive << ( tmp_83_fu_404_p2 );

    SC_METHOD(thread_tmp_47_fu_440_p2);
    sensitive << ( src_0_1_read );
    sensitive << ( tmp_84_fu_428_p2 );

    SC_METHOD(thread_tmp_48_fu_446_p2);
    sensitive << ( tmp_47_fu_440_p2 );
    sensitive << ( tmp_85_fu_434_p2 );

    SC_METHOD(thread_tmp_49_fu_470_p2);
    sensitive << ( src_0_2_read );
    sensitive << ( tmp_86_fu_458_p2 );

    SC_METHOD(thread_tmp_50_fu_476_p2);
    sensitive << ( tmp_49_fu_470_p2 );
    sensitive << ( tmp_87_fu_464_p2 );

    SC_METHOD(thread_tmp_51_fu_500_p2);
    sensitive << ( src_0_3_read );
    sensitive << ( tmp_88_fu_488_p2 );

    SC_METHOD(thread_tmp_52_fu_506_p2);
    sensitive << ( tmp_51_fu_500_p2 );
    sensitive << ( tmp_89_fu_494_p2 );

    SC_METHOD(thread_tmp_75_fu_212_p2);
    sensitive << ( src_3_0_read );

    SC_METHOD(thread_tmp_76_fu_236_p2);
    sensitive << ( src_0_1_read );

    SC_METHOD(thread_tmp_77_fu_242_p2);
    sensitive << ( src_3_1_read );

    SC_METHOD(thread_tmp_78_fu_266_p2);
    sensitive << ( src_0_2_read );

    SC_METHOD(thread_tmp_79_fu_272_p2);
    sensitive << ( src_3_2_read );

    SC_METHOD(thread_tmp_80_fu_296_p2);
    sensitive << ( src_0_3_read );

    SC_METHOD(thread_tmp_81_fu_302_p2);
    sensitive << ( src_3_3_read );

    SC_METHOD(thread_tmp_82_fu_398_p2);
    sensitive << ( src_1_0_read );

    SC_METHOD(thread_tmp_83_fu_404_p2);
    sensitive << ( src_2_0_read );

    SC_METHOD(thread_tmp_84_fu_428_p2);
    sensitive << ( src_1_1_read );

    SC_METHOD(thread_tmp_85_fu_434_p2);
    sensitive << ( src_2_1_read );

    SC_METHOD(thread_tmp_86_fu_458_p2);
    sensitive << ( src_1_2_read );

    SC_METHOD(thread_tmp_87_fu_464_p2);
    sensitive << ( src_2_2_read );

    SC_METHOD(thread_tmp_88_fu_488_p2);
    sensitive << ( src_1_3_read );

    SC_METHOD(thread_tmp_89_fu_494_p2);
    sensitive << ( src_2_3_read );

    SC_METHOD(thread_tmp_fu_206_p2);
    sensitive << ( src_0_0_read );

    SC_METHOD(thread_tmp_s_fu_248_p2);
    sensitive << ( src_1_1_read );
    sensitive << ( tmp_76_fu_236_p2 );

    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "dct_step_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, src_0_0_read, "(port)src_0_0_read");
    sc_trace(mVcdFile, src_0_1_read, "(port)src_0_1_read");
    sc_trace(mVcdFile, src_0_2_read, "(port)src_0_2_read");
    sc_trace(mVcdFile, src_0_3_read, "(port)src_0_3_read");
    sc_trace(mVcdFile, src_1_0_read, "(port)src_1_0_read");
    sc_trace(mVcdFile, src_1_1_read, "(port)src_1_1_read");
    sc_trace(mVcdFile, src_1_2_read, "(port)src_1_2_read");
    sc_trace(mVcdFile, src_1_3_read, "(port)src_1_3_read");
    sc_trace(mVcdFile, src_2_0_read, "(port)src_2_0_read");
    sc_trace(mVcdFile, src_2_1_read, "(port)src_2_1_read");
    sc_trace(mVcdFile, src_2_2_read, "(port)src_2_2_read");
    sc_trace(mVcdFile, src_2_3_read, "(port)src_2_3_read");
    sc_trace(mVcdFile, src_3_0_read, "(port)src_3_0_read");
    sc_trace(mVcdFile, src_3_1_read, "(port)src_3_1_read");
    sc_trace(mVcdFile, src_3_2_read, "(port)src_3_2_read");
    sc_trace(mVcdFile, src_3_3_read, "(port)src_3_3_read");
    sc_trace(mVcdFile, ap_return_0, "(port)ap_return_0");
    sc_trace(mVcdFile, ap_return_1, "(port)ap_return_1");
    sc_trace(mVcdFile, ap_return_2, "(port)ap_return_2");
    sc_trace(mVcdFile, ap_return_3, "(port)ap_return_3");
    sc_trace(mVcdFile, ap_return_4, "(port)ap_return_4");
    sc_trace(mVcdFile, ap_return_5, "(port)ap_return_5");
    sc_trace(mVcdFile, ap_return_6, "(port)ap_return_6");
    sc_trace(mVcdFile, ap_return_7, "(port)ap_return_7");
    sc_trace(mVcdFile, ap_return_8, "(port)ap_return_8");
    sc_trace(mVcdFile, ap_return_9, "(port)ap_return_9");
    sc_trace(mVcdFile, ap_return_10, "(port)ap_return_10");
    sc_trace(mVcdFile, ap_return_11, "(port)ap_return_11");
    sc_trace(mVcdFile, ap_return_12, "(port)ap_return_12");
    sc_trace(mVcdFile, ap_return_13, "(port)ap_return_13");
    sc_trace(mVcdFile, ap_return_14, "(port)ap_return_14");
    sc_trace(mVcdFile, ap_return_15, "(port)ap_return_15");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, tmp2_fu_140_p2, "tmp2_fu_140_p2");
    sc_trace(mVcdFile, tmp1_fu_134_p2, "tmp1_fu_134_p2");
    sc_trace(mVcdFile, tmp4_fu_158_p2, "tmp4_fu_158_p2");
    sc_trace(mVcdFile, tmp3_fu_152_p2, "tmp3_fu_152_p2");
    sc_trace(mVcdFile, tmp6_fu_176_p2, "tmp6_fu_176_p2");
    sc_trace(mVcdFile, tmp5_fu_170_p2, "tmp5_fu_170_p2");
    sc_trace(mVcdFile, tmp8_fu_194_p2, "tmp8_fu_194_p2");
    sc_trace(mVcdFile, tmp7_fu_188_p2, "tmp7_fu_188_p2");
    sc_trace(mVcdFile, tmp_fu_206_p2, "tmp_fu_206_p2");
    sc_trace(mVcdFile, tmp_28_fu_218_p2, "tmp_28_fu_218_p2");
    sc_trace(mVcdFile, tmp_29_fu_224_p2, "tmp_29_fu_224_p2");
    sc_trace(mVcdFile, tmp_75_fu_212_p2, "tmp_75_fu_212_p2");
    sc_trace(mVcdFile, tmp_76_fu_236_p2, "tmp_76_fu_236_p2");
    sc_trace(mVcdFile, tmp_s_fu_248_p2, "tmp_s_fu_248_p2");
    sc_trace(mVcdFile, tmp_32_fu_254_p2, "tmp_32_fu_254_p2");
    sc_trace(mVcdFile, tmp_77_fu_242_p2, "tmp_77_fu_242_p2");
    sc_trace(mVcdFile, tmp_78_fu_266_p2, "tmp_78_fu_266_p2");
    sc_trace(mVcdFile, tmp_33_fu_278_p2, "tmp_33_fu_278_p2");
    sc_trace(mVcdFile, tmp_34_fu_284_p2, "tmp_34_fu_284_p2");
    sc_trace(mVcdFile, tmp_79_fu_272_p2, "tmp_79_fu_272_p2");
    sc_trace(mVcdFile, tmp_80_fu_296_p2, "tmp_80_fu_296_p2");
    sc_trace(mVcdFile, tmp_35_fu_308_p2, "tmp_35_fu_308_p2");
    sc_trace(mVcdFile, tmp_36_fu_314_p2, "tmp_36_fu_314_p2");
    sc_trace(mVcdFile, tmp_81_fu_302_p2, "tmp_81_fu_302_p2");
    sc_trace(mVcdFile, tmp_37_fu_326_p2, "tmp_37_fu_326_p2");
    sc_trace(mVcdFile, tmp_38_fu_332_p2, "tmp_38_fu_332_p2");
    sc_trace(mVcdFile, tmp_39_fu_344_p2, "tmp_39_fu_344_p2");
    sc_trace(mVcdFile, tmp_40_fu_350_p2, "tmp_40_fu_350_p2");
    sc_trace(mVcdFile, tmp_41_fu_362_p2, "tmp_41_fu_362_p2");
    sc_trace(mVcdFile, tmp_42_fu_368_p2, "tmp_42_fu_368_p2");
    sc_trace(mVcdFile, tmp_43_fu_380_p2, "tmp_43_fu_380_p2");
    sc_trace(mVcdFile, tmp_44_fu_386_p2, "tmp_44_fu_386_p2");
    sc_trace(mVcdFile, tmp_82_fu_398_p2, "tmp_82_fu_398_p2");
    sc_trace(mVcdFile, tmp_45_fu_410_p2, "tmp_45_fu_410_p2");
    sc_trace(mVcdFile, tmp_83_fu_404_p2, "tmp_83_fu_404_p2");
    sc_trace(mVcdFile, tmp_46_fu_416_p2, "tmp_46_fu_416_p2");
    sc_trace(mVcdFile, tmp_84_fu_428_p2, "tmp_84_fu_428_p2");
    sc_trace(mVcdFile, tmp_47_fu_440_p2, "tmp_47_fu_440_p2");
    sc_trace(mVcdFile, tmp_85_fu_434_p2, "tmp_85_fu_434_p2");
    sc_trace(mVcdFile, tmp_48_fu_446_p2, "tmp_48_fu_446_p2");
    sc_trace(mVcdFile, tmp_86_fu_458_p2, "tmp_86_fu_458_p2");
    sc_trace(mVcdFile, tmp_49_fu_470_p2, "tmp_49_fu_470_p2");
    sc_trace(mVcdFile, tmp_87_fu_464_p2, "tmp_87_fu_464_p2");
    sc_trace(mVcdFile, tmp_50_fu_476_p2, "tmp_50_fu_476_p2");
    sc_trace(mVcdFile, tmp_88_fu_488_p2, "tmp_88_fu_488_p2");
    sc_trace(mVcdFile, tmp_51_fu_500_p2, "tmp_51_fu_500_p2");
    sc_trace(mVcdFile, tmp_89_fu_494_p2, "tmp_89_fu_494_p2");
    sc_trace(mVcdFile, tmp_52_fu_506_p2, "tmp_52_fu_506_p2");
    sc_trace(mVcdFile, dst_0_0_write_assi_fu_146_p2, "dst_0_0_write_assi_fu_146_p2");
    sc_trace(mVcdFile, dst_0_1_write_assi_fu_230_p2, "dst_0_1_write_assi_fu_230_p2");
    sc_trace(mVcdFile, dst_0_2_write_assi_fu_338_p2, "dst_0_2_write_assi_fu_338_p2");
    sc_trace(mVcdFile, dst_0_3_write_assi_fu_422_p2, "dst_0_3_write_assi_fu_422_p2");
    sc_trace(mVcdFile, dst_1_0_write_assi_fu_164_p2, "dst_1_0_write_assi_fu_164_p2");
    sc_trace(mVcdFile, dst_1_1_write_assi_fu_260_p2, "dst_1_1_write_assi_fu_260_p2");
    sc_trace(mVcdFile, dst_1_2_write_assi_fu_356_p2, "dst_1_2_write_assi_fu_356_p2");
    sc_trace(mVcdFile, dst_1_3_write_assi_fu_452_p2, "dst_1_3_write_assi_fu_452_p2");
    sc_trace(mVcdFile, dst_2_0_write_assi_fu_182_p2, "dst_2_0_write_assi_fu_182_p2");
    sc_trace(mVcdFile, dst_2_1_write_assi_fu_290_p2, "dst_2_1_write_assi_fu_290_p2");
    sc_trace(mVcdFile, dst_2_2_write_assi_fu_374_p2, "dst_2_2_write_assi_fu_374_p2");
    sc_trace(mVcdFile, dst_2_3_write_assi_fu_482_p2, "dst_2_3_write_assi_fu_482_p2");
    sc_trace(mVcdFile, dst_3_0_write_assi_fu_200_p2, "dst_3_0_write_assi_fu_200_p2");
    sc_trace(mVcdFile, dst_3_1_write_assi_fu_320_p2, "dst_3_1_write_assi_fu_320_p2");
    sc_trace(mVcdFile, dst_3_2_write_assi_fu_392_p2, "dst_3_2_write_assi_fu_392_p2");
    sc_trace(mVcdFile, dst_3_3_write_assi_fu_512_p2, "dst_3_3_write_assi_fu_512_p2");
#endif

    }
}

dct_step::~dct_step() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void dct_step::thread_ap_ready() {
    ap_ready = ap_const_logic_1;
}

void dct_step::thread_ap_return_0() {
    ap_return_0 = dst_0_0_write_assi_fu_146_p2.read();
}

void dct_step::thread_ap_return_1() {
    ap_return_1 = dst_0_1_write_assi_fu_230_p2.read();
}

void dct_step::thread_ap_return_10() {
    ap_return_10 = dst_2_2_write_assi_fu_374_p2.read();
}

void dct_step::thread_ap_return_11() {
    ap_return_11 = dst_2_3_write_assi_fu_482_p2.read();
}

void dct_step::thread_ap_return_12() {
    ap_return_12 = dst_3_0_write_assi_fu_200_p2.read();
}

void dct_step::thread_ap_return_13() {
    ap_return_13 = dst_3_1_write_assi_fu_320_p2.read();
}

void dct_step::thread_ap_return_14() {
    ap_return_14 = dst_3_2_write_assi_fu_392_p2.read();
}

void dct_step::thread_ap_return_15() {
    ap_return_15 = dst_3_3_write_assi_fu_512_p2.read();
}

void dct_step::thread_ap_return_2() {
    ap_return_2 = dst_0_2_write_assi_fu_338_p2.read();
}

void dct_step::thread_ap_return_3() {
    ap_return_3 = dst_0_3_write_assi_fu_422_p2.read();
}

void dct_step::thread_ap_return_4() {
    ap_return_4 = dst_1_0_write_assi_fu_164_p2.read();
}

void dct_step::thread_ap_return_5() {
    ap_return_5 = dst_1_1_write_assi_fu_260_p2.read();
}

void dct_step::thread_ap_return_6() {
    ap_return_6 = dst_1_2_write_assi_fu_356_p2.read();
}

void dct_step::thread_ap_return_7() {
    ap_return_7 = dst_1_3_write_assi_fu_452_p2.read();
}

void dct_step::thread_ap_return_8() {
    ap_return_8 = dst_2_0_write_assi_fu_182_p2.read();
}

void dct_step::thread_ap_return_9() {
    ap_return_9 = dst_2_1_write_assi_fu_290_p2.read();
}

void dct_step::thread_dst_0_0_write_assi_fu_146_p2() {
    dst_0_0_write_assi_fu_146_p2 = (!tmp2_fu_140_p2.read().is_01() || !tmp1_fu_134_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2_fu_140_p2.read()) + sc_biguint<16>(tmp1_fu_134_p2.read()));
}

void dct_step::thread_dst_0_1_write_assi_fu_230_p2() {
    dst_0_1_write_assi_fu_230_p2 = (!tmp_29_fu_224_p2.read().is_01() || !tmp_75_fu_212_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_29_fu_224_p2.read()) - sc_biguint<16>(tmp_75_fu_212_p2.read()));
}

void dct_step::thread_dst_0_2_write_assi_fu_338_p2() {
    dst_0_2_write_assi_fu_338_p2 = (!src_3_0_read.read().is_01() || !tmp_38_fu_332_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(src_3_0_read.read()) + sc_biguint<16>(tmp_38_fu_332_p2.read()));
}

void dct_step::thread_dst_0_3_write_assi_fu_422_p2() {
    dst_0_3_write_assi_fu_422_p2 = (!tmp_46_fu_416_p2.read().is_01() || !src_3_0_read.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_46_fu_416_p2.read()) - sc_biguint<16>(src_3_0_read.read()));
}

void dct_step::thread_dst_1_0_write_assi_fu_164_p2() {
    dst_1_0_write_assi_fu_164_p2 = (!tmp4_fu_158_p2.read().is_01() || !tmp3_fu_152_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp4_fu_158_p2.read()) + sc_biguint<16>(tmp3_fu_152_p2.read()));
}

void dct_step::thread_dst_1_1_write_assi_fu_260_p2() {
    dst_1_1_write_assi_fu_260_p2 = (!tmp_32_fu_254_p2.read().is_01() || !tmp_77_fu_242_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_32_fu_254_p2.read()) - sc_biguint<16>(tmp_77_fu_242_p2.read()));
}

void dct_step::thread_dst_1_2_write_assi_fu_356_p2() {
    dst_1_2_write_assi_fu_356_p2 = (!src_3_1_read.read().is_01() || !tmp_40_fu_350_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(src_3_1_read.read()) + sc_biguint<16>(tmp_40_fu_350_p2.read()));
}

void dct_step::thread_dst_1_3_write_assi_fu_452_p2() {
    dst_1_3_write_assi_fu_452_p2 = (!tmp_48_fu_446_p2.read().is_01() || !src_3_1_read.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_48_fu_446_p2.read()) - sc_biguint<16>(src_3_1_read.read()));
}

void dct_step::thread_dst_2_0_write_assi_fu_182_p2() {
    dst_2_0_write_assi_fu_182_p2 = (!tmp6_fu_176_p2.read().is_01() || !tmp5_fu_170_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp6_fu_176_p2.read()) + sc_biguint<16>(tmp5_fu_170_p2.read()));
}

void dct_step::thread_dst_2_1_write_assi_fu_290_p2() {
    dst_2_1_write_assi_fu_290_p2 = (!tmp_34_fu_284_p2.read().is_01() || !tmp_79_fu_272_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_34_fu_284_p2.read()) - sc_biguint<16>(tmp_79_fu_272_p2.read()));
}

void dct_step::thread_dst_2_2_write_assi_fu_374_p2() {
    dst_2_2_write_assi_fu_374_p2 = (!src_3_2_read.read().is_01() || !tmp_42_fu_368_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(src_3_2_read.read()) + sc_biguint<16>(tmp_42_fu_368_p2.read()));
}

void dct_step::thread_dst_2_3_write_assi_fu_482_p2() {
    dst_2_3_write_assi_fu_482_p2 = (!tmp_50_fu_476_p2.read().is_01() || !src_3_2_read.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_50_fu_476_p2.read()) - sc_biguint<16>(src_3_2_read.read()));
}

void dct_step::thread_dst_3_0_write_assi_fu_200_p2() {
    dst_3_0_write_assi_fu_200_p2 = (!tmp8_fu_194_p2.read().is_01() || !tmp7_fu_188_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp8_fu_194_p2.read()) + sc_biguint<16>(tmp7_fu_188_p2.read()));
}

void dct_step::thread_dst_3_1_write_assi_fu_320_p2() {
    dst_3_1_write_assi_fu_320_p2 = (!tmp_36_fu_314_p2.read().is_01() || !tmp_81_fu_302_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_36_fu_314_p2.read()) - sc_biguint<16>(tmp_81_fu_302_p2.read()));
}

void dct_step::thread_dst_3_2_write_assi_fu_392_p2() {
    dst_3_2_write_assi_fu_392_p2 = (!src_3_3_read.read().is_01() || !tmp_44_fu_386_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(src_3_3_read.read()) + sc_biguint<16>(tmp_44_fu_386_p2.read()));
}

void dct_step::thread_dst_3_3_write_assi_fu_512_p2() {
    dst_3_3_write_assi_fu_512_p2 = (!tmp_52_fu_506_p2.read().is_01() || !src_3_3_read.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_52_fu_506_p2.read()) - sc_biguint<16>(src_3_3_read.read()));
}

void dct_step::thread_tmp1_fu_134_p2() {
    tmp1_fu_134_p2 = (!src_1_0_read.read().is_01() || !src_0_0_read.read().is_01())? sc_lv<16>(): (sc_biguint<16>(src_1_0_read.read()) + sc_biguint<16>(src_0_0_read.read()));
}

void dct_step::thread_tmp2_fu_140_p2() {
    tmp2_fu_140_p2 = (!src_2_0_read.read().is_01() || !src_3_0_read.read().is_01())? sc_lv<16>(): (sc_biguint<16>(src_2_0_read.read()) + sc_biguint<16>(src_3_0_read.read()));
}

void dct_step::thread_tmp3_fu_152_p2() {
    tmp3_fu_152_p2 = (!src_1_1_read.read().is_01() || !src_0_1_read.read().is_01())? sc_lv<16>(): (sc_biguint<16>(src_1_1_read.read()) + sc_biguint<16>(src_0_1_read.read()));
}

void dct_step::thread_tmp4_fu_158_p2() {
    tmp4_fu_158_p2 = (!src_2_1_read.read().is_01() || !src_3_1_read.read().is_01())? sc_lv<16>(): (sc_biguint<16>(src_2_1_read.read()) + sc_biguint<16>(src_3_1_read.read()));
}

void dct_step::thread_tmp5_fu_170_p2() {
    tmp5_fu_170_p2 = (!src_1_2_read.read().is_01() || !src_0_2_read.read().is_01())? sc_lv<16>(): (sc_biguint<16>(src_1_2_read.read()) + sc_biguint<16>(src_0_2_read.read()));
}

void dct_step::thread_tmp6_fu_176_p2() {
    tmp6_fu_176_p2 = (!src_2_2_read.read().is_01() || !src_3_2_read.read().is_01())? sc_lv<16>(): (sc_biguint<16>(src_2_2_read.read()) + sc_biguint<16>(src_3_2_read.read()));
}

void dct_step::thread_tmp7_fu_188_p2() {
    tmp7_fu_188_p2 = (!src_1_3_read.read().is_01() || !src_0_3_read.read().is_01())? sc_lv<16>(): (sc_biguint<16>(src_1_3_read.read()) + sc_biguint<16>(src_0_3_read.read()));
}

void dct_step::thread_tmp8_fu_194_p2() {
    tmp8_fu_194_p2 = (!src_2_3_read.read().is_01() || !src_3_3_read.read().is_01())? sc_lv<16>(): (sc_biguint<16>(src_2_3_read.read()) + sc_biguint<16>(src_3_3_read.read()));
}

void dct_step::thread_tmp_28_fu_218_p2() {
    tmp_28_fu_218_p2 = (!src_1_0_read.read().is_01() || !tmp_fu_206_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(src_1_0_read.read()) + sc_biguint<16>(tmp_fu_206_p2.read()));
}

void dct_step::thread_tmp_29_fu_224_p2() {
    tmp_29_fu_224_p2 = (!tmp_28_fu_218_p2.read().is_01() || !src_2_0_read.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_28_fu_218_p2.read()) - sc_biguint<16>(src_2_0_read.read()));
}

void dct_step::thread_tmp_32_fu_254_p2() {
    tmp_32_fu_254_p2 = (!tmp_s_fu_248_p2.read().is_01() || !src_2_1_read.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_s_fu_248_p2.read()) - sc_biguint<16>(src_2_1_read.read()));
}

void dct_step::thread_tmp_33_fu_278_p2() {
    tmp_33_fu_278_p2 = (!src_1_2_read.read().is_01() || !tmp_78_fu_266_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(src_1_2_read.read()) + sc_biguint<16>(tmp_78_fu_266_p2.read()));
}

void dct_step::thread_tmp_34_fu_284_p2() {
    tmp_34_fu_284_p2 = (!tmp_33_fu_278_p2.read().is_01() || !src_2_2_read.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_33_fu_278_p2.read()) - sc_biguint<16>(src_2_2_read.read()));
}

void dct_step::thread_tmp_35_fu_308_p2() {
    tmp_35_fu_308_p2 = (!src_1_3_read.read().is_01() || !tmp_80_fu_296_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(src_1_3_read.read()) + sc_biguint<16>(tmp_80_fu_296_p2.read()));
}

void dct_step::thread_tmp_36_fu_314_p2() {
    tmp_36_fu_314_p2 = (!tmp_35_fu_308_p2.read().is_01() || !src_2_3_read.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_35_fu_308_p2.read()) - sc_biguint<16>(src_2_3_read.read()));
}

void dct_step::thread_tmp_37_fu_326_p2() {
    tmp_37_fu_326_p2 = (!src_0_0_read.read().is_01() || !src_1_0_read.read().is_01())? sc_lv<16>(): (sc_biguint<16>(src_0_0_read.read()) - sc_biguint<16>(src_1_0_read.read()));
}

void dct_step::thread_tmp_38_fu_332_p2() {
    tmp_38_fu_332_p2 = (!tmp_37_fu_326_p2.read().is_01() || !src_2_0_read.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_37_fu_326_p2.read()) - sc_biguint<16>(src_2_0_read.read()));
}

void dct_step::thread_tmp_39_fu_344_p2() {
    tmp_39_fu_344_p2 = (!src_0_1_read.read().is_01() || !src_1_1_read.read().is_01())? sc_lv<16>(): (sc_biguint<16>(src_0_1_read.read()) - sc_biguint<16>(src_1_1_read.read()));
}

void dct_step::thread_tmp_40_fu_350_p2() {
    tmp_40_fu_350_p2 = (!tmp_39_fu_344_p2.read().is_01() || !src_2_1_read.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_39_fu_344_p2.read()) - sc_biguint<16>(src_2_1_read.read()));
}

void dct_step::thread_tmp_41_fu_362_p2() {
    tmp_41_fu_362_p2 = (!src_0_2_read.read().is_01() || !src_1_2_read.read().is_01())? sc_lv<16>(): (sc_biguint<16>(src_0_2_read.read()) - sc_biguint<16>(src_1_2_read.read()));
}

void dct_step::thread_tmp_42_fu_368_p2() {
    tmp_42_fu_368_p2 = (!tmp_41_fu_362_p2.read().is_01() || !src_2_2_read.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_41_fu_362_p2.read()) - sc_biguint<16>(src_2_2_read.read()));
}

void dct_step::thread_tmp_43_fu_380_p2() {
    tmp_43_fu_380_p2 = (!src_0_3_read.read().is_01() || !src_1_3_read.read().is_01())? sc_lv<16>(): (sc_biguint<16>(src_0_3_read.read()) - sc_biguint<16>(src_1_3_read.read()));
}

void dct_step::thread_tmp_44_fu_386_p2() {
    tmp_44_fu_386_p2 = (!tmp_43_fu_380_p2.read().is_01() || !src_2_3_read.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_43_fu_380_p2.read()) - sc_biguint<16>(src_2_3_read.read()));
}

void dct_step::thread_tmp_45_fu_410_p2() {
    tmp_45_fu_410_p2 = (!src_0_0_read.read().is_01() || !tmp_82_fu_398_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(src_0_0_read.read()) - sc_biguint<16>(tmp_82_fu_398_p2.read()));
}

void dct_step::thread_tmp_46_fu_416_p2() {
    tmp_46_fu_416_p2 = (!tmp_45_fu_410_p2.read().is_01() || !tmp_83_fu_404_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_45_fu_410_p2.read()) + sc_biguint<16>(tmp_83_fu_404_p2.read()));
}

void dct_step::thread_tmp_47_fu_440_p2() {
    tmp_47_fu_440_p2 = (!src_0_1_read.read().is_01() || !tmp_84_fu_428_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(src_0_1_read.read()) - sc_biguint<16>(tmp_84_fu_428_p2.read()));
}

void dct_step::thread_tmp_48_fu_446_p2() {
    tmp_48_fu_446_p2 = (!tmp_47_fu_440_p2.read().is_01() || !tmp_85_fu_434_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_47_fu_440_p2.read()) + sc_biguint<16>(tmp_85_fu_434_p2.read()));
}

void dct_step::thread_tmp_49_fu_470_p2() {
    tmp_49_fu_470_p2 = (!src_0_2_read.read().is_01() || !tmp_86_fu_458_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(src_0_2_read.read()) - sc_biguint<16>(tmp_86_fu_458_p2.read()));
}

void dct_step::thread_tmp_50_fu_476_p2() {
    tmp_50_fu_476_p2 = (!tmp_49_fu_470_p2.read().is_01() || !tmp_87_fu_464_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_49_fu_470_p2.read()) + sc_biguint<16>(tmp_87_fu_464_p2.read()));
}

void dct_step::thread_tmp_51_fu_500_p2() {
    tmp_51_fu_500_p2 = (!src_0_3_read.read().is_01() || !tmp_88_fu_488_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(src_0_3_read.read()) - sc_biguint<16>(tmp_88_fu_488_p2.read()));
}

void dct_step::thread_tmp_52_fu_506_p2() {
    tmp_52_fu_506_p2 = (!tmp_51_fu_500_p2.read().is_01() || !tmp_89_fu_494_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_51_fu_500_p2.read()) + sc_biguint<16>(tmp_89_fu_494_p2.read()));
}

void dct_step::thread_tmp_75_fu_212_p2() {
    tmp_75_fu_212_p2 = (!ap_const_lv16_1.is_01())? sc_lv<16>(): src_3_0_read.read() << (unsigned short)ap_const_lv16_1.to_uint();
}

void dct_step::thread_tmp_76_fu_236_p2() {
    tmp_76_fu_236_p2 = (!ap_const_lv16_1.is_01())? sc_lv<16>(): src_0_1_read.read() << (unsigned short)ap_const_lv16_1.to_uint();
}

void dct_step::thread_tmp_77_fu_242_p2() {
    tmp_77_fu_242_p2 = (!ap_const_lv16_1.is_01())? sc_lv<16>(): src_3_1_read.read() << (unsigned short)ap_const_lv16_1.to_uint();
}

void dct_step::thread_tmp_78_fu_266_p2() {
    tmp_78_fu_266_p2 = (!ap_const_lv16_1.is_01())? sc_lv<16>(): src_0_2_read.read() << (unsigned short)ap_const_lv16_1.to_uint();
}

void dct_step::thread_tmp_79_fu_272_p2() {
    tmp_79_fu_272_p2 = (!ap_const_lv16_1.is_01())? sc_lv<16>(): src_3_2_read.read() << (unsigned short)ap_const_lv16_1.to_uint();
}

void dct_step::thread_tmp_80_fu_296_p2() {
    tmp_80_fu_296_p2 = (!ap_const_lv16_1.is_01())? sc_lv<16>(): src_0_3_read.read() << (unsigned short)ap_const_lv16_1.to_uint();
}

void dct_step::thread_tmp_81_fu_302_p2() {
    tmp_81_fu_302_p2 = (!ap_const_lv16_1.is_01())? sc_lv<16>(): src_3_3_read.read() << (unsigned short)ap_const_lv16_1.to_uint();
}

void dct_step::thread_tmp_82_fu_398_p2() {
    tmp_82_fu_398_p2 = (!ap_const_lv16_1.is_01())? sc_lv<16>(): src_1_0_read.read() << (unsigned short)ap_const_lv16_1.to_uint();
}

void dct_step::thread_tmp_83_fu_404_p2() {
    tmp_83_fu_404_p2 = (!ap_const_lv16_1.is_01())? sc_lv<16>(): src_2_0_read.read() << (unsigned short)ap_const_lv16_1.to_uint();
}

void dct_step::thread_tmp_84_fu_428_p2() {
    tmp_84_fu_428_p2 = (!ap_const_lv16_1.is_01())? sc_lv<16>(): src_1_1_read.read() << (unsigned short)ap_const_lv16_1.to_uint();
}

void dct_step::thread_tmp_85_fu_434_p2() {
    tmp_85_fu_434_p2 = (!ap_const_lv16_1.is_01())? sc_lv<16>(): src_2_1_read.read() << (unsigned short)ap_const_lv16_1.to_uint();
}

void dct_step::thread_tmp_86_fu_458_p2() {
    tmp_86_fu_458_p2 = (!ap_const_lv16_1.is_01())? sc_lv<16>(): src_1_2_read.read() << (unsigned short)ap_const_lv16_1.to_uint();
}

void dct_step::thread_tmp_87_fu_464_p2() {
    tmp_87_fu_464_p2 = (!ap_const_lv16_1.is_01())? sc_lv<16>(): src_2_2_read.read() << (unsigned short)ap_const_lv16_1.to_uint();
}

void dct_step::thread_tmp_88_fu_488_p2() {
    tmp_88_fu_488_p2 = (!ap_const_lv16_1.is_01())? sc_lv<16>(): src_1_3_read.read() << (unsigned short)ap_const_lv16_1.to_uint();
}

void dct_step::thread_tmp_89_fu_494_p2() {
    tmp_89_fu_494_p2 = (!ap_const_lv16_1.is_01())? sc_lv<16>(): src_2_3_read.read() << (unsigned short)ap_const_lv16_1.to_uint();
}

void dct_step::thread_tmp_fu_206_p2() {
    tmp_fu_206_p2 = (!ap_const_lv16_1.is_01())? sc_lv<16>(): src_0_0_read.read() << (unsigned short)ap_const_lv16_1.to_uint();
}

void dct_step::thread_tmp_s_fu_248_p2() {
    tmp_s_fu_248_p2 = (!src_1_1_read.read().is_01() || !tmp_76_fu_236_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(src_1_1_read.read()) + sc_biguint<16>(tmp_76_fu_236_p2.read()));
}

}

