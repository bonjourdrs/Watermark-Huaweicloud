#include "hls_design_meta.h"
const Port_Property HLS_Design_Meta::port_props[]={
	Port_Property("ap_clk", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_rst", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_start", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_done", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_idle", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_ready", 1, hls_out, -1, "", "", 1),
	Port_Property("indata_address0", 4, hls_out, 0, "ap_memory", "mem_address", 1),
	Port_Property("indata_ce0", 1, hls_out, 0, "ap_memory", "mem_ce", 1),
	Port_Property("indata_q0", 8, hls_in, 0, "ap_memory", "mem_dout", 1),
	Port_Property("indata_address1", 4, hls_out, 0, "ap_memory", "mem_address", 1),
	Port_Property("indata_ce1", 1, hls_out, 0, "ap_memory", "mem_ce", 1),
	Port_Property("indata_q1", 8, hls_in, 0, "ap_memory", "mem_dout", 1),
	Port_Property("outdata_address0", 4, hls_out, 1, "ap_memory", "mem_address", 1),
	Port_Property("outdata_ce0", 1, hls_out, 1, "ap_memory", "mem_ce", 1),
	Port_Property("outdata_we0", 1, hls_out, 1, "ap_memory", "mem_we", 1),
	Port_Property("outdata_d0", 8, hls_out, 1, "ap_memory", "mem_din", 1),
	Port_Property("outdata_address1", 4, hls_out, 1, "ap_memory", "mem_address", 1),
	Port_Property("outdata_ce1", 1, hls_out, 1, "ap_memory", "mem_ce", 1),
	Port_Property("outdata_we1", 1, hls_out, 1, "ap_memory", "mem_we", 1),
	Port_Property("outdata_d1", 8, hls_out, 1, "ap_memory", "mem_din", 1),
	Port_Property("temp_address0", 4, hls_out, 2, "ap_memory", "mem_address", 1),
	Port_Property("temp_ce0", 1, hls_out, 2, "ap_memory", "mem_ce", 1),
	Port_Property("temp_we0", 1, hls_out, 2, "ap_memory", "mem_we", 1),
	Port_Property("temp_d0", 16, hls_out, 2, "ap_memory", "mem_din", 1),
	Port_Property("temp_q0", 16, hls_in, 2, "ap_memory", "mem_dout", 1),
	Port_Property("temp_address1", 4, hls_out, 2, "ap_memory", "mem_address", 1),
	Port_Property("temp_ce1", 1, hls_out, 2, "ap_memory", "mem_ce", 1),
	Port_Property("temp_we1", 1, hls_out, 2, "ap_memory", "mem_we", 1),
	Port_Property("temp_d1", 16, hls_out, 2, "ap_memory", "mem_din", 1),
	Port_Property("temp_q1", 16, hls_in, 2, "ap_memory", "mem_dout", 1),
	Port_Property("temp1_address0", 4, hls_out, 3, "ap_memory", "mem_address", 1),
	Port_Property("temp1_ce0", 1, hls_out, 3, "ap_memory", "mem_ce", 1),
	Port_Property("temp1_we0", 1, hls_out, 3, "ap_memory", "mem_we", 1),
	Port_Property("temp1_d0", 16, hls_out, 3, "ap_memory", "mem_din", 1),
	Port_Property("temp1_q0", 16, hls_in, 3, "ap_memory", "mem_dout", 1),
	Port_Property("temp1_address1", 4, hls_out, 3, "ap_memory", "mem_address", 1),
	Port_Property("temp1_ce1", 1, hls_out, 3, "ap_memory", "mem_ce", 1),
	Port_Property("temp1_we1", 1, hls_out, 3, "ap_memory", "mem_we", 1),
	Port_Property("temp1_d1", 16, hls_out, 3, "ap_memory", "mem_din", 1),
	Port_Property("temp1_q1", 16, hls_in, 3, "ap_memory", "mem_dout", 1),
};
const char* HLS_Design_Meta::dut_name = "add_watermark";