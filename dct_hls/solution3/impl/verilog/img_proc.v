// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="img_proc,hls_ip_2017_4,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xcvu9p-flga2104-2-i,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=6.465000,HLS_SYN_LAT=5720001,HLS_SYN_TPT=none,HLS_SYN_MEM=4,HLS_SYN_DSP=4,HLS_SYN_FF=1775,HLS_SYN_LUT=7513}" *)

module img_proc (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        img_address0,
        img_ce0,
        img_q0,
        img_address1,
        img_ce1,
        img_q1,
        mark_address0,
        mark_ce0,
        mark_q0,
        out_r_address0,
        out_r_ce0,
        out_r_we0,
        out_r_d0,
        out_r_address1,
        out_r_ce1,
        out_r_we1,
        out_r_d1
);

parameter    ap_ST_fsm_state1 = 21'd1;
parameter    ap_ST_fsm_state2 = 21'd2;
parameter    ap_ST_fsm_state3 = 21'd4;
parameter    ap_ST_fsm_state4 = 21'd8;
parameter    ap_ST_fsm_state5 = 21'd16;
parameter    ap_ST_fsm_state6 = 21'd32;
parameter    ap_ST_fsm_state7 = 21'd64;
parameter    ap_ST_fsm_state8 = 21'd128;
parameter    ap_ST_fsm_state9 = 21'd256;
parameter    ap_ST_fsm_state10 = 21'd512;
parameter    ap_ST_fsm_state11 = 21'd1024;
parameter    ap_ST_fsm_state12 = 21'd2048;
parameter    ap_ST_fsm_state13 = 21'd4096;
parameter    ap_ST_fsm_state14 = 21'd8192;
parameter    ap_ST_fsm_state15 = 21'd16384;
parameter    ap_ST_fsm_state16 = 21'd32768;
parameter    ap_ST_fsm_state17 = 21'd65536;
parameter    ap_ST_fsm_state18 = 21'd131072;
parameter    ap_ST_fsm_state19 = 21'd262144;
parameter    ap_ST_fsm_state20 = 21'd524288;
parameter    ap_ST_fsm_state21 = 21'd1048576;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [19:0] img_address0;
output   img_ce0;
input  [7:0] img_q0;
output  [19:0] img_address1;
output   img_ce1;
input  [7:0] img_q1;
output  [15:0] mark_address0;
output   mark_ce0;
input  [7:0] mark_q0;
output  [19:0] out_r_address0;
output   out_r_ce0;
output   out_r_we0;
output  [7:0] out_r_d0;
output  [19:0] out_r_address1;
output   out_r_ce1;
output   out_r_we1;
output  [7:0] out_r_d1;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[19:0] img_address0;
reg img_ce0;
reg[19:0] img_address1;
reg img_ce1;
reg mark_ce0;
reg[19:0] out_r_address0;
reg out_r_ce0;
reg out_r_we0;
reg[19:0] out_r_address1;
reg out_r_ce1;
reg out_r_we1;

