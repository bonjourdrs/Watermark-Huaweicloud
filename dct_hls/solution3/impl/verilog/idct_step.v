// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module idct_step (
        ap_ready,
        isrc_0_0_V_read,
        isrc_0_1_V_read,
        isrc_0_2_V_read,
        isrc_0_3_V_read,
        isrc_1_0_V_read,
        isrc_1_1_V_read,
        isrc_1_2_V_read,
        isrc_1_3_V_read,
        isrc_2_0_V_read,
        isrc_2_1_V_read,
        isrc_2_2_V_read,
        isrc_2_3_V_read,
        isrc_3_0_V_read,
        isrc_3_1_V_read,
        isrc_3_2_V_read,
        isrc_3_3_V_read,
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
input  [19:0] isrc_0_0_V_read;
input  [19:0] isrc_0_1_V_read;
input  [19:0] isrc_0_2_V_read;
input  [19:0] isrc_0_3_V_read;
input  [19:0] isrc_1_0_V_read;
input  [19:0] isrc_1_1_V_read;
input  [19:0] isrc_1_2_V_read;
input  [19:0] isrc_1_3_V_read;
input  [19:0] isrc_2_0_V_read;
input  [19:0] isrc_2_1_V_read;
input  [19:0] isrc_2_2_V_read;
input  [19:0] isrc_2_3_V_read;
input  [19:0] isrc_3_0_V_read;
input  [19:0] isrc_3_1_V_read;
input  [19:0] isrc_3_2_V_read;
input  [19:0] isrc_3_3_V_read;
output  [19:0] ap_return_0;
output  [19:0] ap_return_1;
output  [19:0] ap_return_2;
output  [19:0] ap_return_3;
output  [19:0] ap_return_4;
output  [19:0] ap_return_5;
output  [19:0] ap_return_6;
output  [19:0] ap_return_7;
output  [19:0] ap_return_8;
output  [19:0] ap_return_9;
output  [19:0] ap_return_10;
output  [19:0] ap_return_11;
output  [19:0] ap_return_12;
output  [19:0] ap_return_13;
output  [19:0] ap_return_14;
output  [19:0] ap_return_15;

