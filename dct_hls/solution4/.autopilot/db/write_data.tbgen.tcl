set moduleName write_data
set isCombinational 1
set isDatapathOnly 0
set isPipelined 0
set pipeline_type function
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set C_modelName {write_data}
set C_modelType { int 128 }
set C_modelArgList {
	{ buf_0_0_read int 8 regular  }
	{ buf_0_1_read int 8 regular  }
	{ buf_0_2_read int 8 regular  }
	{ buf_0_3_read int 8 regular  }
	{ buf_1_0_read int 8 regular  }
	{ buf_1_1_read int 8 regular  }
	{ buf_1_2_read int 8 regular  }
	{ buf_1_3_read int 8 regular  }
	{ buf_2_0_read int 8 regular  }
	{ buf_2_1_read int 8 regular  }
	{ buf_2_2_read int 8 regular  }
	{ buf_2_3_read int 8 regular  }
	{ buf_3_0_read int 8 regular  }
	{ buf_3_1_read int 8 regular  }
	{ buf_3_2_read int 8 regular  }
	{ buf_3_3_read int 8 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "buf_0_0_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "buf_0_1_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "buf_0_2_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "buf_0_3_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "buf_1_0_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "buf_1_1_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "buf_1_2_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "buf_1_3_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "buf_2_0_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "buf_2_1_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "buf_2_2_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "buf_2_3_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "buf_3_0_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "buf_3_1_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "buf_3_2_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "buf_3_3_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 128} ]}