(* fsm_encoding = "none" *) reg   [20:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [15:0] mark_idx_1_fu_699_p2;
reg   [15:0] mark_idx_1_reg_1153;
wire    ap_CS_fsm_state2;
wire   [15:0] idx_urem_fu_717_p3;
reg   [15:0] idx_urem_reg_1158;
wire   [0:0] tmp_fu_693_p2;
wire   [21:0] base_idx_fu_763_p2;
reg   [21:0] base_idx_reg_1163;
wire   [63:0] tmp_6_fu_773_p1;
reg   [63:0] tmp_6_reg_1181;
wire   [63:0] tmp_8_fu_784_p1;
reg   [63:0] tmp_8_reg_1191;
wire   [63:0] tmp_10_fu_803_p1;
reg   [63:0] tmp_10_reg_1206;
wire    ap_CS_fsm_state3;
wire   [63:0] tmp_12_fu_817_p1;
reg   [63:0] tmp_12_reg_1216;
reg   [7:0] mark_load_reg_1226;
wire   [63:0] tmp_14_fu_831_p1;
reg   [63:0] tmp_14_reg_1231;
wire    ap_CS_fsm_state4;
wire   [63:0] tmp_16_fu_845_p1;
reg   [63:0] tmp_16_reg_1241;
wire   [63:0] tmp_18_fu_859_p1;
reg   [63:0] tmp_18_reg_1251;
wire    ap_CS_fsm_state5;
wire   [63:0] tmp_20_fu_873_p1;
reg   [63:0] tmp_20_reg_1261;
wire   [63:0] tmp_22_fu_887_p1;
reg   [63:0] tmp_22_reg_1271;
wire    ap_CS_fsm_state6;
wire   [63:0] tmp_24_fu_901_p1;
reg   [63:0] tmp_24_reg_1281;
wire   [63:0] tmp_26_fu_915_p1;
reg   [63:0] tmp_26_reg_1291;
wire    ap_CS_fsm_state7;
wire   [63:0] tmp_28_fu_929_p1;
reg   [63:0] tmp_28_reg_1301;
wire   [63:0] tmp_30_fu_943_p1;
reg   [63:0] tmp_30_reg_1311;
wire    ap_CS_fsm_state8;
wire   [63:0] tmp_32_fu_957_p1;
reg   [63:0] tmp_32_reg_1321;
wire   [63:0] tmp_34_fu_971_p1;
reg   [63:0] tmp_34_reg_1331;
wire    ap_CS_fsm_state9;
wire   [63:0] tmp_36_fu_985_p1;
reg   [63:0] tmp_36_reg_1341;
reg   [3:0] indata_address0;
reg    indata_ce0;
reg    indata_we0;
wire   [7:0] indata_q0;
reg   [3:0] indata_address1;
reg    indata_ce1;
reg    indata_we1;
reg   [3:0] outdata_address0;
reg    outdata_ce0;
reg    outdata_we0;
wire   [7:0] outdata_q0;
reg   [3:0] outdata_address1;
reg    outdata_ce1;
wire   [7:0] outdata_q1;
wire    grp_add_watermark_fu_682_ap_start;
wire    grp_add_watermark_fu_682_ap_done;
wire    grp_add_watermark_fu_682_ap_idle;
wire    grp_add_watermark_fu_682_ap_ready;
wire   [3:0] grp_add_watermark_fu_682_indata_address0;
wire    grp_add_watermark_fu_682_indata_ce0;
wire   [3:0] grp_add_watermark_fu_682_outdata_address0;
wire    grp_add_watermark_fu_682_outdata_ce0;
wire    grp_add_watermark_fu_682_outdata_we0;
wire   [7:0] grp_add_watermark_fu_682_outdata_d0;
reg   [15:0] mark_idx_reg_660;
wire    ap_CS_fsm_state21;
reg   [15:0] tmp_50_reg_671;
reg    ap_reg_grp_add_watermark_fu_682_ap_start;
wire    ap_CS_fsm_state11;
wire    ap_CS_fsm_state12;
wire   [63:0] tmp_37_fu_789_p1;
wire    ap_CS_fsm_state14;
wire    ap_CS_fsm_state15;
wire    ap_CS_fsm_state16;
wire    ap_CS_fsm_state17;
wire    ap_CS_fsm_state18;
wire    ap_CS_fsm_state19;
wire    ap_CS_fsm_state20;
wire    ap_CS_fsm_state10;
wire    ap_CS_fsm_state13;
wire   [15:0] next_urem_fu_705_p2;
wire   [0:0] tmp_49_fu_711_p2;
wire   [16:0] mark_idx_cast_fu_689_p1;
wire   [16:0] tmp_2_cast_fu_725_p1;
wire   [16:0] tmp_s_fu_729_p2;
wire   [20:0] tmp_38_fu_735_p3;
wire   [7:0] tmp_51_fu_747_p1;
wire   [9:0] tmp_5_fu_751_p3;
wire   [21:0] tmp_5_cast_cast_fu_759_p1;
wire  signed [21:0] tmp_4_cast_fu_743_p1;
wire  signed [31:0] base_idx_cast_fu_769_p1;
wire   [31:0] tmp_7_fu_778_p2;
wire   [21:0] tmp_9_fu_794_p2;
wire  signed [31:0] tmp_9_cast_fu_799_p1;
wire   [21:0] tmp_11_fu_808_p2;
wire  signed [31:0] tmp_11_cast_fu_813_p1;
wire   [21:0] tmp_13_fu_822_p2;
wire  signed [31:0] tmp_13_cast_fu_827_p1;
wire   [21:0] tmp_15_fu_836_p2;
wire  signed [31:0] tmp_15_cast_fu_841_p1;
wire   [21:0] tmp_17_fu_850_p2;
wire  signed [31:0] tmp_17_cast_fu_855_p1;
wire   [21:0] tmp_19_fu_864_p2;
wire  signed [31:0] tmp_19_cast_fu_869_p1;
wire   [21:0] tmp_21_fu_878_p2;
wire  signed [31:0] tmp_21_cast_fu_883_p1;
wire   [21:0] tmp_23_fu_892_p2;
wire  signed [31:0] tmp_23_cast_fu_897_p1;
wire   [21:0] tmp_25_fu_906_p2;
wire  signed [31:0] tmp_25_cast_fu_911_p1;
wire   [21:0] tmp_27_fu_920_p2;
wire  signed [31:0] tmp_27_cast_fu_925_p1;
wire   [21:0] tmp_29_fu_934_p2;
wire  signed [31:0] tmp_29_cast_fu_939_p1;
wire   [21:0] tmp_31_fu_948_p2;
wire  signed [31:0] tmp_31_cast_fu_953_p1;
wire   [21:0] tmp_33_fu_962_p2;
wire  signed [31:0] tmp_33_cast_fu_967_p1;
wire   [21:0] tmp_35_fu_976_p2;
wire  signed [31:0] tmp_35_cast_fu_981_p1;
reg   [20:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 21'd1;
#0 ap_reg_grp_add_watermark_fu_682_ap_start = 1'b0;
end

add_watermark_bufg8j #(
    .DataWidth( 8 ),
    .AddressRange( 16 ),
    .AddressWidth( 4 ))
indata_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(indata_address0),
    .ce0(indata_ce0),
    .we0(indata_we0),
    .d0(img_q0),
    .q0(indata_q0),
    .address1(indata_address1),
    .ce1(indata_ce1),
    .we1(indata_we1),
    .d1(img_q1)
);