wire   [18:0] tmp_fu_138_p1;
wire   [18:0] tmp_54_fu_146_p1;
wire   [18:0] tmp1_fu_150_p2;
wire   [18:0] tmp_53_fu_142_p1;
wire   [18:0] tmp3_fu_156_p2;
wire   [19:0] tmp4_fu_162_p3;
wire   [18:0] tmp_55_fu_176_p1;
wire   [18:0] tmp_57_fu_184_p1;
wire   [18:0] tmp2_fu_188_p2;
wire   [18:0] tmp_56_fu_180_p1;
wire   [18:0] tmp6_fu_194_p2;
wire   [19:0] tmp7_fu_200_p3;
wire   [18:0] tmp_58_fu_214_p1;
wire   [18:0] tmp_60_fu_222_p1;
wire   [18:0] tmp15_fu_226_p2;
wire   [18:0] tmp_59_fu_218_p1;
wire   [18:0] tmp9_fu_232_p2;
wire   [19:0] tmp10_fu_238_p3;
wire   [18:0] tmp_61_fu_252_p1;
wire   [18:0] tmp_63_fu_260_p1;
wire   [18:0] tmp16_fu_264_p2;
wire   [18:0] tmp_62_fu_256_p1;
wire   [18:0] tmp12_fu_270_p2;
wire   [19:0] tmp13_fu_276_p3;
wire   [19:0] r_V_fu_290_p2;
wire   [19:0] addconv4_fu_308_p2;
wire   [19:0] r_V_1_fu_296_p2;
wire   [19:0] tmp_s_fu_314_p2;
wire   [19:0] r_V_2_fu_302_p2;
wire   [19:0] r_V_3_fu_326_p2;
wire   [19:0] addconv5_fu_344_p2;
wire   [19:0] r_V_4_fu_332_p2;
wire   [19:0] tmp_38_fu_350_p2;
wire   [19:0] r_V_5_fu_338_p2;
wire   [19:0] r_V_6_fu_362_p2;
wire   [19:0] addconv6_fu_380_p2;
wire   [19:0] r_V_7_fu_368_p2;
wire   [19:0] tmp_39_fu_386_p2;
wire   [19:0] r_V_8_fu_374_p2;
wire   [19:0] r_V_9_fu_398_p2;
wire   [19:0] addconv7_fu_416_p2;
wire   [19:0] r_V_10_fu_404_p2;
wire   [19:0] tmp_40_fu_422_p2;
wire   [19:0] r_V_11_fu_410_p2;
wire   [19:0] tmp_41_fu_434_p2;
wire   [19:0] tmp_42_fu_440_p2;
wire   [19:0] tmp_43_fu_452_p2;
wire   [19:0] tmp_44_fu_458_p2;
wire   [19:0] tmp_45_fu_470_p2;
wire   [19:0] tmp_46_fu_476_p2;
wire   [19:0] tmp_47_fu_488_p2;
wire   [19:0] tmp_48_fu_494_p2;
wire   [19:0] r_V_12_fu_506_p2;
wire   [19:0] tmp_49_fu_512_p2;
wire   [19:0] addconv_fu_518_p2;
wire   [19:0] r_V_13_fu_530_p2;
wire   [19:0] tmp_50_fu_536_p2;
wire   [19:0] addconv1_fu_542_p2;
wire   [19:0] r_V_14_fu_554_p2;
wire   [19:0] tmp_51_fu_560_p2;
wire   [19:0] addconv2_fu_566_p2;
wire   [19:0] r_V_15_fu_578_p2;
wire   [19:0] tmp_52_fu_584_p2;
wire   [19:0] addconv3_fu_590_p2;
wire   [19:0] idst_0_0_V_write_a_fu_170_p2;
wire   [19:0] idst_0_1_V_write_a_fu_320_p2;
wire   [19:0] idst_0_2_V_write_a_fu_446_p2;
wire   [19:0] idst_0_3_V_write_a_fu_524_p2;
wire   [19:0] idst_1_0_V_write_a_fu_208_p2;
wire   [19:0] idst_1_1_V_write_a_fu_356_p2;
wire   [19:0] idst_1_2_V_write_a_fu_464_p2;
wire   [19:0] idst_1_3_V_write_a_fu_548_p2;
wire   [19:0] idst_2_0_V_write_a_fu_246_p2;
wire   [19:0] idst_2_1_V_write_a_fu_392_p2;
wire   [19:0] idst_2_2_V_write_a_fu_482_p2;
wire   [19:0] idst_2_3_V_write_a_fu_572_p2;
wire   [19:0] idst_3_0_V_write_a_fu_284_p2;
wire   [19:0] idst_3_1_V_write_a_fu_428_p2;
wire   [19:0] idst_3_2_V_write_a_fu_500_p2;
wire   [19:0] idst_3_3_V_write_a_fu_596_p2;

assign addconv1_fu_542_p2 = (r_V_4_fu_332_p2 + tmp_50_fu_536_p2);

assign addconv2_fu_566_p2 = (r_V_7_fu_368_p2 + tmp_51_fu_560_p2);

assign addconv3_fu_590_p2 = (r_V_10_fu_404_p2 + tmp_52_fu_584_p2);

assign addconv4_fu_308_p2 = (isrc_1_0_V_read + r_V_fu_290_p2);

assign addconv5_fu_344_p2 = (isrc_1_1_V_read + r_V_3_fu_326_p2);

assign addconv6_fu_380_p2 = (isrc_1_2_V_read + r_V_6_fu_362_p2);

assign addconv7_fu_416_p2 = (isrc_1_3_V_read + r_V_9_fu_398_p2);

assign addconv_fu_518_p2 = (r_V_1_fu_296_p2 + tmp_49_fu_512_p2);

assign ap_ready = 1'b1;

assign ap_return_0 = idst_0_0_V_write_a_fu_170_p2;

assign ap_return_1 = idst_0_1_V_write_a_fu_320_p2;

assign ap_return_10 = idst_2_2_V_write_a_fu_482_p2;

assign ap_return_11 = idst_2_3_V_write_a_fu_572_p2;

assign ap_return_12 = idst_3_0_V_write_a_fu_284_p2;

assign ap_return_13 = idst_3_1_V_write_a_fu_428_p2;

assign ap_return_14 = idst_3_2_V_write_a_fu_500_p2;

