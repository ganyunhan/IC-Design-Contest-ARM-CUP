set moduleName feedForward
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {feedForward}
set C_modelType { void 0 }
set C_modelArgList {
	{ pattern float 32 regular {array 882 { 1 1 } 1 1 }  }
	{ output_0 float 32 regular {pointer 1} {global 1}  }
	{ output_1 float 32 regular {pointer 1} {global 1}  }
	{ output_2 float 32 regular {pointer 1} {global 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "pattern", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "output_0", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "output","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "output_1", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "output","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 1,"up" : 1,"step" : 2}]}]}], "extern" : 0} , 
 	{ "Name" : "output_2", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "output","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 2,"up" : 2,"step" : 2}]}]}], "extern" : 0} ]}
# RTL Port declarations: 
set portNum 18
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ pattern_address0 sc_out sc_lv 10 signal 0 } 
	{ pattern_ce0 sc_out sc_logic 1 signal 0 } 
	{ pattern_q0 sc_in sc_lv 32 signal 0 } 
	{ pattern_address1 sc_out sc_lv 10 signal 0 } 
	{ pattern_ce1 sc_out sc_logic 1 signal 0 } 
	{ pattern_q1 sc_in sc_lv 32 signal 0 } 
	{ output_0 sc_out sc_lv 32 signal 1 } 
	{ output_0_ap_vld sc_out sc_logic 1 outvld 1 } 
	{ output_1 sc_out sc_lv 32 signal 2 } 
	{ output_1_ap_vld sc_out sc_logic 1 outvld 2 } 
	{ output_2 sc_out sc_lv 32 signal 3 } 
	{ output_2_ap_vld sc_out sc_logic 1 outvld 3 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "pattern_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "pattern", "role": "address0" }} , 
 	{ "name": "pattern_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pattern", "role": "ce0" }} , 
 	{ "name": "pattern_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "pattern", "role": "q0" }} , 
 	{ "name": "pattern_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "pattern", "role": "address1" }} , 
 	{ "name": "pattern_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pattern", "role": "ce1" }} , 
 	{ "name": "pattern_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "pattern", "role": "q1" }} , 
 	{ "name": "output_0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "output_0", "role": "default" }} , 
 	{ "name": "output_0_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "output_0", "role": "ap_vld" }} , 
 	{ "name": "output_1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "output_1", "role": "default" }} , 
 	{ "name": "output_1_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "output_1", "role": "ap_vld" }} , 
 	{ "name": "output_2", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "output_2", "role": "default" }} , 
 	{ "name": "output_2_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "output_2", "role": "ap_vld" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11"],
		"CDFG" : "feedForward",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "380651", "EstimateLatencyMax" : "380651",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "pattern", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_r", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "weightIH", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "hidden", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "weightHO", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_0", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "output_1", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "output_2", "Type" : "Vld", "Direction" : "O"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.input_r_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weightIH_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.hidden_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weightHO_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.voicerec_fadd_32nncg_U38", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.voicerec_fmul_32ncud_U39", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.voicerec_fptrunc_hbi_U40", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.voicerec_fpext_32ibs_U41", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.voicerec_dadd_64nocq_U42", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.voicerec_ddiv_64npcA_U43", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.voicerec_dexp_64nqcK_U44", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	feedForward {
		pattern {Type I LastRead 441 FirstWrite -1}
		input_r {Type IO LastRead -1 FirstWrite -1}
		weightIH {Type I LastRead -1 FirstWrite -1}
		hidden {Type IO LastRead -1 FirstWrite -1}
		weightHO {Type I LastRead -1 FirstWrite -1}
		output_0 {Type O LastRead -1 FirstWrite 444}
		output_1 {Type O LastRead -1 FirstWrite 444}
		output_2 {Type O LastRead -1 FirstWrite 444}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "380651", "Max" : "380651"}
	, {"Name" : "Interval", "Min" : "380651", "Max" : "380651"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	pattern { ap_memory {  { pattern_address0 mem_address 1 10 }  { pattern_ce0 mem_ce 1 1 }  { pattern_q0 mem_dout 0 32 }  { pattern_address1 mem_address 1 10 }  { pattern_ce1 mem_ce 1 1 }  { pattern_q1 mem_dout 0 32 } } }
	output_0 { ap_vld {  { output_0 out_data 1 32 }  { output_0_ap_vld out_vld 1 1 } } }
	output_1 { ap_vld {  { output_1 out_data 1 32 }  { output_1_ap_vld out_vld 1 1 } } }
	output_2 { ap_vld {  { output_2 out_data 1 32 }  { output_2_ap_vld out_vld 1 1 } } }
}