# RTL Port declarations: 
set portNum 33
set portList { 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ buf_0_0_read sc_in sc_lv 8 signal 0 } 
	{ buf_0_1_read sc_in sc_lv 8 signal 1 } 
	{ buf_0_2_read sc_in sc_lv 8 signal 2 } 
	{ buf_0_3_read sc_in sc_lv 8 signal 3 } 
	{ buf_1_0_read sc_in sc_lv 8 signal 4 } 
	{ buf_1_1_read sc_in sc_lv 8 signal 5 } 
	{ buf_1_2_read sc_in sc_lv 8 signal 6 } 
	{ buf_1_3_read sc_in sc_lv 8 signal 7 } 
	{ buf_2_0_read sc_in sc_lv 8 signal 8 } 
	{ buf_2_1_read sc_in sc_lv 8 signal 9 } 
	{ buf_2_2_read sc_in sc_lv 8 signal 10 } 
	{ buf_2_3_read sc_in sc_lv 8 signal 11 } 
	{ buf_3_0_read sc_in sc_lv 8 signal 12 } 
	{ buf_3_1_read sc_in sc_lv 8 signal 13 } 
	{ buf_3_2_read sc_in sc_lv 8 signal 14 } 
	{ buf_3_3_read sc_in sc_lv 8 signal 15 } 
	{ ap_return_0 sc_out sc_lv 8 signal -1 } 
	{ ap_return_1 sc_out sc_lv 8 signal -1 } 
	{ ap_return_2 sc_out sc_lv 8 signal -1 } 
	{ ap_return_3 sc_out sc_lv 8 signal -1 } 
	{ ap_return_4 sc_out sc_lv 8 signal -1 } 
	{ ap_return_5 sc_out sc_lv 8 signal -1 } 
	{ ap_return_6 sc_out sc_lv 8 signal -1 } 
	{ ap_return_7 sc_out sc_lv 8 signal -1 } 
	{ ap_return_8 sc_out sc_lv 8 signal -1 } 
	{ ap_return_9 sc_out sc_lv 8 signal -1 } 
	{ ap_return_10 sc_out sc_lv 8 signal -1 } 
	{ ap_return_11 sc_out sc_lv 8 signal -1 } 
	{ ap_return_12 sc_out sc_lv 8 signal -1 } 
	{ ap_return_13 sc_out sc_lv 8 signal -1 } 
	{ ap_return_14 sc_out sc_lv 8 signal -1 } 
	{ ap_return_15 sc_out sc_lv 8 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "buf_0_0_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buf_0_0_read", "role": "default" }} , 
 	{ "name": "buf_0_1_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buf_0_1_read", "role": "default" }} , 
 	{ "name": "buf_0_2_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buf_0_2_read", "role": "default" }} , 
 	{ "name": "buf_0_3_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buf_0_3_read", "role": "default" }} , 
 	{ "name": "buf_1_0_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buf_1_0_read", "role": "default" }} , 
 	{ "name": "buf_1_1_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buf_1_1_read", "role": "default" }} , 
 	{ "name": "buf_1_2_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buf_1_2_read", "role": "default" }} , 
 	{ "name": "buf_1_3_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buf_1_3_read", "role": "default" }} , 
 	{ "name": "buf_2_0_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buf_2_0_read", "role": "default" }} , 
 	{ "name": "buf_2_1_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buf_2_1_read", "role": "default" }} , 
 	{ "name": "buf_2_2_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buf_2_2_read", "role": "default" }} , 
 	{ "name": "buf_2_3_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buf_2_3_read", "role": "default" }} , 
 	{ "name": "buf_3_0_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buf_3_0_read", "role": "default" }} , 
 	{ "name": "buf_3_1_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buf_3_1_read", "role": "default" }} , 
 	{ "name": "buf_3_2_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buf_3_2_read", "role": "default" }} , 
 	{ "name": "buf_3_3_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buf_3_3_read", "role": "default" }} , 
 	{ "name": "ap_return_0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ap_return_0", "role": "default" }} , 
 	{ "name": "ap_return_1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ap_return_1", "role": "default" }} , 
 	{ "name": "ap_return_2", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ap_return_2", "role": "default" }} , 
 	{ "name": "ap_return_3", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ap_return_3", "role": "default" }} , 
 	{ "name": "ap_return_4", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ap_return_4", "role": "default" }} , 
 	{ "name": "ap_return_5", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ap_return_5", "role": "default" }} , 
 	{ "name": "ap_return_6", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ap_return_6", "role": "default" }} , 
 	{ "name": "ap_return_7", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ap_return_7", "role": "default" }} , 
 	{ "name": "ap_return_8", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ap_return_8", "role": "default" }} , 
 	{ "name": "ap_return_9", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ap_return_9", "role": "default" }} , 
 	{ "name": "ap_return_10", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ap_return_10", "role": "default" }} , 
 	{ "name": "ap_return_11", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ap_return_11", "role": "default" }} , 
 	{ "name": "ap_return_12", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ap_return_12", "role": "default" }} , 
 	{ "name": "ap_return_13", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ap_return_13", "role": "default" }} , 
 	{ "name": "ap_return_14", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ap_return_14", "role": "default" }} , 
 	{ "name": "ap_return_15", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ap_return_15", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "write_data",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"FunctionPipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "buf_0_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buf_0_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buf_0_2_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buf_0_3_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buf_1_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buf_1_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buf_1_2_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buf_1_3_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buf_2_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buf_2_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buf_2_2_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buf_2_3_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buf_3_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buf_3_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buf_3_2_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buf_3_3_read", "Type" : "None", "Direction" : "I"}]}]}


set ArgLastReadFirstWriteLatency {
	write_data {
		buf_0_0_read {Type I LastRead 0 FirstWrite -1}
		buf_0_1_read {Type I LastRead 0 FirstWrite -1}
		buf_0_2_read {Type I LastRead 0 FirstWrite -1}
		buf_0_3_read {Type I LastRead 0 FirstWrite -1}
		buf_1_0_read {Type I LastRead 0 FirstWrite -1}
		buf_1_1_read {Type I LastRead 0 FirstWrite -1}
		buf_1_2_read {Type I LastRead 0 FirstWrite -1}
		buf_1_3_read {Type I LastRead 0 FirstWrite -1}
		buf_2_0_read {Type I LastRead 0 FirstWrite -1}
		buf_2_1_read {Type I LastRead 0 FirstWrite -1}
		buf_2_2_read {Type I LastRead 0 FirstWrite -1}
		buf_2_3_read {Type I LastRead 0 FirstWrite -1}
		buf_3_0_read {Type I LastRead 0 FirstWrite -1}
		buf_3_1_read {Type I LastRead 0 FirstWrite -1}
		buf_3_2_read {Type I LastRead 0 FirstWrite -1}
		buf_3_3_read {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "0", "Max" : "0"}
	, {"Name" : "Interval", "Min" : "1", "Max" : "1"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	buf_0_0_read { ap_none {  { buf_0_0_read in_data 0 8 } } }
	buf_0_1_read { ap_none {  { buf_0_1_read in_data 0 8 } } }
	buf_0_2_read { ap_none {  { buf_0_2_read in_data 0 8 } } }
	buf_0_3_read { ap_none {  { buf_0_3_read in_data 0 8 } } }
	buf_1_0_read { ap_none {  { buf_1_0_read in_data 0 8 } } }
	buf_1_1_read { ap_none {  { buf_1_1_read in_data 0 8 } } }
	buf_1_2_read { ap_none {  { buf_1_2_read in_data 0 8 } } }
	buf_1_3_read { ap_none {  { buf_1_3_read in_data 0 8 } } }
	buf_2_0_read { ap_none {  { buf_2_0_read in_data 0 8 } } }
	buf_2_1_read { ap_none {  { buf_2_1_read in_data 0 8 } } }
	buf_2_2_read { ap_none {  { buf_2_2_read in_data 0 8 } } }
	buf_2_3_read { ap_none {  { buf_2_3_read in_data 0 8 } } }
	buf_3_0_read { ap_none {  { buf_3_0_read in_data 0 8 } } }
	buf_3_1_read { ap_none {  { buf_3_1_read in_data 0 8 } } }
	buf_3_2_read { ap_none {  { buf_3_2_read in_data 0 8 } } }
	buf_3_3_read { ap_none {  { buf_3_3_read in_data 0 8 } } }
}