assign ap_return_15 = idst_3_3_V_write_a_fu_596_p2;

assign ap_return_2 = idst_0_2_V_write_a_fu_446_p2;

assign ap_return_3 = idst_0_3_V_write_a_fu_524_p2;

assign ap_return_4 = idst_1_0_V_write_a_fu_208_p2;

assign ap_return_5 = idst_1_1_V_write_a_fu_356_p2;

assign ap_return_6 = idst_1_2_V_write_a_fu_464_p2;

assign ap_return_7 = idst_1_3_V_write_a_fu_548_p2;

assign ap_return_8 = idst_2_0_V_write_a_fu_246_p2;

assign ap_return_9 = idst_2_1_V_write_a_fu_392_p2;

assign idst_0_0_V_write_a_fu_170_p2 = (isrc_3_0_V_read + tmp4_fu_162_p3);

assign idst_0_1_V_write_a_fu_320_p2 = (tmp_s_fu_314_p2 - r_V_2_fu_302_p2);

assign idst_0_2_V_write_a_fu_446_p2 = (r_V_2_fu_302_p2 + tmp_42_fu_440_p2);

assign idst_0_3_V_write_a_fu_524_p2 = (addconv_fu_518_p2 - isrc_3_0_V_read);

assign idst_1_0_V_write_a_fu_208_p2 = (isrc_3_1_V_read + tmp7_fu_200_p3);

assign idst_1_1_V_write_a_fu_356_p2 = (tmp_38_fu_350_p2 - r_V_5_fu_338_p2);

assign idst_1_2_V_write_a_fu_464_p2 = (r_V_5_fu_338_p2 + tmp_44_fu_458_p2);

assign idst_1_3_V_write_a_fu_548_p2 = (addconv1_fu_542_p2 - isrc_3_1_V_read);

assign idst_2_0_V_write_a_fu_246_p2 = (isrc_3_2_V_read + tmp10_fu_238_p3);

assign idst_2_1_V_write_a_fu_392_p2 = (tmp_39_fu_386_p2 - r_V_8_fu_374_p2);

assign idst_2_2_V_write_a_fu_482_p2 = (r_V_8_fu_374_p2 + tmp_46_fu_476_p2);

assign idst_2_3_V_write_a_fu_572_p2 = (addconv2_fu_566_p2 - isrc_3_2_V_read);

assign idst_3_0_V_write_a_fu_284_p2 = (isrc_3_3_V_read + tmp13_fu_276_p3);

assign idst_3_1_V_write_a_fu_428_p2 = (tmp_40_fu_422_p2 - r_V_11_fu_410_p2);

assign idst_3_2_V_write_a_fu_500_p2 = (r_V_11_fu_410_p2 + tmp_48_fu_494_p2);

assign idst_3_3_V_write_a_fu_596_p2 = (addconv3_fu_590_p2 - isrc_3_3_V_read);

assign r_V_10_fu_404_p2 = isrc_2_3_V_read << 20'd1;

assign r_V_11_fu_410_p2 = isrc_3_3_V_read << 20'd1;

assign r_V_12_fu_506_p2 = isrc_1_0_V_read << 20'd1;

assign r_V_13_fu_530_p2 = isrc_1_1_V_read << 20'd1;

assign r_V_14_fu_554_p2 = isrc_1_2_V_read << 20'd1;

assign r_V_15_fu_578_p2 = isrc_1_3_V_read << 20'd1;

assign r_V_1_fu_296_p2 = isrc_2_0_V_read << 20'd1;

assign r_V_2_fu_302_p2 = isrc_3_0_V_read << 20'd1;

assign r_V_3_fu_326_p2 = isrc_0_1_V_read << 20'd1;

assign r_V_4_fu_332_p2 = isrc_2_1_V_read << 20'd1;

assign r_V_5_fu_338_p2 = isrc_3_1_V_read << 20'd1;

assign r_V_6_fu_362_p2 = isrc_0_2_V_read << 20'd1;

assign r_V_7_fu_368_p2 = isrc_2_2_V_read << 20'd1;

assign r_V_8_fu_374_p2 = isrc_3_2_V_read << 20'd1;

assign r_V_9_fu_398_p2 = isrc_0_3_V_read << 20'd1;

assign r_V_fu_290_p2 = isrc_0_0_V_read << 20'd1;

