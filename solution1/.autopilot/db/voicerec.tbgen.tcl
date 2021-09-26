set C_TypeInfoList {{ 
"voicerec" : [[], {"return": [[], {"scalar": "int"}] }, [{"ExternC" : 0}], [ {"new_sample": [[],{ "pointer":  {"scalar": "int"}}] }, {"guess": [[],{ "pointer":  {"scalar": "int"}}] }],["0","1","2","3","4","5","6"],""],
 "0": [ "spec", [[], {"array": [ {"scalar": "float"}, [256]]}],""],
 "1": [ "result", [[], {"array": [ {"scalar": "float"}, [63,14]]}],""],
 "2": [ "output", [[], {"array": [ {"scalar": "float"}, [3]]}],""],
 "3": [ "input", [[], {"array": [ {"scalar": "float"}, [883]]}],""],
 "4": [ "hidden", [[], {"array": [ {"scalar": "float"}, [26]]}],""],
 "5": [ "e", [[], {"array": [ {"scalar": "float"}, [26]]}],""],
 "6": [ "c", [[], {"array": [ {"scalar": "float"}, [512]]}],""]
}}
set moduleName voicerec
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
set C_modelName {voicerec}
set C_modelType { int 32 }
set C_modelArgList {
	{ voice_rec int 32 regular {axi_master 0}  }
	{ new_sample int 32 regular {axi_slave 0}  }
	{ guess int 32 regular {pointer 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "voice_rec", "interface" : "axi_master", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "new_sample","cData": "int","bit_use": { "low": 0,"up": 31},"offset": { "type": "dynamic","port_name": "new_sample","bundle": "AXILiteS"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 7999,"step" : 1}]}]}]} , 
 	{ "Name" : "new_sample", "interface" : "axi_slave", "bundle":"voice_rec","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":24}, "offset_end" : {"in":31}} , 
 	{ "Name" : "guess", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "guess","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "ap_return", "interface" : "axi_slave", "bundle":"voice_rec","type":"ap_none","bitwidth" : 32,"bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "return","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 1,"step" : 0}]}]}], "offset" : {"out":16}} ]}
# RTL Port declarations: 
set portNum 66
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ m_axi_voice_rec_AWVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_voice_rec_AWREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_voice_rec_AWADDR sc_out sc_lv 32 signal 0 } 
	{ m_axi_voice_rec_AWID sc_out sc_lv 1 signal 0 } 
	{ m_axi_voice_rec_AWLEN sc_out sc_lv 8 signal 0 } 
	{ m_axi_voice_rec_AWSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_voice_rec_AWBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_voice_rec_AWLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_voice_rec_AWCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_voice_rec_AWPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_voice_rec_AWQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_voice_rec_AWREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_voice_rec_AWUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_voice_rec_WVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_voice_rec_WREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_voice_rec_WDATA sc_out sc_lv 32 signal 0 } 
	{ m_axi_voice_rec_WSTRB sc_out sc_lv 4 signal 0 } 
	{ m_axi_voice_rec_WLAST sc_out sc_logic 1 signal 0 } 
	{ m_axi_voice_rec_WID sc_out sc_lv 1 signal 0 } 
	{ m_axi_voice_rec_WUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_voice_rec_ARVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_voice_rec_ARREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_voice_rec_ARADDR sc_out sc_lv 32 signal 0 } 
	{ m_axi_voice_rec_ARID sc_out sc_lv 1 signal 0 } 
	{ m_axi_voice_rec_ARLEN sc_out sc_lv 8 signal 0 } 
	{ m_axi_voice_rec_ARSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_voice_rec_ARBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_voice_rec_ARLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_voice_rec_ARCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_voice_rec_ARPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_voice_rec_ARQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_voice_rec_ARREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_voice_rec_ARUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_voice_rec_RVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_voice_rec_RREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_voice_rec_RDATA sc_in sc_lv 32 signal 0 } 
	{ m_axi_voice_rec_RLAST sc_in sc_logic 1 signal 0 } 
	{ m_axi_voice_rec_RID sc_in sc_lv 1 signal 0 } 
	{ m_axi_voice_rec_RUSER sc_in sc_lv 1 signal 0 } 
	{ m_axi_voice_rec_RRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_voice_rec_BVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_voice_rec_BREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_voice_rec_BRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_voice_rec_BID sc_in sc_lv 1 signal 0 } 
	{ m_axi_voice_rec_BUSER sc_in sc_lv 1 signal 0 } 
	{ guess sc_out sc_lv 32 signal 2 } 
	{ s_axi_voice_rec_AWVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_voice_rec_AWREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_voice_rec_AWADDR sc_in sc_lv 5 signal -1 } 
	{ s_axi_voice_rec_WVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_voice_rec_WREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_voice_rec_WDATA sc_in sc_lv 32 signal -1 } 
	{ s_axi_voice_rec_WSTRB sc_in sc_lv 4 signal -1 } 
	{ s_axi_voice_rec_ARVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_voice_rec_ARREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_voice_rec_ARADDR sc_in sc_lv 5 signal -1 } 
	{ s_axi_voice_rec_RVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_voice_rec_RREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_voice_rec_RDATA sc_out sc_lv 32 signal -1 } 
	{ s_axi_voice_rec_RRESP sc_out sc_lv 2 signal -1 } 
	{ s_axi_voice_rec_BVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_voice_rec_BREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_voice_rec_BRESP sc_out sc_lv 2 signal -1 } 
	{ interrupt sc_out sc_logic 1 signal -1 } 
}
set NewPortList {[ 
	{ "name": "s_axi_voice_rec_AWADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "voice_rec", "role": "AWADDR" },"address":[{"name":"voicerec","role":"start","value":"0","valid_bit":"0"},{"name":"voicerec","role":"continue","value":"0","valid_bit":"4"},{"name":"voicerec","role":"auto_start","value":"0","valid_bit":"7"},{"name":"new_sample","role":"data","value":"24"}] },
	{ "name": "s_axi_voice_rec_AWVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voice_rec", "role": "AWVALID" } },
	{ "name": "s_axi_voice_rec_AWREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voice_rec", "role": "AWREADY" } },
	{ "name": "s_axi_voice_rec_WVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voice_rec", "role": "WVALID" } },
	{ "name": "s_axi_voice_rec_WREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voice_rec", "role": "WREADY" } },
	{ "name": "s_axi_voice_rec_WDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "voice_rec", "role": "WDATA" } },
	{ "name": "s_axi_voice_rec_WSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "voice_rec", "role": "WSTRB" } },
	{ "name": "s_axi_voice_rec_ARADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "voice_rec", "role": "ARADDR" },"address":[{"name":"voicerec","role":"start","value":"0","valid_bit":"0"},{"name":"voicerec","role":"done","value":"0","valid_bit":"1"},{"name":"voicerec","role":"idle","value":"0","valid_bit":"2"},{"name":"voicerec","role":"ready","value":"0","valid_bit":"3"},{"name":"voicerec","role":"auto_start","value":"0","valid_bit":"7"},{"name":"return","role":"data","value":"16"}] },
	{ "name": "s_axi_voice_rec_ARVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voice_rec", "role": "ARVALID" } },
	{ "name": "s_axi_voice_rec_ARREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voice_rec", "role": "ARREADY" } },
	{ "name": "s_axi_voice_rec_RVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voice_rec", "role": "RVALID" } },
	{ "name": "s_axi_voice_rec_RREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voice_rec", "role": "RREADY" } },
	{ "name": "s_axi_voice_rec_RDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "voice_rec", "role": "RDATA" } },
	{ "name": "s_axi_voice_rec_RRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "voice_rec", "role": "RRESP" } },
	{ "name": "s_axi_voice_rec_BVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voice_rec", "role": "BVALID" } },
	{ "name": "s_axi_voice_rec_BREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voice_rec", "role": "BREADY" } },
	{ "name": "s_axi_voice_rec_BRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "voice_rec", "role": "BRESP" } },
	{ "name": "interrupt", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voice_rec", "role": "interrupt" } }, 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }} , 
 	{ "name": "m_axi_voice_rec_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voice_rec", "role": "AWVALID" }} , 
 	{ "name": "m_axi_voice_rec_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voice_rec", "role": "AWREADY" }} , 
 	{ "name": "m_axi_voice_rec_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "voice_rec", "role": "AWADDR" }} , 
 	{ "name": "m_axi_voice_rec_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "voice_rec", "role": "AWID" }} , 
 	{ "name": "m_axi_voice_rec_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "voice_rec", "role": "AWLEN" }} , 
 	{ "name": "m_axi_voice_rec_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "voice_rec", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_voice_rec_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "voice_rec", "role": "AWBURST" }} , 
 	{ "name": "m_axi_voice_rec_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "voice_rec", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_voice_rec_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "voice_rec", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_voice_rec_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "voice_rec", "role": "AWPROT" }} , 
 	{ "name": "m_axi_voice_rec_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "voice_rec", "role": "AWQOS" }} , 
 	{ "name": "m_axi_voice_rec_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "voice_rec", "role": "AWREGION" }} , 
 	{ "name": "m_axi_voice_rec_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "voice_rec", "role": "AWUSER" }} , 
 	{ "name": "m_axi_voice_rec_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voice_rec", "role": "WVALID" }} , 
 	{ "name": "m_axi_voice_rec_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voice_rec", "role": "WREADY" }} , 
 	{ "name": "m_axi_voice_rec_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "voice_rec", "role": "WDATA" }} , 
 	{ "name": "m_axi_voice_rec_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "voice_rec", "role": "WSTRB" }} , 
 	{ "name": "m_axi_voice_rec_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voice_rec", "role": "WLAST" }} , 
 	{ "name": "m_axi_voice_rec_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "voice_rec", "role": "WID" }} , 
 	{ "name": "m_axi_voice_rec_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "voice_rec", "role": "WUSER" }} , 
 	{ "name": "m_axi_voice_rec_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voice_rec", "role": "ARVALID" }} , 
 	{ "name": "m_axi_voice_rec_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voice_rec", "role": "ARREADY" }} , 
 	{ "name": "m_axi_voice_rec_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "voice_rec", "role": "ARADDR" }} , 
 	{ "name": "m_axi_voice_rec_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "voice_rec", "role": "ARID" }} , 
 	{ "name": "m_axi_voice_rec_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "voice_rec", "role": "ARLEN" }} , 
 	{ "name": "m_axi_voice_rec_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "voice_rec", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_voice_rec_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "voice_rec", "role": "ARBURST" }} , 
 	{ "name": "m_axi_voice_rec_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "voice_rec", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_voice_rec_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "voice_rec", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_voice_rec_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "voice_rec", "role": "ARPROT" }} , 
 	{ "name": "m_axi_voice_rec_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "voice_rec", "role": "ARQOS" }} , 
 	{ "name": "m_axi_voice_rec_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "voice_rec", "role": "ARREGION" }} , 
 	{ "name": "m_axi_voice_rec_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "voice_rec", "role": "ARUSER" }} , 
 	{ "name": "m_axi_voice_rec_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voice_rec", "role": "RVALID" }} , 
 	{ "name": "m_axi_voice_rec_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voice_rec", "role": "RREADY" }} , 
 	{ "name": "m_axi_voice_rec_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "voice_rec", "role": "RDATA" }} , 
 	{ "name": "m_axi_voice_rec_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voice_rec", "role": "RLAST" }} , 
 	{ "name": "m_axi_voice_rec_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "voice_rec", "role": "RID" }} , 
 	{ "name": "m_axi_voice_rec_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "voice_rec", "role": "RUSER" }} , 
 	{ "name": "m_axi_voice_rec_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "voice_rec", "role": "RRESP" }} , 
 	{ "name": "m_axi_voice_rec_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voice_rec", "role": "BVALID" }} , 
 	{ "name": "m_axi_voice_rec_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voice_rec", "role": "BREADY" }} , 
 	{ "name": "m_axi_voice_rec_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "voice_rec", "role": "BRESP" }} , 
 	{ "name": "m_axi_voice_rec_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "voice_rec", "role": "BID" }} , 
 	{ "name": "m_axi_voice_rec_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "voice_rec", "role": "BUSER" }} , 
 	{ "name": "guess", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "guess", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "19", "44", "45", "46", "47", "48"],
		"CDFG" : "voicerec",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "600025", "EstimateLatencyMax" : "203786529",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state218", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_feedForward_fu_640"},
			{"State" : "ap_ST_fsm_state92", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state94", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state96", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state98", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state100", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state102", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state104", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state106", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state108", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state110", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state112", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state114", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state116", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state118", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state120", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state122", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state124", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state126", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state128", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state130", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state132", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state134", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state136", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state138", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state140", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state142", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state144", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state146", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state148", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state150", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state152", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state154", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state156", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state158", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state160", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state162", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state164", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state166", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state168", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state170", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state172", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state174", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state176", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state178", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state180", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state182", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state184", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state186", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state188", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state190", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state192", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state194", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state196", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state198", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state200", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state202", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state204", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state206", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state208", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state210", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"},
			{"State" : "ap_ST_fsm_state212", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_processChunk_fu_659"}],
		"Port" : [
			{"Name" : "voice_rec", "Type" : "MAXI", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "voice_rec_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "voice_rec_blk_n_R", "Type" : "RtlSignal"}]},
			{"Name" : "new_sample", "Type" : "None", "Direction" : "I"},
			{"Name" : "guess", "Type" : "None", "Direction" : "O"},
			{"Name" : "testSound", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "inSound", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "grp_processChunk_fu_659", "Port" : "inputSound"}]},
			{"Name" : "c", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "grp_processChunk_fu_659", "Port" : "c"}]},
			{"Name" : "e", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "grp_processChunk_fu_659", "Port" : "e"}]},
			{"Name" : "cosVec", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "grp_processChunk_fu_659", "Port" : "cosVec"}]},
			{"Name" : "sinVec", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "grp_processChunk_fu_659", "Port" : "sinVec"}]},
			{"Name" : "spec", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "grp_processChunk_fu_659", "Port" : "spec"}]},
			{"Name" : "mell", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "grp_processChunk_fu_659", "Port" : "mell"}]},
			{"Name" : "dctMatrix", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "grp_processChunk_fu_659", "Port" : "dctMatrix"}]},
			{"Name" : "result", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "grp_processChunk_fu_659", "Port" : "ret"}]},
			{"Name" : "input_r", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "7", "SubInstance" : "grp_feedForward_fu_640", "Port" : "input_r"}]},
			{"Name" : "weightIH", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "7", "SubInstance" : "grp_feedForward_fu_640", "Port" : "weightIH"}]},
			{"Name" : "hidden", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "7", "SubInstance" : "grp_feedForward_fu_640", "Port" : "hidden"}]},
			{"Name" : "weightHO", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "7", "SubInstance" : "grp_feedForward_fu_640", "Port" : "weightHO"}]},
			{"Name" : "output_0", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "7", "SubInstance" : "grp_feedForward_fu_640", "Port" : "output_0"}]},
			{"Name" : "output_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "7", "SubInstance" : "grp_feedForward_fu_640", "Port" : "output_1"}]},
			{"Name" : "output_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "7", "SubInstance" : "grp_feedForward_fu_640", "Port" : "output_2"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.testSound_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.inSound_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.result_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.voicerec_voice_rec_s_axi_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.voicerec_voice_rec_m_axi_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.flatInput_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_feedForward_fu_640", "Parent" : "0", "Child" : ["8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18"],
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
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_feedForward_fu_640.input_r_U", "Parent" : "7"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_feedForward_fu_640.weightIH_U", "Parent" : "7"},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_feedForward_fu_640.hidden_U", "Parent" : "7"},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_feedForward_fu_640.weightHO_U", "Parent" : "7"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_feedForward_fu_640.voicerec_fadd_32nncg_U38", "Parent" : "7"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_feedForward_fu_640.voicerec_fmul_32ncud_U39", "Parent" : "7"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_feedForward_fu_640.voicerec_fptrunc_hbi_U40", "Parent" : "7"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_feedForward_fu_640.voicerec_fpext_32ibs_U41", "Parent" : "7"},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_feedForward_fu_640.voicerec_dadd_64nocq_U42", "Parent" : "7"},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_feedForward_fu_640.voicerec_ddiv_64npcA_U43", "Parent" : "7"},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_feedForward_fu_640.voicerec_dexp_64nqcK_U44", "Parent" : "7"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_processChunk_fu_659", "Parent" : "0", "Child" : ["20", "21", "22", "23", "24", "25", "35", "36", "37", "38", "39", "40", "41", "42", "43"],
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
					{"ID" : "25", "SubInstance" : "grp_FFT_fu_418", "Port" : "c"}]},
			{"Name" : "e", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "cosVec", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "25", "SubInstance" : "grp_FFT_fu_418", "Port" : "cosVec"}]},
			{"Name" : "sinVec", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "25", "SubInstance" : "grp_FFT_fu_418", "Port" : "sinVec"}]},
			{"Name" : "spec", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "mell", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dctMatrix", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_processChunk_fu_659.c_U", "Parent" : "19"},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_processChunk_fu_659.e_U", "Parent" : "19"},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_processChunk_fu_659.spec_U", "Parent" : "19"},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_processChunk_fu_659.mell_U", "Parent" : "19"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_processChunk_fu_659.dctMatrix_U", "Parent" : "19"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_processChunk_fu_659.grp_FFT_fu_418", "Parent" : "19", "Child" : ["26", "27", "28", "29", "30", "31", "32", "33", "34"],
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
	{"ID" : "26", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_processChunk_fu_659.grp_FFT_fu_418.cosVec_U", "Parent" : "25"},
	{"ID" : "27", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_processChunk_fu_659.grp_FFT_fu_418.sinVec_U", "Parent" : "25"},
	{"ID" : "28", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_processChunk_fu_659.grp_FFT_fu_418.voicerec_faddfsubbkb_U1", "Parent" : "25"},
	{"ID" : "29", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_processChunk_fu_659.grp_FFT_fu_418.voicerec_faddfsubbkb_U2", "Parent" : "25"},
	{"ID" : "30", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_processChunk_fu_659.grp_FFT_fu_418.voicerec_fmul_32ncud_U3", "Parent" : "25"},
	{"ID" : "31", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_processChunk_fu_659.grp_FFT_fu_418.voicerec_fmul_32ncud_U4", "Parent" : "25"},
	{"ID" : "32", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_processChunk_fu_659.grp_FFT_fu_418.voicerec_fmul_32ncud_U5", "Parent" : "25"},
	{"ID" : "33", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_processChunk_fu_659.grp_FFT_fu_418.voicerec_fmul_32ncud_U6", "Parent" : "25"},
	{"ID" : "34", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_processChunk_fu_659.grp_FFT_fu_418.voicerec_sdiv_11ndEe_U7", "Parent" : "25"},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_processChunk_fu_659.voicerec_faddfsubbkb_U14", "Parent" : "19"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_processChunk_fu_659.voicerec_fmul_32ncud_U15", "Parent" : "19"},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_processChunk_fu_659.voicerec_fmul_32ncud_U16", "Parent" : "19"},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_processChunk_fu_659.voicerec_fdiv_32nfYi_U17", "Parent" : "19"},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_processChunk_fu_659.voicerec_uitofp_3g8j_U18", "Parent" : "19"},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_processChunk_fu_659.voicerec_fptrunc_hbi_U19", "Parent" : "19"},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_processChunk_fu_659.voicerec_fpext_32ibs_U20", "Parent" : "19"},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_processChunk_fu_659.voicerec_fcmp_32njbC_U21", "Parent" : "19"},
	{"ID" : "43", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_processChunk_fu_659.voicerec_dmul_64nkbM_U22", "Parent" : "19"},
	{"ID" : "44", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.voicerec_fptrunc_hbi_U56", "Parent" : "0"},
	{"ID" : "45", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.voicerec_fcmp_32njbC_U57", "Parent" : "0"},
	{"ID" : "46", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.voicerec_ddiv_64npcA_U58", "Parent" : "0"},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.voicerec_sitodp_3rcU_U59", "Parent" : "0"},
	{"ID" : "48", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.voicerec_mux_32_3sc4_U60", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	voicerec {
		voice_rec {Type I LastRead 9 FirstWrite -1}
		new_sample {Type I LastRead 0 FirstWrite -1}
		guess {Type O LastRead -1 FirstWrite 142}
		testSound {Type IO LastRead -1 FirstWrite -1}
		inSound {Type IO LastRead -1 FirstWrite -1}
		c {Type IO LastRead -1 FirstWrite -1}
		e {Type IO LastRead -1 FirstWrite -1}
		cosVec {Type I LastRead -1 FirstWrite -1}
		sinVec {Type I LastRead -1 FirstWrite -1}
		spec {Type IO LastRead -1 FirstWrite -1}
		mell {Type I LastRead -1 FirstWrite -1}
		dctMatrix {Type I LastRead -1 FirstWrite -1}
		result {Type IO LastRead -1 FirstWrite -1}
		input_r {Type IO LastRead -1 FirstWrite -1}
		weightIH {Type I LastRead -1 FirstWrite -1}
		hidden {Type IO LastRead -1 FirstWrite -1}
		weightHO {Type I LastRead -1 FirstWrite -1}
		output_0 {Type IO LastRead -1 FirstWrite -1}
		output_1 {Type IO LastRead -1 FirstWrite -1}
		output_2 {Type IO LastRead -1 FirstWrite -1}}
	feedForward {
		pattern {Type I LastRead 441 FirstWrite -1}
		input_r {Type IO LastRead -1 FirstWrite -1}
		weightIH {Type I LastRead -1 FirstWrite -1}
		hidden {Type IO LastRead -1 FirstWrite -1}
		weightHO {Type I LastRead -1 FirstWrite -1}
		output_0 {Type O LastRead -1 FirstWrite 444}
		output_1 {Type O LastRead -1 FirstWrite 444}
		output_2 {Type O LastRead -1 FirstWrite 444}}
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
	{"Name" : "Latency", "Min" : "600025", "Max" : "203786529"}
	, {"Name" : "Interval", "Min" : "600026", "Max" : "203786530"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	voice_rec { m_axi {  { m_axi_voice_rec_AWVALID VALID 1 1 }  { m_axi_voice_rec_AWREADY READY 0 1 }  { m_axi_voice_rec_AWADDR ADDR 1 32 }  { m_axi_voice_rec_AWID ID 1 1 }  { m_axi_voice_rec_AWLEN LEN 1 8 }  { m_axi_voice_rec_AWSIZE SIZE 1 3 }  { m_axi_voice_rec_AWBURST BURST 1 2 }  { m_axi_voice_rec_AWLOCK LOCK 1 2 }  { m_axi_voice_rec_AWCACHE CACHE 1 4 }  { m_axi_voice_rec_AWPROT PROT 1 3 }  { m_axi_voice_rec_AWQOS QOS 1 4 }  { m_axi_voice_rec_AWREGION REGION 1 4 }  { m_axi_voice_rec_AWUSER USER 1 1 }  { m_axi_voice_rec_WVALID VALID 1 1 }  { m_axi_voice_rec_WREADY READY 0 1 }  { m_axi_voice_rec_WDATA DATA 1 32 }  { m_axi_voice_rec_WSTRB STRB 1 4 }  { m_axi_voice_rec_WLAST LAST 1 1 }  { m_axi_voice_rec_WID ID 1 1 }  { m_axi_voice_rec_WUSER USER 1 1 }  { m_axi_voice_rec_ARVALID VALID 1 1 }  { m_axi_voice_rec_ARREADY READY 0 1 }  { m_axi_voice_rec_ARADDR ADDR 1 32 }  { m_axi_voice_rec_ARID ID 1 1 }  { m_axi_voice_rec_ARLEN LEN 1 8 }  { m_axi_voice_rec_ARSIZE SIZE 1 3 }  { m_axi_voice_rec_ARBURST BURST 1 2 }  { m_axi_voice_rec_ARLOCK LOCK 1 2 }  { m_axi_voice_rec_ARCACHE CACHE 1 4 }  { m_axi_voice_rec_ARPROT PROT 1 3 }  { m_axi_voice_rec_ARQOS QOS 1 4 }  { m_axi_voice_rec_ARREGION REGION 1 4 }  { m_axi_voice_rec_ARUSER USER 1 1 }  { m_axi_voice_rec_RVALID VALID 0 1 }  { m_axi_voice_rec_RREADY READY 1 1 }  { m_axi_voice_rec_RDATA DATA 0 32 }  { m_axi_voice_rec_RLAST LAST 0 1 }  { m_axi_voice_rec_RID ID 0 1 }  { m_axi_voice_rec_RUSER USER 0 1 }  { m_axi_voice_rec_RRESP RESP 0 2 }  { m_axi_voice_rec_BVALID VALID 0 1 }  { m_axi_voice_rec_BREADY READY 1 1 }  { m_axi_voice_rec_BRESP RESP 0 2 }  { m_axi_voice_rec_BID ID 0 1 }  { m_axi_voice_rec_BUSER USER 0 1 } } }
	guess { ap_none {  { guess out_data 1 32 } } }
}

set busDeadlockParameterList { 
	{ voice_rec { NUM_READ_OUTSTANDING 16 NUM_WRITE_OUTSTANDING 16 MAX_READ_BURST_LENGTH 16 MAX_WRITE_BURST_LENGTH 16 } } \
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
	{ voice_rec 1 }
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
	{ voice_rec 1 }
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
