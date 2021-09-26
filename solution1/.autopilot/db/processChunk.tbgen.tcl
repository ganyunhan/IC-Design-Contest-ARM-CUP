set moduleName processChunk
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
set C_modelName {processChunk}
set C_modelType { void 0 }
set C_modelArgList {
	{ sp int 14 regular  }
	{ ret float 32 regular {array 882 { 0 3 } 0 1 }  }
	{ ret_offset int 7 regular  }
	{ inputSound float 32 regular {array 8000 { 1 3 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "sp", "interface" : "wire", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "ret", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "ret_offset", "interface" : "wire", "bitwidth" : 7, "direction" : "READONLY"} , 
 	{ "Name" : "inputSound", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 15
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ sp sc_in sc_lv 14 signal 0 } 
	{ ret_address0 sc_out sc_lv 10 signal 1 } 
	{ ret_ce0 sc_out sc_logic 1 signal 1 } 
	{ ret_we0 sc_out sc_logic 1 signal 1 } 
	{ ret_d0 sc_out sc_lv 32 signal 1 } 
	{ ret_offset sc_in sc_lv 7 signal 2 } 
	{ inputSound_address0 sc_out sc_lv 13 signal 3 } 
	{ inputSound_ce0 sc_out sc_logic 1 signal 3 } 
	{ inputSound_q0 sc_in sc_lv 32 signal 3 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "sp", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "sp", "role": "default" }} , 
 	{ "name": "ret_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "ret", "role": "address0" }} , 
 	{ "name": "ret_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ret", "role": "ce0" }} , 
 	{ "name": "ret_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ret", "role": "we0" }} , 
 	{ "name": "ret_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ret", "role": "d0" }} , 
 	{ "name": "ret_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ret_offset", "role": "default" }} , 
 	{ "name": "inputSound_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "inputSound", "role": "address0" }} , 
 	{ "name": "inputSound_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inputSound", "role": "ce0" }} , 
 	{ "name": "inputSound_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inputSound", "role": "q0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "16", "17", "18", "19", "20", "21", "22", "23", "24"],
		"CDFG" : "processChunk",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "39048", "EstimateLatencyMax" : "3324624",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state6", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_FFT_fu_418"}],
		"Port" : [
			{"Name" : "sp", "Type" : "None", "Direction" : "I"},
			{"Name" : "ret", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "ret_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "inputSound", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "c", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "grp_FFT_fu_418", "Port" : "c"}]},
			{"Name" : "e", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "cosVec", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "grp_FFT_fu_418", "Port" : "cosVec"}]},
			{"Name" : "sinVec", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "grp_FFT_fu_418", "Port" : "sinVec"}]},
			{"Name" : "spec", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "mell", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dctMatrix", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.e_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.spec_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mell_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dctMatrix_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_FFT_fu_418", "Parent" : "0", "Child" : ["7", "8", "9", "10", "11", "12", "13", "14", "15"],
		"CDFG" : "FFT",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "22530", "EstimateLatencyMax" : "3301122",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "c", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "cosVec", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "sinVec", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FFT_fu_418.cosVec_U", "Parent" : "6"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FFT_fu_418.sinVec_U", "Parent" : "6"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FFT_fu_418.voicerec_faddfsubbkb_U1", "Parent" : "6"},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FFT_fu_418.voicerec_faddfsubbkb_U2", "Parent" : "6"},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FFT_fu_418.voicerec_fmul_32ncud_U3", "Parent" : "6"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FFT_fu_418.voicerec_fmul_32ncud_U4", "Parent" : "6"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FFT_fu_418.voicerec_fmul_32ncud_U5", "Parent" : "6"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FFT_fu_418.voicerec_fmul_32ncud_U6", "Parent" : "6"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FFT_fu_418.voicerec_sdiv_11ndEe_U7", "Parent" : "6"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.voicerec_faddfsubbkb_U14", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.voicerec_fmul_32ncud_U15", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.voicerec_fmul_32ncud_U16", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.voicerec_fdiv_32nfYi_U17", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.voicerec_uitofp_3g8j_U18", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.voicerec_fptrunc_hbi_U19", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.voicerec_fpext_32ibs_U20", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.voicerec_fcmp_32njbC_U21", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.voicerec_dmul_64nkbM_U22", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	processChunk {
		sp {Type I LastRead 0 FirstWrite -1}
		ret {Type O LastRead -1 FirstWrite 22}
		ret_offset {Type I LastRead 0 FirstWrite -1}
		inputSound {Type I LastRead 2 FirstWrite -1}
		c {Type IO LastRead -1 FirstWrite -1}
		e {Type IO LastRead -1 FirstWrite -1}
		cosVec {Type I LastRead -1 FirstWrite -1}
		sinVec {Type I LastRead -1 FirstWrite -1}
		spec {Type IO LastRead -1 FirstWrite -1}
		mell {Type I LastRead -1 FirstWrite -1}
		dctMatrix {Type I LastRead -1 FirstWrite -1}}
	FFT {
		c {Type IO LastRead 22 FirstWrite 4}
		cosVec {Type I LastRead -1 FirstWrite -1}
		sinVec {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "39048", "Max" : "3324624"}
	, {"Name" : "Interval", "Min" : "39048", "Max" : "3324624"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	sp { ap_none {  { sp in_data 0 14 } } }
	ret { ap_memory {  { ret_address0 mem_address 1 10 }  { ret_ce0 mem_ce 1 1 }  { ret_we0 mem_we 1 1 }  { ret_d0 mem_din 1 32 } } }
	ret_offset { ap_none {  { ret_offset in_data 0 7 } } }
	inputSound { ap_memory {  { inputSound_address0 mem_address 1 13 }  { inputSound_ce0 mem_ce 1 1 }  { inputSound_q0 mem_dout 0 32 } } }
}