img_proc_outdata #(
    .DataWidth( 8 ),
    .AddressRange( 16 ),
    .AddressWidth( 4 ))
outdata_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(outdata_address0),
    .ce0(outdata_ce0),
    .we0(outdata_we0),
    .d0(grp_add_watermark_fu_682_outdata_d0),
    .q0(outdata_q0),
    .address1(outdata_address1),
    .ce1(outdata_ce1),
    .q1(outdata_q1)
);

add_watermark grp_add_watermark_fu_682(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_add_watermark_fu_682_ap_start),
    .ap_done(grp_add_watermark_fu_682_ap_done),
    .ap_idle(grp_add_watermark_fu_682_ap_idle),
    .ap_ready(grp_add_watermark_fu_682_ap_ready),
    .indata_address0(grp_add_watermark_fu_682_indata_address0),
    .indata_ce0(grp_add_watermark_fu_682_indata_ce0),
    .indata_q0(indata_q0),
    .mark(mark_load_reg_1226),
    .outdata_address0(grp_add_watermark_fu_682_outdata_address0),
    .outdata_ce0(grp_add_watermark_fu_682_outdata_ce0),
    .outdata_we0(grp_add_watermark_fu_682_outdata_we0),
    .outdata_d0(grp_add_watermark_fu_682_outdata_d0)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_reg_grp_add_watermark_fu_682_ap_start <= 1'b0;
    end else begin
        if ((1'b1 == ap_CS_fsm_state11)) begin
            ap_reg_grp_add_watermark_fu_682_ap_start <= 1'b1;
        end else if ((grp_add_watermark_fu_682_ap_ready == 1'b1)) begin
            ap_reg_grp_add_watermark_fu_682_ap_start <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state21)) begin
        mark_idx_reg_660 <= mark_idx_1_reg_1153;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        mark_idx_reg_660 <= 16'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state21)) begin
        tmp_50_reg_671 <= idx_urem_reg_1158;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        tmp_50_reg_671 <= 16'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state2) & (tmp_fu_693_p2 == 1'd0))) begin
        base_idx_reg_1163[21 : 2] <= base_idx_fu_763_p2[21 : 2];
        idx_urem_reg_1158 <= idx_urem_fu_717_p3;
        tmp_6_reg_1181[31 : 2] <= tmp_6_fu_773_p1[31 : 2];
        tmp_8_reg_1191[31 : 2] <= tmp_8_fu_784_p1[31 : 2];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        mark_idx_1_reg_1153 <= mark_idx_1_fu_699_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        mark_load_reg_1226 <= mark_q0;
        tmp_10_reg_1206[31 : 2] <= tmp_10_fu_803_p1[31 : 2];
        tmp_12_reg_1216[31 : 2] <= tmp_12_fu_817_p1[31 : 2];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        tmp_14_reg_1231[31 : 2] <= tmp_14_fu_831_p1[31 : 2];
        tmp_16_reg_1241[31 : 2] <= tmp_16_fu_845_p1[31 : 2];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        tmp_18_reg_1251[31 : 2] <= tmp_18_fu_859_p1[31 : 2];
        tmp_20_reg_1261[31 : 2] <= tmp_20_fu_873_p1[31 : 2];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        tmp_22_reg_1271[31 : 2] <= tmp_22_fu_887_p1[31 : 2];
        tmp_24_reg_1281[31 : 2] <= tmp_24_fu_901_p1[31 : 2];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        tmp_26_reg_1291[31 : 2] <= tmp_26_fu_915_p1[31 : 2];
        tmp_28_reg_1301[31 : 2] <= tmp_28_fu_929_p1[31 : 2];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        tmp_30_reg_1311[31 : 2] <= tmp_30_fu_943_p1[31 : 2];
        tmp_32_reg_1321[31 : 2] <= tmp_32_fu_957_p1[31 : 2];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        tmp_34_reg_1331[31 : 2] <= tmp_34_fu_971_p1[31 : 2];
        tmp_36_reg_1341[31 : 2] <= tmp_36_fu_985_p1[31 : 2];
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) & (tmp_fu_693_p2 == 1'd1))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) & (tmp_fu_693_p2 == 1'd1))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        img_address0 = tmp_34_fu_971_p1;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        img_address0 = tmp_30_fu_943_p1;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        img_address0 = tmp_26_fu_915_p1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        img_address0 = tmp_22_fu_887_p1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        img_address0 = tmp_18_fu_859_p1;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        img_address0 = tmp_14_fu_831_p1;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        img_address0 = tmp_10_fu_803_p1;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        img_address0 = tmp_6_fu_773_p1;
    end else begin
        img_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        img_address1 = tmp_36_fu_985_p1;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        img_address1 = tmp_32_fu_957_p1;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        img_address1 = tmp_28_fu_929_p1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        img_address1 = tmp_24_fu_901_p1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        img_address1 = tmp_20_fu_873_p1;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        img_address1 = tmp_16_fu_845_p1;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        img_address1 = tmp_12_fu_817_p1;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        img_address1 = tmp_8_fu_784_p1;
    end else begin
        img_address1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state2))) begin
        img_ce0 = 1'b1;
    end else begin
        img_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state2))) begin
        img_ce1 = 1'b1;
    end else begin
        img_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        indata_address0 = 64'd14;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        indata_address0 = 64'd12;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        indata_address0 = 64'd10;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        indata_address0 = 64'd8;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        indata_address0 = 64'd6;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        indata_address0 = 64'd4;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        indata_address0 = 64'd2;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        indata_address0 = 64'd0;
    end else if ((1'b1 == ap_CS_fsm_state12)) begin
        indata_address0 = grp_add_watermark_fu_682_indata_address0;
    end else begin
        indata_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        indata_address1 = 64'd15;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        indata_address1 = 64'd13;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        indata_address1 = 64'd11;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        indata_address1 = 64'd9;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        indata_address1 = 64'd7;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        indata_address1 = 64'd5;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        indata_address1 = 64'd3;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        indata_address1 = 64'd1;
    end else begin
        indata_address1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3))) begin
        indata_ce0 = 1'b1;
    end else if ((1'b1 == ap_CS_fsm_state12)) begin
        indata_ce0 = grp_add_watermark_fu_682_indata_ce0;
    end else begin
        indata_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3))) begin
        indata_ce1 = 1'b1;
    end else begin
        indata_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3))) begin
        indata_we0 = 1'b1;
    end else begin
        indata_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3))) begin
        indata_we1 = 1'b1;
    end else begin
        indata_we1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        mark_ce0 = 1'b1;
    end else begin
        mark_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state21)) begin
        out_r_address0 = tmp_34_reg_1331;
    end else if ((1'b1 == ap_CS_fsm_state20)) begin
        out_r_address0 = tmp_30_reg_1311;
    end else if ((1'b1 == ap_CS_fsm_state19)) begin
        out_r_address0 = tmp_26_reg_1291;
    end else if ((1'b1 == ap_CS_fsm_state18)) begin
        out_r_address0 = tmp_22_reg_1271;
    end else if ((1'b1 == ap_CS_fsm_state17)) begin
        out_r_address0 = tmp_18_reg_1251;
    end else if ((1'b1 == ap_CS_fsm_state16)) begin
        out_r_address0 = tmp_14_reg_1231;
    end else if ((1'b1 == ap_CS_fsm_state15)) begin
        out_r_address0 = tmp_10_reg_1206;
    end else if ((1'b1 == ap_CS_fsm_state14)) begin
        out_r_address0 = tmp_6_reg_1181;
    end else begin
        out_r_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state21)) begin
        out_r_address1 = tmp_36_reg_1341;
    end else if ((1'b1 == ap_CS_fsm_state20)) begin
        out_r_address1 = tmp_32_reg_1321;
    end else if ((1'b1 == ap_CS_fsm_state19)) begin
        out_r_address1 = tmp_28_reg_1301;
    end else if ((1'b1 == ap_CS_fsm_state18)) begin
        out_r_address1 = tmp_24_reg_1281;
    end else if ((1'b1 == ap_CS_fsm_state17)) begin
        out_r_address1 = tmp_20_reg_1261;
    end else if ((1'b1 == ap_CS_fsm_state16)) begin
        out_r_address1 = tmp_16_reg_1241;
    end else if ((1'b1 == ap_CS_fsm_state15)) begin
        out_r_address1 = tmp_12_reg_1216;
    end else if ((1'b1 == ap_CS_fsm_state14)) begin
        out_r_address1 = tmp_8_reg_1191;
    end else begin
        out_r_address1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state20) | (1'b1 == ap_CS_fsm_state19) | (1'b1 == ap_CS_fsm_state18) | (1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state21))) begin
        out_r_ce0 = 1'b1;
    end else begin
        out_r_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state20) | (1'b1 == ap_CS_fsm_state19) | (1'b1 == ap_CS_fsm_state18) | (1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state21))) begin
        out_r_ce1 = 1'b1;
    end else begin
        out_r_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state20) | (1'b1 == ap_CS_fsm_state19) | (1'b1 == ap_CS_fsm_state18) | (1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state21))) begin
        out_r_we0 = 1'b1;
    end else begin
        out_r_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state20) | (1'b1 == ap_CS_fsm_state19) | (1'b1 == ap_CS_fsm_state18) | (1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state21))) begin
        out_r_we1 = 1'b1;
    end else begin
        out_r_we1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state20)) begin
        outdata_address0 = 64'd14;
    end else if ((1'b1 == ap_CS_fsm_state19)) begin
        outdata_address0 = 64'd12;
    end else if ((1'b1 == ap_CS_fsm_state18)) begin
        outdata_address0 = 64'd10;
    end else if ((1'b1 == ap_CS_fsm_state17)) begin
        outdata_address0 = 64'd8;
    end else if ((1'b1 == ap_CS_fsm_state16)) begin
        outdata_address0 = 64'd6;
    end else if ((1'b1 == ap_CS_fsm_state15)) begin
        outdata_address0 = 64'd4;
    end else if ((1'b1 == ap_CS_fsm_state14)) begin
        outdata_address0 = 64'd2;
    end else if ((1'b1 == ap_CS_fsm_state13)) begin
        outdata_address0 = 64'd0;
    end else if ((1'b1 == ap_CS_fsm_state12)) begin
        outdata_address0 = grp_add_watermark_fu_682_outdata_address0;
    end else begin
        outdata_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state20)) begin
        outdata_address1 = 64'd15;
    end else if ((1'b1 == ap_CS_fsm_state19)) begin
        outdata_address1 = 64'd13;
    end else if ((1'b1 == ap_CS_fsm_state18)) begin
        outdata_address1 = 64'd11;
    end else if ((1'b1 == ap_CS_fsm_state17)) begin
        outdata_address1 = 64'd9;
    end else if ((1'b1 == ap_CS_fsm_state16)) begin
        outdata_address1 = 64'd7;
    end else if ((1'b1 == ap_CS_fsm_state15)) begin
        outdata_address1 = 64'd5;
    end else if ((1'b1 == ap_CS_fsm_state14)) begin
        outdata_address1 = 64'd3;
    end else if ((1'b1 == ap_CS_fsm_state13)) begin
        outdata_address1 = 64'd1;
    end else begin
        outdata_address1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state20) | (1'b1 == ap_CS_fsm_state19) | (1'b1 == ap_CS_fsm_state18) | (1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state14))) begin
        outdata_ce0 = 1'b1;
    end else if ((1'b1 == ap_CS_fsm_state12)) begin
        outdata_ce0 = grp_add_watermark_fu_682_outdata_ce0;
    end else begin
        outdata_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state20) | (1'b1 == ap_CS_fsm_state19) | (1'b1 == ap_CS_fsm_state18) | (1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state14))) begin
        outdata_ce1 = 1'b1;
    end else begin
        outdata_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state12)) begin
        outdata_we0 = grp_add_watermark_fu_682_outdata_we0;
    end else begin
        outdata_we0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((1'b1 == ap_CS_fsm_state2) & (tmp_fu_693_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state6;
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state8;
        end
        ap_ST_fsm_state8 : begin
            ap_NS_fsm = ap_ST_fsm_state9;
        end
        ap_ST_fsm_state9 : begin
            ap_NS_fsm = ap_ST_fsm_state10;
        end
        ap_ST_fsm_state10 : begin
            ap_NS_fsm = ap_ST_fsm_state11;
        end
        ap_ST_fsm_state11 : begin
            ap_NS_fsm = ap_ST_fsm_state12;
        end
        ap_ST_fsm_state12 : begin
            if (((grp_add_watermark_fu_682_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state12))) begin
                ap_NS_fsm = ap_ST_fsm_state13;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state12;
            end
        end
        ap_ST_fsm_state13 : begin
            ap_NS_fsm = ap_ST_fsm_state14;
        end
        ap_ST_fsm_state14 : begin
            ap_NS_fsm = ap_ST_fsm_state15;
        end
        ap_ST_fsm_state15 : begin
            ap_NS_fsm = ap_ST_fsm_state16;
        end
        ap_ST_fsm_state16 : begin
            ap_NS_fsm = ap_ST_fsm_state17;
        end
        ap_ST_fsm_state17 : begin
            ap_NS_fsm = ap_ST_fsm_state18;
        end
        ap_ST_fsm_state18 : begin
            ap_NS_fsm = ap_ST_fsm_state19;
        end
        ap_ST_fsm_state19 : begin
            ap_NS_fsm = ap_ST_fsm_state20;
        end
        ap_ST_fsm_state20 : begin
            ap_NS_fsm = ap_ST_fsm_state21;
        end
        ap_ST_fsm_state21 : begin
            ap_NS_fsm = ap_ST_fsm_state2;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state10 = ap_CS_fsm[32'd9];

assign ap_CS_fsm_state11 = ap_CS_fsm[32'd10];

assign ap_CS_fsm_state12 = ap_CS_fsm[32'd11];

assign ap_CS_fsm_state13 = ap_CS_fsm[32'd12];

assign ap_CS_fsm_state14 = ap_CS_fsm[32'd13];

assign ap_CS_fsm_state15 = ap_CS_fsm[32'd14];

assign ap_CS_fsm_state16 = ap_CS_fsm[32'd15];

assign ap_CS_fsm_state17 = ap_CS_fsm[32'd16];

assign ap_CS_fsm_state18 = ap_CS_fsm[32'd17];

assign ap_CS_fsm_state19 = ap_CS_fsm[32'd18];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state20 = ap_CS_fsm[32'd19];

assign ap_CS_fsm_state21 = ap_CS_fsm[32'd20];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

assign base_idx_cast_fu_769_p1 = $signed(base_idx_fu_763_p2);

assign base_idx_fu_763_p2 = ($signed(tmp_5_cast_cast_fu_759_p1) + $signed(tmp_4_cast_fu_743_p1));

assign grp_add_watermark_fu_682_ap_start = ap_reg_grp_add_watermark_fu_682_ap_start;

assign idx_urem_fu_717_p3 = ((tmp_49_fu_711_p2[0:0] === 1'b1) ? next_urem_fu_705_p2 : 16'd0);

assign mark_address0 = tmp_37_fu_789_p1;

assign mark_idx_1_fu_699_p2 = (mark_idx_reg_660 + 16'd1);

assign mark_idx_cast_fu_689_p1 = mark_idx_reg_660;

assign next_urem_fu_705_p2 = (16'd1 + tmp_50_reg_671);

assign out_r_d0 = outdata_q0;

assign out_r_d1 = outdata_q1;

assign tmp_10_fu_803_p1 = $unsigned(tmp_9_cast_fu_799_p1);

assign tmp_11_cast_fu_813_p1 = $signed(tmp_11_fu_808_p2);

assign tmp_11_fu_808_p2 = (base_idx_reg_1163 | 22'd3);

assign tmp_12_fu_817_p1 = $unsigned(tmp_11_cast_fu_813_p1);

assign tmp_13_cast_fu_827_p1 = $signed(tmp_13_fu_822_p2);

assign tmp_13_fu_822_p2 = (22'd800 + base_idx_reg_1163);

assign tmp_14_fu_831_p1 = $unsigned(tmp_13_cast_fu_827_p1);

assign tmp_15_cast_fu_841_p1 = $signed(tmp_15_fu_836_p2);

assign tmp_15_fu_836_p2 = (22'd801 + base_idx_reg_1163);

assign tmp_16_fu_845_p1 = $unsigned(tmp_15_cast_fu_841_p1);

assign tmp_17_cast_fu_855_p1 = $signed(tmp_17_fu_850_p2);

assign tmp_17_fu_850_p2 = (22'd802 + base_idx_reg_1163);

assign tmp_18_fu_859_p1 = $unsigned(tmp_17_cast_fu_855_p1);

assign tmp_19_cast_fu_869_p1 = $signed(tmp_19_fu_864_p2);

assign tmp_19_fu_864_p2 = (22'd803 + base_idx_reg_1163);

assign tmp_20_fu_873_p1 = $unsigned(tmp_19_cast_fu_869_p1);

assign tmp_21_cast_fu_883_p1 = $signed(tmp_21_fu_878_p2);

assign tmp_21_fu_878_p2 = (22'd1600 + base_idx_reg_1163);

assign tmp_22_fu_887_p1 = $unsigned(tmp_21_cast_fu_883_p1);

assign tmp_23_cast_fu_897_p1 = $signed(tmp_23_fu_892_p2);

assign tmp_23_fu_892_p2 = (22'd1601 + base_idx_reg_1163);

assign tmp_24_fu_901_p1 = $unsigned(tmp_23_cast_fu_897_p1);

assign tmp_25_cast_fu_911_p1 = $signed(tmp_25_fu_906_p2);

assign tmp_25_fu_906_p2 = (22'd1602 + base_idx_reg_1163);

assign tmp_26_fu_915_p1 = $unsigned(tmp_25_cast_fu_911_p1);

assign tmp_27_cast_fu_925_p1 = $signed(tmp_27_fu_920_p2);

assign tmp_27_fu_920_p2 = (22'd1603 + base_idx_reg_1163);

assign tmp_28_fu_929_p1 = $unsigned(tmp_27_cast_fu_925_p1);

assign tmp_29_cast_fu_939_p1 = $signed(tmp_29_fu_934_p2);

assign tmp_29_fu_934_p2 = (22'd2400 + base_idx_reg_1163);

assign tmp_2_cast_fu_725_p1 = tmp_50_reg_671;

assign tmp_30_fu_943_p1 = $unsigned(tmp_29_cast_fu_939_p1);

assign tmp_31_cast_fu_953_p1 = $signed(tmp_31_fu_948_p2);

assign tmp_31_fu_948_p2 = (22'd2401 + base_idx_reg_1163);

assign tmp_32_fu_957_p1 = $unsigned(tmp_31_cast_fu_953_p1);

assign tmp_33_cast_fu_967_p1 = $signed(tmp_33_fu_962_p2);

assign tmp_33_fu_962_p2 = (22'd2402 + base_idx_reg_1163);

assign tmp_34_fu_971_p1 = $unsigned(tmp_33_cast_fu_967_p1);

assign tmp_35_cast_fu_981_p1 = $signed(tmp_35_fu_976_p2);

assign tmp_35_fu_976_p2 = (22'd2403 + base_idx_reg_1163);

assign tmp_36_fu_985_p1 = $unsigned(tmp_35_cast_fu_981_p1);

assign tmp_37_fu_789_p1 = mark_idx_reg_660;

assign tmp_38_fu_735_p3 = {{tmp_s_fu_729_p2}, {4'd0}};

assign tmp_49_fu_711_p2 = ((next_urem_fu_705_p2 < 16'd200) ? 1'b1 : 1'b0);

assign tmp_4_cast_fu_743_p1 = $signed(tmp_38_fu_735_p3);

assign tmp_51_fu_747_p1 = tmp_50_reg_671[7:0];

assign tmp_5_cast_cast_fu_759_p1 = tmp_5_fu_751_p3;

assign tmp_5_fu_751_p3 = {{tmp_51_fu_747_p1}, {2'd0}};

assign tmp_6_fu_773_p1 = $unsigned(base_idx_cast_fu_769_p1);

assign tmp_7_fu_778_p2 = (base_idx_cast_fu_769_p1 | 32'd1);

assign tmp_8_fu_784_p1 = tmp_7_fu_778_p2;

assign tmp_9_cast_fu_799_p1 = $signed(tmp_9_fu_794_p2);

assign tmp_9_fu_794_p2 = (base_idx_reg_1163 | 22'd2);

assign tmp_fu_693_p2 = ((mark_idx_reg_660 == 16'd40000) ? 1'b1 : 1'b0);

assign tmp_s_fu_729_p2 = (mark_idx_cast_fu_689_p1 - tmp_2_cast_fu_725_p1);

always @ (posedge ap_clk) begin
    base_idx_reg_1163[1:0] <= 2'b00;
    tmp_6_reg_1181[1:0] <= 2'b00;
    tmp_6_reg_1181[63:32] <= 32'b00000000000000000000000000000000;
    tmp_8_reg_1191[1:0] <= 2'b01;
    tmp_8_reg_1191[63:32] <= 32'b00000000000000000000000000000000;
    tmp_10_reg_1206[1:0] <= 2'b10;
    tmp_10_reg_1206[63:32] <= 32'b00000000000000000000000000000000;
    tmp_12_reg_1216[1:0] <= 2'b11;
    tmp_12_reg_1216[63:32] <= 32'b00000000000000000000000000000000;
    tmp_14_reg_1231[1:0] <= 2'b00;
    tmp_14_reg_1231[63:32] <= 32'b00000000000000000000000000000000;
    tmp_16_reg_1241[1:0] <= 2'b01;
    tmp_16_reg_1241[63:32] <= 32'b00000000000000000000000000000000;
    tmp_18_reg_1251[1:0] <= 2'b10;
    tmp_18_reg_1251[63:32] <= 32'b00000000000000000000000000000000;
    tmp_20_reg_1261[1:0] <= 2'b11;
    tmp_20_reg_1261[63:32] <= 32'b00000000000000000000000000000000;
    tmp_22_reg_1271[1:0] <= 2'b00;
    tmp_22_reg_1271[63:32] <= 32'b00000000000000000000000000000000;
    tmp_24_reg_1281[1:0] <= 2'b01;
    tmp_24_reg_1281[63:32] <= 32'b00000000000000000000000000000000;
    tmp_26_reg_1291[1:0] <= 2'b10;
    tmp_26_reg_1291[63:32] <= 32'b00000000000000000000000000000000;
    tmp_28_reg_1301[1:0] <= 2'b11;
    tmp_28_reg_1301[63:32] <= 32'b00000000000000000000000000000000;
    tmp_30_reg_1311[1:0] <= 2'b00;
    tmp_30_reg_1311[63:32] <= 32'b00000000000000000000000000000000;
    tmp_32_reg_1321[1:0] <= 2'b01;
    tmp_32_reg_1321[63:32] <= 32'b00000000000000000000000000000000;
    tmp_34_reg_1331[1:0] <= 2'b10;
    tmp_34_reg_1331[63:32] <= 32'b00000000000000000000000000000000;
    tmp_36_reg_1341[1:0] <= 2'b11;
    tmp_36_reg_1341[63:32] <= 32'b00000000000000000000000000000000;
end

endmodule //img_proc