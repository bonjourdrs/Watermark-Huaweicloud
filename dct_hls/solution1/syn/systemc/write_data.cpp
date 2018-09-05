// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "write_data.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic write_data::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic write_data::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<8> write_data::ap_ST_fsm_state1 = "1";
const sc_lv<8> write_data::ap_ST_fsm_state2 = "10";
const sc_lv<8> write_data::ap_ST_fsm_state3 = "100";
const sc_lv<8> write_data::ap_ST_fsm_state4 = "1000";
const sc_lv<8> write_data::ap_ST_fsm_state5 = "10000";
const sc_lv<8> write_data::ap_ST_fsm_state6 = "100000";
const sc_lv<8> write_data::ap_ST_fsm_state7 = "1000000";
const sc_lv<8> write_data::ap_ST_fsm_state8 = "10000000";
const sc_lv<32> write_data::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<64> write_data::ap_const_lv64_0 = "0000000000000000000000000000000000000000000000000000000000000000";
const sc_lv<64> write_data::ap_const_lv64_1 = "1";
const sc_lv<64> write_data::ap_const_lv64_2 = "10";
const sc_lv<32> write_data::ap_const_lv32_1 = "1";
const sc_lv<64> write_data::ap_const_lv64_3 = "11";
const sc_lv<64> write_data::ap_const_lv64_4 = "100";
const sc_lv<32> write_data::ap_const_lv32_2 = "10";
const sc_lv<64> write_data::ap_const_lv64_5 = "101";
const sc_lv<64> write_data::ap_const_lv64_6 = "110";
const sc_lv<32> write_data::ap_const_lv32_3 = "11";
const sc_lv<64> write_data::ap_const_lv64_7 = "111";
const sc_lv<64> write_data::ap_const_lv64_8 = "1000";
const sc_lv<32> write_data::ap_const_lv32_4 = "100";
const sc_lv<64> write_data::ap_const_lv64_9 = "1001";
const sc_lv<64> write_data::ap_const_lv64_A = "1010";
const sc_lv<32> write_data::ap_const_lv32_5 = "101";
const sc_lv<64> write_data::ap_const_lv64_B = "1011";
const sc_lv<64> write_data::ap_const_lv64_C = "1100";
const sc_lv<32> write_data::ap_const_lv32_6 = "110";
const sc_lv<64> write_data::ap_const_lv64_D = "1101";
const sc_lv<64> write_data::ap_const_lv64_E = "1110";
const sc_lv<32> write_data::ap_const_lv32_7 = "111";
const sc_lv<64> write_data::ap_const_lv64_F = "1111";
const bool write_data::ap_const_boolean_1 = true;

write_data::write_data(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state5);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state6);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state7);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state8);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state8 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state8 );

    SC_METHOD(thread_output_r_address0);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( ap_CS_fsm_state8 );

    SC_METHOD(thread_output_r_address1);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( ap_CS_fsm_state8 );

    SC_METHOD(thread_output_r_ce0);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( ap_CS_fsm_state8 );

    SC_METHOD(thread_output_r_ce1);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( ap_CS_fsm_state8 );

    SC_METHOD(thread_output_r_d0);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( p_read );
    sensitive << ( ap_port_reg_p_read2 );
    sensitive << ( ap_port_reg_p_read4 );
    sensitive << ( ap_port_reg_p_read6 );
    sensitive << ( ap_port_reg_p_read8 );
    sensitive << ( ap_port_reg_p_read10 );
    sensitive << ( ap_port_reg_p_read12 );
    sensitive << ( ap_port_reg_p_read14 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( ap_CS_fsm_state8 );

    SC_METHOD(thread_output_r_d1);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( p_read1 );
    sensitive << ( ap_port_reg_p_read3 );
    sensitive << ( ap_port_reg_p_read5 );
    sensitive << ( ap_port_reg_p_read7 );
    sensitive << ( ap_port_reg_p_read9 );
    sensitive << ( ap_port_reg_p_read11 );
    sensitive << ( ap_port_reg_p_read13 );
    sensitive << ( ap_port_reg_p_read15 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( ap_CS_fsm_state8 );

    SC_METHOD(thread_output_r_we0);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( ap_CS_fsm_state8 );

    SC_METHOD(thread_output_r_we1);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( ap_CS_fsm_state8 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );

    ap_CS_fsm = "00000001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "write_data_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, p_read, "(port)p_read");
    sc_trace(mVcdFile, p_read1, "(port)p_read1");
    sc_trace(mVcdFile, p_read2, "(port)p_read2");
    sc_trace(mVcdFile, p_read3, "(port)p_read3");
    sc_trace(mVcdFile, p_read4, "(port)p_read4");
    sc_trace(mVcdFile, p_read5, "(port)p_read5");
    sc_trace(mVcdFile, p_read6, "(port)p_read6");
    sc_trace(mVcdFile, p_read7, "(port)p_read7");
    sc_trace(mVcdFile, p_read8, "(port)p_read8");
    sc_trace(mVcdFile, p_read9, "(port)p_read9");
    sc_trace(mVcdFile, p_read10, "(port)p_read10");
    sc_trace(mVcdFile, p_read11, "(port)p_read11");
    sc_trace(mVcdFile, p_read12, "(port)p_read12");
    sc_trace(mVcdFile, p_read13, "(port)p_read13");
    sc_trace(mVcdFile, p_read14, "(port)p_read14");
    sc_trace(mVcdFile, p_read15, "(port)p_read15");
    sc_trace(mVcdFile, output_r_address0, "(port)output_r_address0");
    sc_trace(mVcdFile, output_r_ce0, "(port)output_r_ce0");
    sc_trace(mVcdFile, output_r_we0, "(port)output_r_we0");
    sc_trace(mVcdFile, output_r_d0, "(port)output_r_d0");
    sc_trace(mVcdFile, output_r_address1, "(port)output_r_address1");
    sc_trace(mVcdFile, output_r_ce1, "(port)output_r_ce1");
    sc_trace(mVcdFile, output_r_we1, "(port)output_r_we1");
    sc_trace(mVcdFile, output_r_d1, "(port)output_r_d1");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, ap_port_reg_p_read2, "ap_port_reg_p_read2");
    sc_trace(mVcdFile, ap_port_reg_p_read3, "ap_port_reg_p_read3");
    sc_trace(mVcdFile, ap_port_reg_p_read4, "ap_port_reg_p_read4");
    sc_trace(mVcdFile, ap_port_reg_p_read5, "ap_port_reg_p_read5");
    sc_trace(mVcdFile, ap_port_reg_p_read6, "ap_port_reg_p_read6");
    sc_trace(mVcdFile, ap_port_reg_p_read7, "ap_port_reg_p_read7");
    sc_trace(mVcdFile, ap_port_reg_p_read8, "ap_port_reg_p_read8");
    sc_trace(mVcdFile, ap_port_reg_p_read9, "ap_port_reg_p_read9");
    sc_trace(mVcdFile, ap_port_reg_p_read10, "ap_port_reg_p_read10");
    sc_trace(mVcdFile, ap_port_reg_p_read11, "ap_port_reg_p_read11");
    sc_trace(mVcdFile, ap_port_reg_p_read12, "ap_port_reg_p_read12");
    sc_trace(mVcdFile, ap_port_reg_p_read13, "ap_port_reg_p_read13");
    sc_trace(mVcdFile, ap_port_reg_p_read14, "ap_port_reg_p_read14");
    sc_trace(mVcdFile, ap_port_reg_p_read15, "ap_port_reg_p_read15");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, ap_CS_fsm_state6, "ap_CS_fsm_state6");
    sc_trace(mVcdFile, ap_CS_fsm_state7, "ap_CS_fsm_state7");
    sc_trace(mVcdFile, ap_CS_fsm_state8, "ap_CS_fsm_state8");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