assign tmp10_fu_238_p3 = {{tmp9_fu_232_p2}, {1'd0}};

assign tmp12_fu_270_p2 = (tmp16_fu_264_p2 + tmp_62_fu_256_p1);

assign tmp13_fu_276_p3 = {{tmp12_fu_270_p2}, {1'd0}};

assign tmp15_fu_226_p2 = (tmp_58_fu_214_p1 + tmp_60_fu_222_p1);

assign tmp16_fu_264_p2 = (tmp_61_fu_252_p1 + tmp_63_fu_260_p1);

assign tmp1_fu_150_p2 = (tmp_fu_138_p1 + tmp_54_fu_146_p1);

assign tmp2_fu_188_p2 = (tmp_55_fu_176_p1 + tmp_57_fu_184_p1);

assign tmp3_fu_156_p2 = (tmp1_fu_150_p2 + tmp_53_fu_142_p1);

assign tmp4_fu_162_p3 = {{tmp3_fu_156_p2}, {1'd0}};

assign tmp6_fu_194_p2 = (tmp2_fu_188_p2 + tmp_56_fu_180_p1);

assign tmp7_fu_200_p3 = {{tmp6_fu_194_p2}, {1'd0}};

assign tmp9_fu_232_p2 = (tmp15_fu_226_p2 + tmp_59_fu_218_p1);

assign tmp_38_fu_350_p2 = (addconv5_fu_344_p2 - r_V_4_fu_332_p2);

assign tmp_39_fu_386_p2 = (addconv6_fu_380_p2 - r_V_7_fu_368_p2);

assign tmp_40_fu_422_p2 = (addconv7_fu_416_p2 - r_V_10_fu_404_p2);

assign tmp_41_fu_434_p2 = (r_V_fu_290_p2 - isrc_1_0_V_read);

assign tmp_42_fu_440_p2 = (tmp_41_fu_434_p2 - r_V_1_fu_296_p2);

assign tmp_43_fu_452_p2 = (r_V_3_fu_326_p2 - isrc_1_1_V_read);

assign tmp_44_fu_458_p2 = (tmp_43_fu_452_p2 - r_V_4_fu_332_p2);

assign tmp_45_fu_470_p2 = (r_V_6_fu_362_p2 - isrc_1_2_V_read);

assign tmp_46_fu_476_p2 = (tmp_45_fu_470_p2 - r_V_7_fu_368_p2);

assign tmp_47_fu_488_p2 = (r_V_9_fu_398_p2 - isrc_1_3_V_read);

assign tmp_48_fu_494_p2 = (tmp_47_fu_488_p2 - r_V_10_fu_404_p2);

assign tmp_49_fu_512_p2 = (r_V_fu_290_p2 - r_V_12_fu_506_p2);

assign tmp_50_fu_536_p2 = (r_V_3_fu_326_p2 - r_V_13_fu_530_p2);

assign tmp_51_fu_560_p2 = (r_V_6_fu_362_p2 - r_V_14_fu_554_p2);

assign tmp_52_fu_584_p2 = (r_V_9_fu_398_p2 - r_V_15_fu_578_p2);

assign tmp_53_fu_142_p1 = isrc_1_0_V_read[18:0];

assign tmp_54_fu_146_p1 = isrc_2_0_V_read[18:0];

assign tmp_55_fu_176_p1 = isrc_0_1_V_read[18:0];

assign tmp_56_fu_180_p1 = isrc_1_1_V_read[18:0];

assign tmp_57_fu_184_p1 = isrc_2_1_V_read[18:0];

assign tmp_58_fu_214_p1 = isrc_0_2_V_read[18:0];

assign tmp_59_fu_218_p1 = isrc_1_2_V_read[18:0];

assign tmp_60_fu_222_p1 = isrc_2_2_V_read[18:0];

assign tmp_61_fu_252_p1 = isrc_0_3_V_read[18:0];

assign tmp_62_fu_256_p1 = isrc_1_3_V_read[18:0];

assign tmp_63_fu_260_p1 = isrc_2_3_V_read[18:0];

assign tmp_fu_138_p1 = isrc_0_0_V_read[18:0];

assign tmp_s_fu_314_p2 = (addconv4_fu_308_p2 - r_V_1_fu_296_p2);

endmodule //idct_step
