// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _img_proc_HH_
#define _img_proc_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "add_watermark.h"

namespace ap_rtl {

struct img_proc : public sc_module {
    // Port declarations 23
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<20> > img_address0;
    sc_out< sc_logic > img_ce0;
    sc_in< sc_lv<8> > img_q0;
    sc_out< sc_lv<20> > img_address1;
    sc_out< sc_logic > img_ce1;
    sc_in< sc_lv<8> > img_q1;
    sc_out< sc_lv<16> > mark_address0;
    sc_out< sc_logic > mark_ce0;
    sc_in< sc_lv<8> > mark_q0;
    sc_out< sc_lv<20> > out_r_address0;
    sc_out< sc_logic > out_r_ce0;
    sc_out< sc_logic > out_r_we0;
    sc_out< sc_lv<8> > out_r_d0;
    sc_out< sc_lv<20> > out_r_address1;
    sc_out< sc_logic > out_r_ce1;
    sc_out< sc_logic > out_r_we1;
    sc_out< sc_lv<8> > out_r_d1;


    // Module declarations
    img_proc(sc_module_name name);
    SC_HAS_PROCESS(img_proc);

    ~img_proc();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    add_watermark* grp_add_watermark_fu_386;
    sc_signal< sc_lv<10> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<16> > mark_idx_reg_364;
    sc_signal< sc_lv<16> > tmp_49_reg_375;
    sc_signal< sc_lv<1> > tmp_fu_409_p2;
    sc_signal< sc_lv<1> > tmp_reg_772;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state10_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state18_pp0_stage0_iter2;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter1_tmp_reg_772;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter2_tmp_reg_772;
    sc_signal< sc_lv<16> > mark_idx_1_fu_415_p2;
    sc_signal< sc_lv<16> > mark_idx_1_reg_776;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<16> > next_urem_fu_421_p2;
    sc_signal< sc_lv<16> > next_urem_reg_781;
    sc_signal< sc_lv<22> > base_idx_fu_469_p2;
    sc_signal< sc_lv<22> > base_idx_reg_787;
    sc_signal< sc_lv<64> > tmp_7_fu_479_p1;
    sc_signal< sc_lv<64> > tmp_7_reg_805;
    sc_signal< sc_lv<64> > ap_reg_pp0_iter1_tmp_7_reg_805;
    sc_signal< sc_lv<64> > tmp_9_fu_490_p1;
    sc_signal< sc_lv<64> > tmp_9_reg_815;
    sc_signal< sc_lv<64> > ap_reg_pp0_iter1_tmp_9_reg_815;
    sc_signal< sc_lv<8> > indata_0_reg_830;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage1;
    sc_signal< bool > ap_block_state3_pp0_stage1_iter0;
    sc_signal< bool > ap_block_state11_pp0_stage1_iter1;
    sc_signal< bool > ap_block_state19_pp0_stage1_iter2;
    sc_signal< bool > ap_block_pp0_stage1_11001;
    sc_signal< sc_lv<8> > indata_1_reg_835;
    sc_signal< sc_lv<64> > tmp_11_fu_509_p1;
    sc_signal< sc_lv<64> > tmp_11_reg_840;
    sc_signal< sc_lv<64> > ap_reg_pp0_iter1_tmp_11_reg_840;
    sc_signal< sc_lv<64> > tmp_13_fu_523_p1;
    sc_signal< sc_lv<64> > tmp_13_reg_850;
    sc_signal< sc_lv<64> > ap_reg_pp0_iter1_tmp_13_reg_850;
    sc_signal< sc_lv<8> > mark_load_reg_860;
    sc_signal< sc_lv<8> > indata_2_reg_865;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage2;
    sc_signal< bool > ap_block_state4_pp0_stage2_iter0;
    sc_signal< bool > ap_block_state12_pp0_stage2_iter1;
    sc_signal< bool > ap_block_pp0_stage2_11001;
    sc_signal< sc_lv<8> > indata_3_reg_870;
    sc_signal< sc_lv<64> > tmp_15_fu_537_p1;
    sc_signal< sc_lv<64> > tmp_15_reg_875;
    sc_signal< sc_lv<64> > ap_reg_pp0_iter1_tmp_15_reg_875;
    sc_signal< sc_lv<64> > tmp_17_fu_551_p1;
    sc_signal< sc_lv<64> > tmp_17_reg_885;
    sc_signal< sc_lv<64> > ap_reg_pp0_iter1_tmp_17_reg_885;
    sc_signal< sc_lv<8> > indata_4_reg_895;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage3;
    sc_signal< bool > ap_block_state5_pp0_stage3_iter0;
    sc_signal< bool > ap_block_state13_pp0_stage3_iter1;
    sc_signal< bool > ap_block_pp0_stage3_11001;
    sc_signal< sc_lv<8> > indata_5_reg_900;
    sc_signal< sc_lv<64> > tmp_19_fu_565_p1;
    sc_signal< sc_lv<64> > tmp_19_reg_905;
    sc_signal< sc_lv<64> > ap_reg_pp0_iter1_tmp_19_reg_905;
    sc_signal< sc_lv<64> > tmp_21_fu_579_p1;
    sc_signal< sc_lv<64> > tmp_21_reg_915;
    sc_signal< sc_lv<64> > ap_reg_pp0_iter1_tmp_21_reg_915;
    sc_signal< sc_lv<8> > indata_6_reg_925;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage4;
    sc_signal< bool > ap_block_state6_pp0_stage4_iter0;
    sc_signal< bool > ap_block_state14_pp0_stage4_iter1;
    sc_signal< bool > ap_block_pp0_stage4_11001;
    sc_signal< sc_lv<8> > indata_7_reg_930;
    sc_signal< sc_lv<64> > tmp_23_fu_593_p1;
    sc_signal< sc_lv<64> > tmp_23_reg_935;
    sc_signal< sc_lv<64> > ap_reg_pp0_iter1_tmp_23_reg_935;
    sc_signal< sc_lv<64> > tmp_25_fu_607_p1;
    sc_signal< sc_lv<64> > tmp_25_reg_945;
    sc_signal< sc_lv<64> > ap_reg_pp0_iter1_tmp_25_reg_945;
    sc_signal< sc_lv<8> > indata_8_reg_955;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage5;
    sc_signal< bool > ap_block_state7_pp0_stage5_iter0;
    sc_signal< bool > ap_block_state15_pp0_stage5_iter1;
    sc_signal< bool > ap_block_pp0_stage5_11001;
    sc_signal< sc_lv<8> > indata_9_reg_960;
    sc_signal< sc_lv<64> > tmp_27_fu_621_p1;
    sc_signal< sc_lv<64> > tmp_27_reg_965;
    sc_signal< sc_lv<64> > ap_reg_pp0_iter1_tmp_27_reg_965;
    sc_signal< sc_lv<64> > tmp_29_fu_635_p1;
    sc_signal< sc_lv<64> > tmp_29_reg_975;
    sc_signal< sc_lv<64> > ap_reg_pp0_iter1_tmp_29_reg_975;
    sc_signal< sc_lv<8> > indata_10_reg_985;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage6;
    sc_signal< bool > ap_block_state8_pp0_stage6_iter0;
    sc_signal< bool > ap_block_state16_pp0_stage6_iter1;
    sc_signal< bool > ap_block_pp0_stage6_11001;
    sc_signal< sc_lv<8> > indata_11_reg_990;
    sc_signal< sc_lv<64> > tmp_31_fu_649_p1;
    sc_signal< sc_lv<64> > tmp_31_reg_995;
    sc_signal< sc_lv<64> > ap_reg_pp0_iter1_tmp_31_reg_995;
    sc_signal< sc_lv<64> > tmp_33_fu_663_p1;
    sc_signal< sc_lv<64> > tmp_33_reg_1005;
    sc_signal< sc_lv<64> > ap_reg_pp0_iter1_tmp_33_reg_1005;
    sc_signal< sc_lv<16> > idx_urem_fu_673_p3;
    sc_signal< sc_lv<16> > idx_urem_reg_1015;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage7;
    sc_signal< bool > ap_block_state9_pp0_stage7_iter0;
    sc_signal< bool > ap_block_state17_pp0_stage7_iter1;
    sc_signal< bool > ap_block_pp0_stage7_11001;
    sc_signal< sc_lv<8> > indata_12_reg_1020;
    sc_signal< sc_lv<8> > indata_13_reg_1025;
    sc_signal< sc_lv<64> > tmp_35_fu_689_p1;
    sc_signal< sc_lv<64> > tmp_35_reg_1030;
    sc_signal< sc_lv<64> > ap_reg_pp0_iter1_tmp_35_reg_1030;
    sc_signal< sc_lv<64> > tmp_37_fu_703_p1;
    sc_signal< sc_lv<64> > tmp_37_reg_1040;
    sc_signal< sc_lv<64> > ap_reg_pp0_iter1_tmp_37_reg_1040;
    sc_signal< sc_lv<8> > outdata_0_reg_1050;
    sc_signal< sc_lv<8> > outdata_1_reg_1055;
    sc_signal< sc_lv<8> > outdata_2_reg_1060;
    sc_signal< sc_lv<8> > outdata_3_reg_1065;
    sc_signal< sc_lv<8> > outdata_4_reg_1070;
    sc_signal< sc_lv<8> > outdata_5_reg_1075;
    sc_signal< sc_lv<8> > outdata_6_reg_1080;
    sc_signal< sc_lv<8> > outdata_7_reg_1085;
    sc_signal< sc_lv<8> > outdata_8_reg_1090;
    sc_signal< sc_lv<8> > outdata_9_reg_1095;
    sc_signal< sc_lv<8> > outdata_10_reg_1100;
    sc_signal< sc_lv<8> > outdata_11_reg_1105;
    sc_signal< sc_lv<8> > outdata_12_reg_1110;
    sc_signal< sc_lv<8> > outdata_13_reg_1115;
    sc_signal< sc_lv<8> > outdata_14_reg_1120;
    sc_signal< sc_lv<8> > outdata_15_reg_1125;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_pp0_stage7_subdone;
    sc_signal< bool > ap_block_pp0_stage1_subdone;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_lv<8> > grp_add_watermark_fu_386_ap_return_0;
    sc_signal< sc_lv<8> > grp_add_watermark_fu_386_ap_return_1;
    sc_signal< sc_lv<8> > grp_add_watermark_fu_386_ap_return_2;
    sc_signal< sc_lv<8> > grp_add_watermark_fu_386_ap_return_3;
    sc_signal< sc_lv<8> > grp_add_watermark_fu_386_ap_return_4;
    sc_signal< sc_lv<8> > grp_add_watermark_fu_386_ap_return_5;
    sc_signal< sc_lv<8> > grp_add_watermark_fu_386_ap_return_6;
    sc_signal< sc_lv<8> > grp_add_watermark_fu_386_ap_return_7;
    sc_signal< sc_lv<8> > grp_add_watermark_fu_386_ap_return_8;
    sc_signal< sc_lv<8> > grp_add_watermark_fu_386_ap_return_9;
    sc_signal< sc_lv<8> > grp_add_watermark_fu_386_ap_return_10;
    sc_signal< sc_lv<8> > grp_add_watermark_fu_386_ap_return_11;
    sc_signal< sc_lv<8> > grp_add_watermark_fu_386_ap_return_12;
    sc_signal< sc_lv<8> > grp_add_watermark_fu_386_ap_return_13;
    sc_signal< sc_lv<8> > grp_add_watermark_fu_386_ap_return_14;
    sc_signal< sc_lv<8> > grp_add_watermark_fu_386_ap_return_15;
    sc_signal< sc_lv<16> > ap_phi_mux_mark_idx_phi_fu_368_p4;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<16> > ap_phi_mux_tmp_49_phi_fu_379_p4;
    sc_signal< sc_lv<64> > tmp_38_fu_495_p1;
    sc_signal< bool > ap_block_pp0_stage1;
    sc_signal< bool > ap_block_pp0_stage2;
    sc_signal< bool > ap_block_pp0_stage3;
    sc_signal< bool > ap_block_pp0_stage4;
    sc_signal< bool > ap_block_pp0_stage5;
    sc_signal< bool > ap_block_pp0_stage6;
    sc_signal< bool > ap_block_pp0_stage7;
    sc_signal< sc_lv<17> > mark_idx_cast_fu_427_p1;
    sc_signal< sc_lv<17> > tmp_2_cast_fu_431_p1;
    sc_signal< sc_lv<17> > tmp_s_fu_435_p2;
    sc_signal< sc_lv<21> > tmp_39_fu_441_p3;
    sc_signal< sc_lv<8> > tmp_50_fu_453_p1;
    sc_signal< sc_lv<10> > tmp_6_fu_457_p3;
    sc_signal< sc_lv<22> > tmp_6_cast_cast_fu_465_p1;
    sc_signal< sc_lv<22> > tmp_5_cast_fu_449_p1;
    sc_signal< sc_lv<32> > base_idx_cast_fu_475_p1;
    sc_signal< sc_lv<32> > tmp_8_fu_484_p2;
    sc_signal< sc_lv<22> > tmp_10_fu_500_p2;
    sc_signal< sc_lv<32> > tmp_10_cast_fu_505_p1;
    sc_signal< sc_lv<22> > tmp_12_fu_514_p2;
    sc_signal< sc_lv<32> > tmp_12_cast_fu_519_p1;
    sc_signal< sc_lv<22> > tmp_14_fu_528_p2;
    sc_signal< sc_lv<32> > tmp_14_cast_fu_533_p1;
    sc_signal< sc_lv<22> > tmp_16_fu_542_p2;
    sc_signal< sc_lv<32> > tmp_16_cast_fu_547_p1;
    sc_signal< sc_lv<22> > tmp_18_fu_556_p2;
    sc_signal< sc_lv<32> > tmp_18_cast_fu_561_p1;
    sc_signal< sc_lv<22> > tmp_20_fu_570_p2;
    sc_signal< sc_lv<32> > tmp_20_cast_fu_575_p1;
    sc_signal< sc_lv<22> > tmp_22_fu_584_p2;
    sc_signal< sc_lv<32> > tmp_22_cast_fu_589_p1;
    sc_signal< sc_lv<22> > tmp_24_fu_598_p2;
    sc_signal< sc_lv<32> > tmp_24_cast_fu_603_p1;
    sc_signal< sc_lv<22> > tmp_26_fu_612_p2;
    sc_signal< sc_lv<32> > tmp_26_cast_fu_617_p1;
    sc_signal< sc_lv<22> > tmp_28_fu_626_p2;
    sc_signal< sc_lv<32> > tmp_28_cast_fu_631_p1;
    sc_signal< sc_lv<22> > tmp_30_fu_640_p2;
    sc_signal< sc_lv<32> > tmp_30_cast_fu_645_p1;
    sc_signal< sc_lv<22> > tmp_32_fu_654_p2;
    sc_signal< sc_lv<32> > tmp_32_cast_fu_659_p1;
    sc_signal< sc_lv<1> > tmp_48_fu_668_p2;
    sc_signal< sc_lv<22> > tmp_34_fu_680_p2;
    sc_signal< sc_lv<32> > tmp_34_cast_fu_685_p1;
    sc_signal< sc_lv<22> > tmp_36_fu_694_p2;
    sc_signal< sc_lv<32> > tmp_36_cast_fu_699_p1;
    sc_signal< sc_logic > ap_CS_fsm_state20;
    sc_signal< sc_lv<10> > ap_NS_fsm;
    sc_signal< bool > ap_block_pp0_stage2_subdone;
    sc_signal< bool > ap_block_pp0_stage3_subdone;
    sc_signal< bool > ap_block_pp0_stage4_subdone;
    sc_signal< bool > ap_block_pp0_stage5_subdone;
    sc_signal< bool > ap_block_pp0_stage6_subdone;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<10> ap_ST_fsm_state1;
    static const sc_lv<10> ap_ST_fsm_pp0_stage0;
    static const sc_lv<10> ap_ST_fsm_pp0_stage1;
    static const sc_lv<10> ap_ST_fsm_pp0_stage2;
    static const sc_lv<10> ap_ST_fsm_pp0_stage3;
    static const sc_lv<10> ap_ST_fsm_pp0_stage4;
    static const sc_lv<10> ap_ST_fsm_pp0_stage5;
    static const sc_lv<10> ap_ST_fsm_pp0_stage6;
    static const sc_lv<10> ap_ST_fsm_pp0_stage7;
    static const sc_lv<10> ap_ST_fsm_state20;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<16> ap_const_lv16_0;
    static const sc_lv<16> ap_const_lv16_9C40;
    static const sc_lv<16> ap_const_lv16_1;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<22> ap_const_lv22_2;
    static const sc_lv<22> ap_const_lv22_3;
    static const sc_lv<22> ap_const_lv22_320;
    static const sc_lv<22> ap_const_lv22_321;
    static const sc_lv<22> ap_const_lv22_322;
    static const sc_lv<22> ap_const_lv22_323;
    static const sc_lv<22> ap_const_lv22_640;
    static const sc_lv<22> ap_const_lv22_641;
    static const sc_lv<22> ap_const_lv22_642;
    static const sc_lv<22> ap_const_lv22_643;
    static const sc_lv<22> ap_const_lv22_960;
    static const sc_lv<22> ap_const_lv22_961;
    static const sc_lv<16> ap_const_lv16_C8;
    static const sc_lv<22> ap_const_lv22_962;
    static const sc_lv<22> ap_const_lv22_963;
    static const sc_lv<32> ap_const_lv32_9;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_pp0_stage1();
    void thread_ap_CS_fsm_pp0_stage2();
    void thread_ap_CS_fsm_pp0_stage3();
    void thread_ap_CS_fsm_pp0_stage4();
    void thread_ap_CS_fsm_pp0_stage5();
    void thread_ap_CS_fsm_pp0_stage6();
    void thread_ap_CS_fsm_pp0_stage7();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state20();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_pp0_stage1();
    void thread_ap_block_pp0_stage1_11001();
    void thread_ap_block_pp0_stage1_subdone();
    void thread_ap_block_pp0_stage2();
    void thread_ap_block_pp0_stage2_11001();
    void thread_ap_block_pp0_stage2_subdone();
    void thread_ap_block_pp0_stage3();
    void thread_ap_block_pp0_stage3_11001();
    void thread_ap_block_pp0_stage3_subdone();
    void thread_ap_block_pp0_stage4();
    void thread_ap_block_pp0_stage4_11001();
    void thread_ap_block_pp0_stage4_subdone();
    void thread_ap_block_pp0_stage5();
    void thread_ap_block_pp0_stage5_11001();
    void thread_ap_block_pp0_stage5_subdone();
    void thread_ap_block_pp0_stage6();
    void thread_ap_block_pp0_stage6_11001();
    void thread_ap_block_pp0_stage6_subdone();
    void thread_ap_block_pp0_stage7();
    void thread_ap_block_pp0_stage7_11001();
    void thread_ap_block_pp0_stage7_subdone();
    void thread_ap_block_state10_pp0_stage0_iter1();
    void thread_ap_block_state11_pp0_stage1_iter1();
    void thread_ap_block_state12_pp0_stage2_iter1();
    void thread_ap_block_state13_pp0_stage3_iter1();
    void thread_ap_block_state14_pp0_stage4_iter1();
    void thread_ap_block_state15_pp0_stage5_iter1();
    void thread_ap_block_state16_pp0_stage6_iter1();
    void thread_ap_block_state17_pp0_stage7_iter1();
    void thread_ap_block_state18_pp0_stage0_iter2();
    void thread_ap_block_state19_pp0_stage1_iter2();
    void thread_ap_block_state2_pp0_stage0_iter0();
    void thread_ap_block_state3_pp0_stage1_iter0();
    void thread_ap_block_state4_pp0_stage2_iter0();
    void thread_ap_block_state5_pp0_stage3_iter0();
    void thread_ap_block_state6_pp0_stage4_iter0();
    void thread_ap_block_state7_pp0_stage5_iter0();
    void thread_ap_block_state8_pp0_stage6_iter0();
    void thread_ap_block_state9_pp0_stage7_iter0();
    void thread_ap_condition_pp0_exit_iter0_state2();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_phi_mux_mark_idx_phi_fu_368_p4();
    void thread_ap_phi_mux_tmp_49_phi_fu_379_p4();
    void thread_ap_ready();
    void thread_base_idx_cast_fu_475_p1();
    void thread_base_idx_fu_469_p2();
    void thread_idx_urem_fu_673_p3();
    void thread_img_address0();
    void thread_img_address1();
    void thread_img_ce0();
    void thread_img_ce1();
    void thread_mark_address0();
    void thread_mark_ce0();
    void thread_mark_idx_1_fu_415_p2();
    void thread_mark_idx_cast_fu_427_p1();
    void thread_next_urem_fu_421_p2();
    void thread_out_r_address0();
    void thread_out_r_address1();
    void thread_out_r_ce0();
    void thread_out_r_ce1();
    void thread_out_r_d0();
    void thread_out_r_d1();
    void thread_out_r_we0();
    void thread_out_r_we1();
    void thread_tmp_10_cast_fu_505_p1();
    void thread_tmp_10_fu_500_p2();
    void thread_tmp_11_fu_509_p1();
    void thread_tmp_12_cast_fu_519_p1();
    void thread_tmp_12_fu_514_p2();
    void thread_tmp_13_fu_523_p1();
    void thread_tmp_14_cast_fu_533_p1();
    void thread_tmp_14_fu_528_p2();
    void thread_tmp_15_fu_537_p1();
    void thread_tmp_16_cast_fu_547_p1();
    void thread_tmp_16_fu_542_p2();
    void thread_tmp_17_fu_551_p1();
    void thread_tmp_18_cast_fu_561_p1();
    void thread_tmp_18_fu_556_p2();
    void thread_tmp_19_fu_565_p1();
    void thread_tmp_20_cast_fu_575_p1();
    void thread_tmp_20_fu_570_p2();
    void thread_tmp_21_fu_579_p1();
    void thread_tmp_22_cast_fu_589_p1();
    void thread_tmp_22_fu_584_p2();
    void thread_tmp_23_fu_593_p1();
    void thread_tmp_24_cast_fu_603_p1();
    void thread_tmp_24_fu_598_p2();
    void thread_tmp_25_fu_607_p1();
    void thread_tmp_26_cast_fu_617_p1();
    void thread_tmp_26_fu_612_p2();
    void thread_tmp_27_fu_621_p1();
    void thread_tmp_28_cast_fu_631_p1();
    void thread_tmp_28_fu_626_p2();
    void thread_tmp_29_fu_635_p1();
    void thread_tmp_2_cast_fu_431_p1();
    void thread_tmp_30_cast_fu_645_p1();
    void thread_tmp_30_fu_640_p2();
    void thread_tmp_31_fu_649_p1();
    void thread_tmp_32_cast_fu_659_p1();
    void thread_tmp_32_fu_654_p2();
    void thread_tmp_33_fu_663_p1();
    void thread_tmp_34_cast_fu_685_p1();
    void thread_tmp_34_fu_680_p2();
    void thread_tmp_35_fu_689_p1();
    void thread_tmp_36_cast_fu_699_p1();
    void thread_tmp_36_fu_694_p2();
    void thread_tmp_37_fu_703_p1();
    void thread_tmp_38_fu_495_p1();
    void thread_tmp_39_fu_441_p3();
    void thread_tmp_48_fu_668_p2();
    void thread_tmp_50_fu_453_p1();
    void thread_tmp_5_cast_fu_449_p1();
    void thread_tmp_6_cast_cast_fu_465_p1();
    void thread_tmp_6_fu_457_p3();
    void thread_tmp_7_fu_479_p1();
    void thread_tmp_8_fu_484_p2();
    void thread_tmp_9_fu_490_p1();
    void thread_tmp_fu_409_p2();
    void thread_tmp_s_fu_435_p2();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif