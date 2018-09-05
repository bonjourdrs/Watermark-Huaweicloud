// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module write_data (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        p_read,
        p_read1,
        p_read2,
        p_read3,
        p_read4,
        p_read5,
        p_read6,
        p_read7,
        p_read8,
        p_read9,
        p_read10,
        p_read11,
        p_read12,
        p_read13,
        p_read14,
        p_read15,
        output_r_address0,
        output_r_ce0,
        output_r_we0,
        output_r_d0,
        output_r_address1,
        output_r_ce1,
        output_r_we1,
        output_r_d1
);

parameter    ap_ST_fsm_state1 = 8'd1;
parameter    ap_ST_fsm_state2 = 8'd2;
parameter    ap_ST_fsm_state3 = 8'd4;
parameter    ap_ST_fsm_state4 = 8'd8;
parameter    ap_ST_fsm_state5 = 8'd16;
parameter    ap_ST_fsm_state6 = 8'd32;
parameter    ap_ST_fsm_state7 = 8'd64;
parameter    ap_ST_fsm_state8 = 8'd128;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input  [15:0] p_read;
input  [15:0] p_read1;
input  [15:0] p_read2;
input  [15:0] p_read3;
input  [15:0] p_read4;
input  [15:0] p_read5;
input  [15:0] p_read6;
input  [15:0] p_read7;
input  [15:0] p_read8;
input  [15:0] p_read9;
input  [15:0] p_read10;
input  [15:0] p_read11;
input  [15:0] p_read12;
input  [15:0] p_read13;
input  [15:0] p_read14;
input  [15:0] p_read15;
output  [3:0] output_r_address0;
output   output_r_ce0;
output   output_r_we0;
output  [15:0] output_r_d0;
output  [3:0] output_r_address1;
output   output_r_ce1;
output   output_r_we1;
output  [15:0] output_r_d1;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[3:0] output_r_address0;
reg output_r_ce0;
reg output_r_we0;
reg[15:0] output_r_d0;
reg[3:0] output_r_address1;
reg output_r_ce1;
reg output_r_we1;
reg[15:0] output_r_d1;

(* fsm_encoding = "none" *) reg   [7:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg   [15:0] ap_port_reg_p_read2;
reg   [15:0] ap_port_reg_p_read3;
reg   [15:0] ap_port_reg_p_read4;
reg   [15:0] ap_port_reg_p_read5;
reg   [15:0] ap_port_reg_p_read6;
reg   [15:0] ap_port_reg_p_read7;
reg   [15:0] ap_port_reg_p_read8;
reg   [15:0] ap_port_reg_p_read9;
reg   [15:0] ap_port_reg_p_read10;
reg   [15:0] ap_port_reg_p_read11;
reg   [15:0] ap_port_reg_p_read12;
reg   [15:0] ap_port_reg_p_read13;
reg   [15:0] ap_port_reg_p_read14;
reg   [15:0] ap_port_reg_p_read15;
wire    ap_CS_fsm_state2;
wire    ap_CS_fsm_state3;
wire    ap_CS_fsm_state4;
wire    ap_CS_fsm_state5;
wire    ap_CS_fsm_state6;
wire    ap_CS_fsm_state7;
wire    ap_CS_fsm_state8;
reg   [7:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 8'd1;
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        ap_port_reg_p_read10 <= p_read10;
        ap_port_reg_p_read11 <= p_read11;
        ap_port_reg_p_read12 <= p_read12;
        ap_port_reg_p_read13 <= p_read13;
        ap_port_reg_p_read14 <= p_read14;
        ap_port_reg_p_read15 <= p_read15;
        ap_port_reg_p_read2 <= p_read2;
        ap_port_reg_p_read3 <= p_read3;
        ap_port_reg_p_read4 <= p_read4;
        ap_port_reg_p_read5 <= p_read5;
        ap_port_reg_p_read6 <= p_read6;
        ap_port_reg_p_read7 <= p_read7;
        ap_port_reg_p_read8 <= p_read8;
        ap_port_reg_p_read9 <= p_read9;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state8) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
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
    if ((1'b1 == ap_CS_fsm_state8)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        output_r_address0 = 64'd14;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        output_r_address0 = 64'd12;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        output_r_address0 = 64'd10;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        output_r_address0 = 64'd8;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        output_r_address0 = 64'd6;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        output_r_address0 = 64'd4;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        output_r_address0 = 64'd2;
    end else if ((1'b1 == ap_CS_fsm_state1)) begin
        output_r_address0 = 64'd0;
    end else begin
        output_r_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        output_r_address1 = 64'd15;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        output_r_address1 = 64'd13;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        output_r_address1 = 64'd11;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        output_r_address1 = 64'd9;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        output_r_address1 = 64'd7;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        output_r_address1 = 64'd5;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        output_r_address1 = 64'd3;
    end else if ((1'b1 == ap_CS_fsm_state1)) begin
        output_r_address1 = 64'd1;
    end else begin
        output_r_address1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | ((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1)))) begin
        output_r_ce0 = 1'b1;
    end else begin
        output_r_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | ((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1)))) begin
        output_r_ce1 = 1'b1;
    end else begin
        output_r_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        output_r_d0 = ap_port_reg_p_read14;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        output_r_d0 = ap_port_reg_p_read12;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        output_r_d0 = ap_port_reg_p_read10;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        output_r_d0 = ap_port_reg_p_read8;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        output_r_d0 = ap_port_reg_p_read6;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        output_r_d0 = ap_port_reg_p_read4;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        output_r_d0 = ap_port_reg_p_read2;
    end else if ((1'b1 == ap_CS_fsm_state1)) begin
        output_r_d0 = p_read;
    end else begin
        output_r_d0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        output_r_d1 = ap_port_reg_p_read15;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        output_r_d1 = ap_port_reg_p_read13;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        output_r_d1 = ap_port_reg_p_read11;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        output_r_d1 = ap_port_reg_p_read9;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        output_r_d1 = ap_port_reg_p_read7;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        output_r_d1 = ap_port_reg_p_read5;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        output_r_d1 = ap_port_reg_p_read3;
    end else if ((1'b1 == ap_CS_fsm_state1)) begin
        output_r_d1 = p_read1;
    end else begin
        output_r_d1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | ((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1)))) begin
        output_r_we0 = 1'b1;
    end else begin
        output_r_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | ((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1)))) begin
        output_r_we1 = 1'b1;
    end else begin
        output_r_we1 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            ap_NS_fsm = ap_ST_fsm_state3;
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
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

endmodule //write_data
