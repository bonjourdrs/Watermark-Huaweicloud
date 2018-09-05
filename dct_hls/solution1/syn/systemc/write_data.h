// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _write_data_HH_
#define _write_data_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct write_data : public sc_module {
    // Port declarations 30
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<16> > p_read;
    sc_in< sc_lv<16> > p_read1;
    sc_in< sc_lv<16> > p_read2;
    sc_in< sc_lv<16> > p_read3;
    sc_in< sc_lv<16> > p_read4;
    sc_in< sc_lv<16> > p_read5;
    sc_in< sc_lv<16> > p_read6;
    sc_in< sc_lv<16> > p_read7;
    sc_in< sc_lv<16> > p_read8;
    sc_in< sc_lv<16> > p_read9;
    sc_in< sc_lv<16> > p_read10;
    sc_in< sc_lv<16> > p_read11;
    sc_in< sc_lv<16> > p_read12;
    sc_in< sc_lv<16> > p_read13;
    sc_in< sc_lv<16> > p_read14;
    sc_in< sc_lv<16> > p_read15;
    sc_out< sc_lv<4> > output_r_address0;
    sc_out< sc_logic > output_r_ce0;
    sc_out< sc_logic > output_r_we0;
    sc_out< sc_lv<16> > output_r_d0;
    sc_out< sc_lv<4> > output_r_address1;
    sc_out< sc_logic > output_r_ce1;
    sc_out< sc_logic > output_r_we1;
    sc_out< sc_lv<16> > output_r_d1;


    // Module declarations
    write_data(sc_module_name name);
    SC_HAS_PROCESS(write_data);

    ~write_data();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<8> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<16> > ap_port_reg_p_read2;
    sc_signal< sc_lv<16> > ap_port_reg_p_read3;
    sc_signal< sc_lv<16> > ap_port_reg_p_read4;
    sc_signal< sc_lv<16> > ap_port_reg_p_read5;
    sc_signal< sc_lv<16> > ap_port_reg_p_read6;
    sc_signal< sc_lv<16> > ap_port_reg_p_read7;
    sc_signal< sc_lv<16> > ap_port_reg_p_read8;
    sc_signal< sc_lv<16> > ap_port_reg_p_read9;
    sc_signal< sc_lv<16> > ap_port_reg_p_read10;
    sc_signal< sc_lv<16> > ap_port_reg_p_read11;
    sc_signal< sc_lv<16> > ap_port_reg_p_read12;
    sc_signal< sc_lv<16> > ap_port_reg_p_read13;
    sc_signal< sc_lv<16> > ap_port_reg_p_read14;
    sc_signal< sc_lv<16> > ap_port_reg_p_read15;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<8> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<8> ap_ST_fsm_state1;
    static const sc_lv<8> ap_ST_fsm_state2;
    static const sc_lv<8> ap_ST_fsm_state3;
    static const sc_lv<8> ap_ST_fsm_state4;
    static const sc_lv<8> ap_ST_fsm_state5;
    static const sc_lv<8> ap_ST_fsm_state6;
    static const sc_lv<8> ap_ST_fsm_state7;
    static const sc_lv<8> ap_ST_fsm_state8;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<64> ap_const_lv64_1;
    static const sc_lv<64> ap_const_lv64_2;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<64> ap_const_lv64_3;
    static const sc_lv<64> ap_const_lv64_4;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<64> ap_const_lv64_5;
    static const sc_lv<64> ap_const_lv64_6;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<64> ap_const_lv64_7;
    static const sc_lv<64> ap_const_lv64_8;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<64> ap_const_lv64_9;
    static const sc_lv<64> ap_const_lv64_A;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<64> ap_const_lv64_B;
    static const sc_lv<64> ap_const_lv64_C;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<64> ap_const_lv64_D;
    static const sc_lv<64> ap_const_lv64_E;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<64> ap_const_lv64_F;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_output_r_address0();
    void thread_output_r_address1();
    void thread_output_r_ce0();
    void thread_output_r_ce1();
    void thread_output_r_d0();
    void thread_output_r_d1();
    void thread_output_r_we0();
    void thread_output_r_we1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
