// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module read_data (
        ap_ready,
        input_0_read,
        input_1_read,
        input_2_read,
        input_3_read,
        input_4_read,
        input_5_read,
        input_6_read,
        input_7_read,
        input_8_read,
        input_9_read,
        input_10_read,
        input_11_read,
        input_12_read,
        input_13_read,
        input_14_read,
        input_15_read,
        ap_return_0,
        ap_return_1,
        ap_return_2,
        ap_return_3,
        ap_return_4,
        ap_return_5,
        ap_return_6,
        ap_return_7,
        ap_return_8,
        ap_return_9,
        ap_return_10,
        ap_return_11,
        ap_return_12,
        ap_return_13,
        ap_return_14,
        ap_return_15
);


output   ap_ready;
input  [7:0] input_0_read;
input  [7:0] input_1_read;
input  [7:0] input_2_read;
input  [7:0] input_3_read;
input  [7:0] input_4_read;
input  [7:0] input_5_read;
input  [7:0] input_6_read;
input  [7:0] input_7_read;
input  [7:0] input_8_read;
input  [7:0] input_9_read;
input  [7:0] input_10_read;
input  [7:0] input_11_read;
input  [7:0] input_12_read;
input  [7:0] input_13_read;
input  [7:0] input_14_read;
input  [7:0] input_15_read;
output  [15:0] ap_return_0;
output  [15:0] ap_return_1;
output  [15:0] ap_return_2;
output  [15:0] ap_return_3;
output  [15:0] ap_return_4;
output  [15:0] ap_return_5;
output  [15:0] ap_return_6;
output  [15:0] ap_return_7;
output  [15:0] ap_return_8;
output  [15:0] ap_return_9;
output  [15:0] ap_return_10;
output  [15:0] ap_return_11;
output  [15:0] ap_return_12;
output  [15:0] ap_return_13;
output  [15:0] ap_return_14;
output  [15:0] ap_return_15;

wire   [15:0] buf_0_0_write_assi_fu_142_p1;
wire   [15:0] buf_0_1_write_assi_fu_146_p1;
wire   [15:0] buf_0_2_write_assi_fu_150_p1;
wire   [15:0] buf_0_3_write_assi_fu_154_p1;
wire   [15:0] buf_1_0_write_assi_fu_158_p1;
wire   [15:0] buf_1_1_write_assi_fu_162_p1;
wire   [15:0] buf_1_2_write_assi_fu_166_p1;
wire   [15:0] buf_1_3_write_assi_fu_170_p1;
wire   [15:0] buf_2_0_write_assi_fu_174_p1;
wire   [15:0] buf_2_1_write_assi_fu_178_p1;
wire   [15:0] buf_2_2_write_assi_fu_182_p1;
wire   [15:0] buf_2_3_write_assi_fu_186_p1;
wire   [15:0] buf_3_0_write_assi_fu_190_p1;
wire   [15:0] buf_3_1_write_assi_fu_194_p1;
wire   [15:0] buf_3_2_write_assi_fu_198_p1;
wire   [15:0] buf_3_3_write_assi_fu_202_p1;

assign ap_ready = 1'b1;

assign ap_return_0 = buf_0_0_write_assi_fu_142_p1;

assign ap_return_1 = buf_0_1_write_assi_fu_146_p1;

assign ap_return_10 = buf_2_2_write_assi_fu_182_p1;

assign ap_return_11 = buf_2_3_write_assi_fu_186_p1;

assign ap_return_12 = buf_3_0_write_assi_fu_190_p1;

assign ap_return_13 = buf_3_1_write_assi_fu_194_p1;

assign ap_return_14 = buf_3_2_write_assi_fu_198_p1;

assign ap_return_15 = buf_3_3_write_assi_fu_202_p1;

assign ap_return_2 = buf_0_2_write_assi_fu_150_p1;

assign ap_return_3 = buf_0_3_write_assi_fu_154_p1;

assign ap_return_4 = buf_1_0_write_assi_fu_158_p1;

assign ap_return_5 = buf_1_1_write_assi_fu_162_p1;

assign ap_return_6 = buf_1_2_write_assi_fu_166_p1;

assign ap_return_7 = buf_1_3_write_assi_fu_170_p1;

assign ap_return_8 = buf_2_0_write_assi_fu_174_p1;

assign ap_return_9 = buf_2_1_write_assi_fu_178_p1;

assign buf_0_0_write_assi_fu_142_p1 = input_0_read;

assign buf_0_1_write_assi_fu_146_p1 = input_1_read;

assign buf_0_2_write_assi_fu_150_p1 = input_2_read;

assign buf_0_3_write_assi_fu_154_p1 = input_3_read;

assign buf_1_0_write_assi_fu_158_p1 = input_4_read;

assign buf_1_1_write_assi_fu_162_p1 = input_5_read;

assign buf_1_2_write_assi_fu_166_p1 = input_6_read;

assign buf_1_3_write_assi_fu_170_p1 = input_7_read;

assign buf_2_0_write_assi_fu_174_p1 = input_8_read;

assign buf_2_1_write_assi_fu_178_p1 = input_9_read;

assign buf_2_2_write_assi_fu_182_p1 = input_10_read;

assign buf_2_3_write_assi_fu_186_p1 = input_11_read;

assign buf_3_0_write_assi_fu_190_p1 = input_12_read;

assign buf_3_1_write_assi_fu_194_p1 = input_13_read;

assign buf_3_2_write_assi_fu_198_p1 = input_14_read;

assign buf_3_3_write_assi_fu_202_p1 = input_15_read;

endmodule //read_data