write_data::~write_data() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void write_data::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        ap_port_reg_p_read10 = p_read10.read();
        ap_port_reg_p_read11 = p_read11.read();
        ap_port_reg_p_read12 = p_read12.read();
        ap_port_reg_p_read13 = p_read13.read();
        ap_port_reg_p_read14 = p_read14.read();
        ap_port_reg_p_read15 = p_read15.read();
        ap_port_reg_p_read2 = p_read2.read();
        ap_port_reg_p_read3 = p_read3.read();
        ap_port_reg_p_read4 = p_read4.read();
        ap_port_reg_p_read5 = p_read5.read();
        ap_port_reg_p_read6 = p_read6.read();
        ap_port_reg_p_read7 = p_read7.read();
        ap_port_reg_p_read8 = p_read8.read();
        ap_port_reg_p_read9 = p_read9.read();
    }
}

void write_data::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void write_data::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void write_data::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void write_data::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void write_data::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void write_data::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void write_data::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void write_data::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
}

void write_data::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void write_data::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void write_data::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void write_data::thread_output_r_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        output_r_address0 =  (sc_lv<4>) (ap_const_lv64_E);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        output_r_address0 =  (sc_lv<4>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        output_r_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        output_r_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        output_r_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        output_r_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        output_r_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        output_r_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        output_r_address0 = "XXXX";
    }
}

void write_data::thread_output_r_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        output_r_address1 =  (sc_lv<4>) (ap_const_lv64_F);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        output_r_address1 =  (sc_lv<4>) (ap_const_lv64_D);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        output_r_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        output_r_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        output_r_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        output_r_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        output_r_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        output_r_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else {
        output_r_address1 = "XXXX";
    }
}

void write_data::thread_output_r_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        output_r_ce0 = ap_const_logic_1;
    } else {
        output_r_ce0 = ap_const_logic_0;
    }
}

void write_data::thread_output_r_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        output_r_ce1 = ap_const_logic_1;
    } else {
        output_r_ce1 = ap_const_logic_0;
    }
}

void write_data::thread_output_r_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        output_r_d0 = ap_port_reg_p_read14.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        output_r_d0 = ap_port_reg_p_read12.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        output_r_d0 = ap_port_reg_p_read10.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        output_r_d0 = ap_port_reg_p_read8.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        output_r_d0 = ap_port_reg_p_read6.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        output_r_d0 = ap_port_reg_p_read4.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        output_r_d0 = ap_port_reg_p_read2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        output_r_d0 = p_read.read();
    } else {
        output_r_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void write_data::thread_output_r_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        output_r_d1 = ap_port_reg_p_read15.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        output_r_d1 = ap_port_reg_p_read13.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        output_r_d1 = ap_port_reg_p_read11.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        output_r_d1 = ap_port_reg_p_read9.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        output_r_d1 = ap_port_reg_p_read7.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        output_r_d1 = ap_port_reg_p_read5.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        output_r_d1 = ap_port_reg_p_read3.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        output_r_d1 = p_read1.read();
    } else {
        output_r_d1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void write_data::thread_output_r_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        output_r_we0 = ap_const_logic_1;
    } else {
        output_r_we0 = ap_const_logic_0;
    }
}

void write_data::thread_output_r_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        output_r_we1 = ap_const_logic_1;
    } else {
        output_r_we1 = ap_const_logic_0;
    }
}

void write_data::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            ap_NS_fsm = ap_ST_fsm_state3;
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state5;
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state6;
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state7;
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_fsm_state8;
            break;
        case 128 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<8>) ("XXXXXXXX");
            break;
    }
}

}
