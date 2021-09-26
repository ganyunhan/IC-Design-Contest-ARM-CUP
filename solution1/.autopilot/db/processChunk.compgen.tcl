# This script segment is generated automatically by AutoPilot

set id 17
set name voicerec_fdiv_32nfYi
set corename simcore_fdiv
set op fdiv
set stage_num 30
set max_latency -1
set registered_input 1
set Futype4reduceCEFanout 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 32
set in0_signed 0
set in1_width 32
set in1_signed 0
set ce_width 1
set ce_signed 0
set out_width 32
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fdiv] == "ap_gen_simcore_fdiv"} {
eval "ap_gen_simcore_fdiv { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    Futype4reduceCEFanout ${Futype4reduceCEFanout} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_fdiv, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op fdiv
set corename FDiv
if {${::AESL::PGuard_autocg_gen} && (${::AESL::PGuard_autocg_fpip} || ${::AESL::PGuard_autocg_fpv6en} || ${::AESL::PGuard_autocg_hpen})} {
if {[info proc ::AESL_LIB_XILINX_FPV6::fpv6_gen] == "::AESL_LIB_XILINX_FPV6::fpv6_gen"} {
eval "::AESL_LIB_XILINX_FPV6::fpv6_gen { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    Futype4reduceCEFanout ${Futype4reduceCEFanout} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_XILINX_FPV6::fpv6_gen, check your platform lib"
}
}


set id 18
set name voicerec_uitofp_3g8j
set corename simcore_uitofp
set op uitofp
set stage_num 8
set max_latency -1
set registered_input 1
set Futype4reduceCEFanout 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 32
set in0_signed 0
set ce_width 1
set ce_signed 0
set out_width 32
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_uitofp] == "ap_gen_simcore_uitofp"} {
eval "ap_gen_simcore_uitofp { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    Futype4reduceCEFanout ${Futype4reduceCEFanout} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_uitofp, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op uitofp
set corename Int2Float
if {${::AESL::PGuard_autocg_gen} && (${::AESL::PGuard_autocg_fpip} || ${::AESL::PGuard_autocg_fpv6en} || ${::AESL::PGuard_autocg_hpen})} {
if {[info proc ::AESL_LIB_XILINX_FPV6::fpv6_gen] == "::AESL_LIB_XILINX_FPV6::fpv6_gen"} {
eval "::AESL_LIB_XILINX_FPV6::fpv6_gen { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    Futype4reduceCEFanout ${Futype4reduceCEFanout} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_XILINX_FPV6::fpv6_gen, check your platform lib"
}
}


set id 19
set name voicerec_fptrunc_hbi
set corename simcore_fptrunc
set op fptrunc
set stage_num 3
set max_latency -1
set registered_input 1
set Futype4reduceCEFanout 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 64
set in0_signed 0
set ce_width 1
set ce_signed 0
set out_width 32
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fptrunc] == "ap_gen_simcore_fptrunc"} {
eval "ap_gen_simcore_fptrunc { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    Futype4reduceCEFanout ${Futype4reduceCEFanout} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_fptrunc, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op fptrunc
set corename Double2Float
if {${::AESL::PGuard_autocg_gen} && (${::AESL::PGuard_autocg_fpip} || ${::AESL::PGuard_autocg_fpv6en} || ${::AESL::PGuard_autocg_hpen})} {
if {[info proc ::AESL_LIB_XILINX_FPV6::fpv6_gen] == "::AESL_LIB_XILINX_FPV6::fpv6_gen"} {
eval "::AESL_LIB_XILINX_FPV6::fpv6_gen { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    Futype4reduceCEFanout ${Futype4reduceCEFanout} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_XILINX_FPV6::fpv6_gen, check your platform lib"
}
}


set id 20
set name voicerec_fpext_32ibs
set corename simcore_fpext
set op fpext
set stage_num 2
set max_latency -1
set registered_input 1
set Futype4reduceCEFanout 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 32
set in0_signed 0
set ce_width 1
set ce_signed 0
set out_width 64
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fpext] == "ap_gen_simcore_fpext"} {
eval "ap_gen_simcore_fpext { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    Futype4reduceCEFanout ${Futype4reduceCEFanout} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_fpext, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op fpext
set corename Float2Double
if {${::AESL::PGuard_autocg_gen} && (${::AESL::PGuard_autocg_fpip} || ${::AESL::PGuard_autocg_fpv6en} || ${::AESL::PGuard_autocg_hpen})} {
if {[info proc ::AESL_LIB_XILINX_FPV6::fpv6_gen] == "::AESL_LIB_XILINX_FPV6::fpv6_gen"} {
eval "::AESL_LIB_XILINX_FPV6::fpv6_gen { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    Futype4reduceCEFanout ${Futype4reduceCEFanout} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_XILINX_FPV6::fpv6_gen, check your platform lib"
}
}


set id 21
set name voicerec_fcmp_32njbC
set corename simcore_fcmp
set op fcmp
set stage_num 3
set max_latency -1
set registered_input 1
set Futype4reduceCEFanout 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 32
set in0_signed 0
set in1_width 32
set in1_signed 0
set ce_width 1
set ce_signed 0
set opcode_width 5
set opcode_signed 0
set out_width 1
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fcmp] == "ap_gen_simcore_fcmp"} {
eval "ap_gen_simcore_fcmp { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    Futype4reduceCEFanout ${Futype4reduceCEFanout} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    opcode_width ${opcode_width} \
    opcode_signed ${opcode_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_fcmp, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op fcmp
set corename FCmp
if {${::AESL::PGuard_autocg_gen} && (${::AESL::PGuard_autocg_fpip} || ${::AESL::PGuard_autocg_fpv6en} || ${::AESL::PGuard_autocg_hpen})} {
if {[info proc ::AESL_LIB_XILINX_FPV6::fpv6_gen] == "::AESL_LIB_XILINX_FPV6::fpv6_gen"} {
eval "::AESL_LIB_XILINX_FPV6::fpv6_gen { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    Futype4reduceCEFanout ${Futype4reduceCEFanout} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    opcode_width ${opcode_width} \
    opcode_signed ${opcode_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_XILINX_FPV6::fpv6_gen, check your platform lib"
}
}


set id 22
set name voicerec_dmul_64nkbM
set corename simcore_dmul
set op dmul
set stage_num 10
set max_latency -1
set registered_input 1
set impl_style max_dsp
set Futype4reduceCEFanout 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 64
set in0_signed 0
set in1_width 64
set in1_signed 0
set ce_width 1
set ce_signed 0
set out_width 64
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_dmul] == "ap_gen_simcore_dmul"} {
eval "ap_gen_simcore_dmul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    style ${impl_style} \
    Futype4reduceCEFanout ${Futype4reduceCEFanout} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_dmul, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op dmul
set corename DMul
if {${::AESL::PGuard_autocg_gen} && (${::AESL::PGuard_autocg_fpip} || ${::AESL::PGuard_autocg_fpv6en} || ${::AESL::PGuard_autocg_hpen})} {
if {[info proc ::AESL_LIB_XILINX_FPV6::fpv6_gen] == "::AESL_LIB_XILINX_FPV6::fpv6_gen"} {
eval "::AESL_LIB_XILINX_FPV6::fpv6_gen { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    style ${impl_style} \
    Futype4reduceCEFanout ${Futype4reduceCEFanout} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_XILINX_FPV6::fpv6_gen, check your platform lib"
}
}


# Memory (RAM/ROM)  definition:
set ID 29
set hasByteEnable 0
set MemName processChunk_c
set CoreName ap_simcore_mem
set PortList { 2 2 }
set DataWd 32
set AddrRange 512
set AddrWd 9
set impl_style block
set TrueReset 0
set IsROM 0
set ROMData { }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.257
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName RAM
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_RAM] == "::AESL_LIB_VIRTEX::xil_gen_RAM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_RAM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_RAM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 30
set hasByteEnable 0
set MemName processChunk_e
set CoreName ap_simcore_mem
set PortList { 2 3 }
set DataWd 32
set AddrRange 26
set AddrWd 5
set impl_style block
set TrueReset 0
set IsROM 0
set ROMData { }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 2.152
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName RAM
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_RAM] == "::AESL_LIB_VIRTEX::xil_gen_RAM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_RAM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_RAM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 31
set hasByteEnable 0
set MemName processChunk_spec
set CoreName ap_simcore_mem
set PortList { 2 3 }
set DataWd 32
set AddrRange 256
set AddrWd 8
set impl_style block
set TrueReset 0
set IsROM 0
set ROMData { }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.257
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName RAM
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_RAM] == "::AESL_LIB_VIRTEX::xil_gen_RAM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_RAM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_RAM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 32
set hasByteEnable 0
set MemName processChunk_mell
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 8
set AddrRange 27
set AddrWd 5
set TrueReset 0
set IsROM 1
set ROMData { "00010010" "00010110" "00011010" "00011110" "00100011" "00101000" "00101101" "00110011" "00111001" "00111111" "01000110" "01001101" "01010101" "01011101" "01100101" "01101110" "01111000" "10000010" "10001101" "10011001" "10100101" "10110010" "11000000" "11001110" "11011110" "11101110" "11111111" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.257
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 33
set hasByteEnable 0
set MemName processChunk_dctMeOg
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 32
set AddrRange 676
set AddrWd 10
set TrueReset 0
set IsROM 1
set ROMData { "00111111100000000000000000000000" "00111111100000000000000000000000" "00111111100000000000000000000000" "00111111100000000000000000000000" "00111111100000000000000000000000" "00111111100000000000000000000000" "00111111100000000000000000000000" "00111111100000000000000000000000" "00111111100000000000000000000000" "00111111100000000000000000000000" "00111111100000000000000000000000" "00111111100000000000000000000000" "00111111100000000000000000000000" "00111111100000000000000000000000" "00111111100000000000000000000000" "00111111100000000000000000000000" "00111111100000000000000000000000" "00111111100000000000000000000000" "00111111100000000000000000000000" "00111111100000000000000000000000" "00111111100000000000000000000000" "00111111100000000000000000000000" "00111111100000000000000000000000" "00111111100000000000000000000000" "00111111100000000000000000000000" "00111111100000000000000000000000" "00111111011111111000100010111001" "00111111011110111100111010000101" "00111111011101000110100010001000" "00111111011010010111001001000111" "00111111010110110001010001100110" "00111111010010011000010010100001" "00111111001101010000010100101001" "00111111000111011110000101011101" "00111111000001000111000001100101" "00111110110100100010000101000010" "00111110100110000101000111101100" "00111110001110001001011000010100" "00111101011101110100111011101100" "10111101011101110100111011101100" "10111110001110001001011000010100" "10111110100110000101000111101100" "10111110110100100010000101000010" "10111111000001000111000001100101" "10111111000111011110000101011101" "10111111001101010000010100101001" "10111111010010011000010010100001" "10111111010110110001010001100110" "10111111011010010111001001000111" "10111111011101000110100010001000" "10111111011110111100111010000101" "10111111011111111000100010111001" "00111111011111100010001000111110" "00111111011011110101110101111001" "00111111010100101010111011010001" "00111111001010011100001000111011" "00111110111011011110111111001000" "00111110011101010001000001001101" "10100101001110010110011010111100" "10111110011101010001000001001101" "10111110111011011110111111001000" "10111111001010011100001000111011" "10111111010100101010111011010001" "10111111011011110101110101111001" "10111111011111100010001000111110" "10111111011111100010001000111110" "10111111011011110101110101111001" "10111111010100101010111011010001" "10111111001010011100001000111011" "10111110111011011110111111001000" "10111110011101010001000001001101" "10100101010100111100101010101100" "00111110011101010001000001001101" "00111110111011011110111111001000" "00111111001010011100001000111011" "00111111010100101010111011010001" "00111111011011110101110101111001" "00111111011111100010001000111110" "00111111011110111100111010000101" "00111111010110110001010001100110" "00111111000111011110000101011101" "00111110100110000101000111101100" "10111101011101110100111011101100" "10111110110100100010000101000010" "10111111001101010000010100101001" "10111111011010010111001001000111" "10111111011111111000100010111001" "10111111011101000110100010001000" "10111111010010011000010010100001" "10111111000001000111000001100101" "10111110001110001001011000010100" "00111110001110001001011000010100" "00111111000001000111000001100101" "00111111010010011000010010100001" "00111111011101000110100010001000" "00111111011111111000100010111001" "00111111011010010111001001000111" "00111111001101010000010100101001" "00111110110100100010000101000010" "00111101011101110100111011101100" "10111110100110000101000111101100" "10111111000111011110000101011101" "10111111010110110001010001100110" "10111111011110111100111010000101" "00111111011110001000111110000110" "00111111001111111001111001011010" "00111110101101011000111000100010" "10111101111101101101110110101101" "10111111000100010110110001100001" "10111111011000101010110110000010" "10111111100000000000000000000000" "10111111011000101010110110000010" "10111111000100010110110001100001" "10111101111101101101110110101101" "00111110101101011000111000100010" "00111111001111111001111001011010" "00111111011110001000111110000110" "00111111011110001000111110000110" "00111111001111111001111001011010" "00111110101101011000111000100010" "10111101111101101101110110101101" "10111111000100010110110001100001" "10111111011000101010110110000010" "10111111100000000000000000000000" "10111111011000101010110110000010" "10111111000100010110110001100001" "10111101111101101101110110101101" "00111110101101011000111000100010" "00111111001111111001111001011010" "00111111011110001000111110000110" "00111111011101000110100010001000" "00111111000111011110000101011101" "00111101011101110100111011101100" "10111111000001000111000001100101" "10111111011010010111001001000111" "10111111011110111100111010000101" "10111111001101010000010100101001" "10111110001110001001011000010100" "00111110110100100010000101000010" "00111111010110110001010001100110" "00111111011111111000100010111001" "00111111010010011000010010100001" "00111110100110000101000111101100" "10111110100110000101000111101100" "10111111010010011000010010100001" "10111111011111111000100010111001" "10111111010110110001010001100110" "10111110110100100010000101000010" "00111110001110001001011000010100" "00111111001101010000010100101001" "00111111011110111100111010000101" "00111111011010010111001001000111" "00111111000001000111000001100101" "10111101011101110100111011101100" "10111111000111011110000101011101" "10111111011101000110100010001000" "00111111011011110101110101111001" "00111110111011011110111111001000" "10111110011101010001000001001101" "10111111010100101010111011010001" "10111111011111100010001000111110" "10111111001010011100001000111011" "10100101010100111100101010101100" "00111111001010011100001000111011" "00111111011111100010001000111110" "00111111010100101010111011010001" "00111110011101010001000001001101" "10111110111011011110111111001000" "10111111011011110101110101111001" "10111111011011110101110101111001" "10111110111011011110111111001000" "00111110011101010001000001001101" "00111111010100101010111011010001" "00111111011111100010001000111110" "00111111001010011100001000111011" "00100110000111101101011101000100" "10111111001010011100001000111011" "10111111011111100010001000111110" "10111111010100101010111011010001" "10111110011101010001000001001101" "00111110111011011110111111001000" "00111111011011110101110101111001" "00111111011010010111001001000111" "00111110100110000101000111101100" "10111111000001000111000001100101" "10111111011110111100111010000101" "10111111010010011000010010100001" "10111101011101110100111011101100" "00111111001101010000010100101001" "00111111011111111000100010111001" "00111111000111011110000101011101" "10111110001110001001011000010100" "10111111010110110001010001100110" "10111111011101000110100010001000" "10111110110100100010000101000010" "00111110110100100010000101000010" "00111111011101000110100010001000" "00111111010110110001010001100110" "00111110001110001001011000010100" "10111111000111011110000101011101" "10111111011111111000100010111001" "10111111001101010000010100101001" "00111101011101110100111011101100" "00111111010010011000010010100001" "00111111011110111100111010000101" "00111111000001000111000001100101" "10111110100110000101000111101100" "10111111011010010111001001000111" "00111111011000101010110110000010" "00111101111101101101110110101101" "10111111001111111001111001011010" "10111111011110001000111110000110" "10111110101101011000111000100010" "00111111000100010110110001100001" "00111111100000000000000000000000" "00111111000100010110110001100001" "10111110101101011000111000100010" "10111111011110001000111110000110" "10111111001111111001111001011010" "00111101111101101101110110101101" "00111111011000101010110110000010" "00111111011000101010110110000010" "00111101111101101101110110101101" "10111111001111111001111001011010" "10111111011110001000111110000110" "10111110101101011000111000100010" "00111111000100010110110001100001" "00111111100000000000000000000000" "00111111000100010110110001100001" "10111110101101011000111000100010" "10111111011110001000111110000110" "10111111001111111001111001011010" "00111101111101101101110110101101" "00111111011000101010110110000010" "00111111010110110001010001100110" "10111101011101110100111011101100" "10111111011010010111001001000111" "10111111010010011000010010100001" "00111110001110001001011000010100" "00111111011101000110100010001000" "00111111001101010000010100101001" "10111110100110000101000111101100" "10111111011110111100111010000101" "10111111000111011110000101011101" "00111110110100100010000101000010" "00111111011111111000100010111001" "00111111000001000111000001100101" "10111111000001000111000001100101" "10111111011111111000100010111001" "10111110110100100010000101000010" "00111111000111011110000101011101" "00111111011110111100111010000101" "00111110100110000101000111101100" "10111111001101010000010100101001" "10111111011101000110100010001000" "10111110001110001001011000010100" "00111111010010011000010010100001" "00111111011010010111001001000111" "00111101011101110100111011101100" "10111111010110110001010001100110" "00111111010100101010111011010001" "10111110011101010001000001001101" "10111111011111100010001000111110" "10111110111011011110111111001000" "00111111001010011100001000111011" "00111111011011110101110101111001" "10100110001001111100000101111111" "10111111011011110101110101111001" "10111111001010011100001000111011" "00111110111011011110111111001000" "00111111011111100010001000111110" "00111110011101010001000001001101" "10111111010100101010111011010001" "10111111010100101010111011010001" "00111110011101010001000001001101" "00111111011111100010001000111110" "00111110111011011110111111001000" "10111111001010011100001000111011" "10111111011011110101110101111001" "10100111010000100010111001001001" "00111111011011110101110101111001" "00111111001010011100001000111011" "10111110111011011110111111001000" "10111111011111100010001000111110" "10111110011101010001000001001101" "00111111010100101010111011010001" "00111111010010011000010010100001" "10111110110100100010000101000010" "10111111011110111100111010000101" "10111101011101110100111011101100" "00111111011101000110100010001000" "00111111000001000111000001100101" "10111111001101010000010100101001" "10111111010110110001010001100110" "00111110100110000101000111101100" "00111111011111111000100010111001" "00111110001110001001011000010100" "10111111011010010111001001000111" "10111111000111011110000101011101" "00111111000111011110000101011101" "00111111011010010111001001000111" "10111110001110001001011000010100" "10111111011111111000100010111001" "10111110100110000101000111101100" "00111111010110110001010001100110" "00111111001101010000010100101001" "10111111000001000111000001100101" "10111111011101000110100010001000" "00111101011101110100111011101100" "00111111011110111100111010000101" "00111110110100100010000101000010" "10111111010010011000010010100001" "00111111001111111001111001011010" "10111111000100010110110001100001" "10111111011000101010110110000010" "00111110101101011000111000100010" "00111111011110001000111110000110" "10111101111101101101110110101101" "10111111100000000000000000000000" "10111101111101101101110110101101" "00111111011110001000111110000110" "00111110101101011000111000100010" "10111111011000101010110110000010" "10111111000100010110110001100001" "00111111001111111001111001011010" "00111111001111111001111001011010" "10111111000100010110110001100001" "10111111011000101010110110000010" "00111110101101011000111000100010" "00111111011110001000111110000110" "10111101111101101101110110101101" "10111111100000000000000000000000" "10111101111101101101110110101101" "00111111011110001000111110000110" "00111110101101011000111000100010" "10111111011000101010110110000010" "10111111000100010110110001100001" "00111111001111111001111001011010" "00111111001101010000010100101001" "10111111001101010000010100101001" "10111111001101010000010100101001" "00111111001101010000010100101001" "00111111001101010000010100101001" "10111111001101010000010100101001" "10111111001101010000010100101001" "00111111001101010000010100101001" "00111111001101010000010100101001" "10111111001101010000010100101001" "10111111001101010000010100101001" "00111111001101010000010100101001" "00111111001101010000010100101001" "10111111001101010000010100101001" "10111111001101010000010100101001" "00111111001101010000010100101001" "00111111001101010000010100101001" "10111111001101010000010100101001" "10111111001101010000010100101001" "00111111001101010000010100101001" "00111111001101010000010100101001" "10111111001101010000010100101001" "10111111001101010000010100101001" "00111111001101010000010100101001" "00111111001101010000010100101001" "10111111001101010000010100101001" "00111111001010011100001000111011" "10111111010100101010111011010001" "10111110111011011110111111001000" "00111111011011110101110101111001" "00111110011101010001000001001101" "10111111011111100010001000111110" "00100110110000100011100101011011" "00111111011111100010001000111110" "10111110011101010001000001001101" "10111111011011110101110101111001" "00111110111011011110111111001000" "00111111010100101010111011010001" "10111111001010011100001000111011" "10111111001010011100001000111011" "00111111010100101010111011010001" "00111110111011011110111111001000" "10111111011011110101110101111001" "10111110011101010001000001001101" "00111111011111100010001000111110" "00100111111011100101001110101111" "10111111011111100010001000111110" "00111110011101010001000001001101" "00111111011011110101110101111001" "10111110111011011110111111001000" "10111111010100101010111011010001" "00111111001010011100001000111011" "00111111000111011110000101011101" "10111111011010010111001001000111" "10111110001110001001011000010100" "00111111011111111000100010111001" "10111110100110000101000111101100" "10111111010110110001010001100110" "00111111001101010000010100101001" "00111111000001000111000001100101" "10111111011101000110100010001000" "10111101011101110100111011101100" "00111111011110111100111010000101" "10111110110100100010000101000010" "10111111010010011000010010100001" "00111111010010011000010010100001" "00111110110100100010000101000010" "10111111011110111100111010000101" "00111101011101110100111011101100" "00111111011101000110100010001000" "10111111000001000111000001100101" "10111111001101010000010100101001" "00111111010110110001010001100110" "00111110100110000101000111101100" "10111111011111111000100010111001" "00111110001110001001011000010100" "00111111011010010111001001000111" "10111111000111011110000101011101" "00111111000100010110110001100001" "10111111011110001000111110000110" "00111101111101101101110110101101" "00111111011000101010110110000010" "10111111001111111001111001011010" "10111110101101011000111000100010" "00111111100000000000000000000000" "10111110101101011000111000100010" "10111111001111111001111001011010" "00111111011000101010110110000010" "00111101111101101101110110101101" "10111111011110001000111110000110" "00111111000100010110110001100001" "00111111000100010110110001100001" "10111111011110001000111110000110" "00111101111101101101110110101101" "00111111011000101010110110000010" "10111111001111111001111001011010" "10111110101101011000111000100010" "00111111100000000000000000000000" "10111110101101011000111000100010" "10111111001111111001111001011010" "00111111011000101010110110000010" "00111101111101101101110110101101" "10111111011110001000111110000110" "00111111000100010110110001100001" "00111111000001000111000001100101" "10111111011111111000100010111001" "00111110110100100010000101000010" "00111111000111011110000101011101" "10111111011110111100111010000101" "00111110100110000101000111101100" "00111111001101010000010100101001" "10111111011101000110100010001000" "00111110001110001001011000010100" "00111111010010011000010010100001" "10111111011010010111001001000111" "00111101011101110100111011101100" "00111111010110110001010001100110" "10111111010110110001010001100110" "10111101011101110100111011101100" "00111111011010010111001001000111" "10111111010010011000010010100001" "10111110001110001001011000010100" "00111111011101000110100010001000" "10111111001101010000010100101001" "10111110100110000101000111101100" "00111111011110111100111010000101" "10111111000111011110000101011101" "10111110110100100010000101000010" "00111111011111111000100010111001" "10111111000001000111000001100101" "00111110111011011110111111001000" "10111111011111100010001000111110" "00111111001010011100001000111011" "00111110011101010001000001001101" "10111111011011110101110101111001" "00111111010100101010111011010001" "00100110000111101101011101000100" "10111111010100101010111011010001" "00111111011011110101110101111001" "10111110011101010001000001001101" "10111111001010011100001000111011" "00111111011111100010001000111110" "10111110111011011110111111001000" "10111110111011011110111111001000" "00111111011111100010001000111110" "10111111001010011100001000111011" "10111110011101010001000001001101" "00111111011011110101110101111001" "10111111010100101010111011010001" "10100111011101110010000011110100" "00111111010100101010111011010001" "10111111011011110101110101111001" "00111110011101010001000001001101" "00111111001010011100001000111011" "10111111011111100010001000111110" "00111110111011011110111111001000" "00111110110100100010000101000010" "10111111011101000110100010001000" "00111111010110110001010001100110" "10111110001110001001011000010100" "10111111000111011110000101011101" "00111111011111111000100010111001" "10111111001101010000010100101001" "10111101011101110100111011101100" "00111111010010011000010010100001" "10111111011110111100111010000101" "00111111000001000111000001100101" "00111110100110000101000111101100" "10111111011010010111001001000111" "00111111011010010111001001000111" "10111110100110000101000111101100" "10111111000001000111000001100101" "00111111011110111100111010000101" "10111111010010011000010010100001" "00111101011101110100111011101100" "00111111001101010000010100101001" "10111111011111111000100010111001" "00111111000111011110000101011101" "00111110001110001001011000010100" "10111111010110110001010001100110" "00111111011101000110100010001000" "10111110110100100010000101000010" "00111110101101011000111000100010" "10111111011000101010110110000010" "00111111011110001000111110000110" "10111111000100010110110001100001" "10111101111101101101110110101101" "00111111001111111001111001011010" "10111111100000000000000000000000" "00111111001111111001111001011010" "10111101111101101101110110101101" "10111111000100010110110001100001" "00111111011110001000111110000110" "10111111011000101010110110000010" "00111110101101011000111000100010" "00111110101101011000111000100010" "10111111011000101010110110000010" "00111111011110001000111110000110" "10111111000100010110110001100001" "10111101111101101101110110101101" "00111111001111111001111001011010" "10111111100000000000000000000000" "00111111001111111001111001011010" "10111101111101101101110110101101" "10111111000100010110110001100001" "00111111011110001000111110000110" "10111111011000101010110110000010" "00111110101101011000111000100010" "00111110100110000101000111101100" "10111111010010011000010010100001" "00111111011111111000100010111001" "10111111010110110001010001100110" "00111110110100100010000101000010" "00111110001110001001011000010100" "10111111001101010000010100101001" "00111111011110111100111010000101" "10111111011010010111001001000111" "00111111000001000111000001100101" "00111101011101110100111011101100" "10111111000111011110000101011101" "00111111011101000110100010001000" "10111111011101000110100010001000" "00111111000111011110000101011101" "10111101011101110100111011101100" "10111111000001000111000001100101" "00111111011010010111001001000111" "10111111011110111100111010000101" "00111111001101010000010100101001" "10111110001110001001011000010100" "10111110110100100010000101000010" "00111111010110110001010001100110" "10111111011111111000100010111001" "00111111010010011000010010100001" "10111110100110000101000111101100" "00111110011101010001000001001101" "10111111001010011100001000111011" "00111111011011110101110101111001" "10111111011111100010001000111110" "00111111010100101010111011010001" "10111110111011011110111111001000" "00100110100111101110111000100100" "00111110111011011110111111001000" "10111111010100101010111011010001" "00111111011111100010001000111110" "10111111011011110101110101111001" "00111111001010011100001000111011" "10111110011101010001000001001101" "10111110011101010001000001001101" "00111111001010011100001000111011" "10111111011011110101110101111001" "00111111011111100010001000111110" "10111111010100101010111011010001" "00111110111011011110111111001000" "00101000000001000110011010000010" "10111110111011011110111111001000" "00111111010100101010111011010001" "10111111011111100010001000111110" "00111111011011110101110101111001" "10111111001010011100001000111011" "00111110011101010001000001001101" "00111110001110001001011000010100" "10111111000001000111000001100101" "00111111010010011000010010100001" "10111111011101000110100010001000" "00111111011111111000100010111001" "10111111011010010111001001000111" "00111111001101010000010100101001" "10111110110100100010000101000010" "00111101011101110100111011101100" "00111110100110000101000111101100" "10111111000111011110000101011101" "00111111010110110001010001100110" "10111111011110111100111010000101" "00111111011110111100111010000101" "10111111010110110001010001100110" "00111111000111011110000101011101" "10111110100110000101000111101100" "10111101011101110100111011101100" "00111110110100100010000101000010" "10111111001101010000010100101001" "00111111011010010111001001000111" "10111111011111111000100010111001" "00111111011101000110100010001000" "10111111010010011000010010100001" "00111111000001000111000001100101" "10111110001110001001011000010100" "00111101111101101101110110101101" "10111110101101011000111000100010" "00111111000100010110110001100001" "10111111001111111001111001011010" "00111111011000101010110110000010" "10111111011110001000111110000110" "00111111100000000000000000000000" "10111111011110001000111110000110" "00111111011000101010110110000010" "10111111001111111001111001011010" "00111111000100010110110001100001" "10111110101101011000111000100010" "00111101111101101101110110101101" "00111101111101101101110110101101" "10111110101101011000111000100010" "00111111000100010110110001100001" "10111111001111111001111001011010" "00111111011000101010110110000010" "10111111011110001000111110000110" "00111111100000000000000000000000" "10111111011110001000111110000110" "00111111011000101010110110000010" "10111111001111111001111001011010" "00111111000100010110110001100001" "10111110101101011000111000100010" "00111101111101101101110110101101" "00111101011101110100111011101100" "10111110001110001001011000010100" "00111110100110000101000111101100" "10111110110100100010000101000010" "00111111000001000111000001100101" "10111111000111011110000101011101" "00111111001101010000010100101001" "10111111010010011000010010100001" "00111111010110110001010001100110" "10111111011010010111001001000111" "00111111011101000110100010001000" "10111111011110111100111010000101" "00111111011111111000100010111001" "10111111011111111000100010111001" "00111111011110111100111010000101" "10111111011101000110100010001000" "00111111011010010111001001000111" "10111111010110110001010001100110" "00111111010010011000010010100001" "10111111001101010000010100101001" "00111111000111011110000101011101" "10111111000001000111000001100101" "00111110110100100010000101000010" "10111110100110000101000111101100" "00111110001110001001011000010100" "10111101011101110100111011101100" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.257
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 35 \
    name ret \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename ret \
    op interface \
    ports { ret_address0 { O 10 vector } ret_ce0 { O 1 bit } ret_we0 { O 1 bit } ret_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ret'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 37 \
    name inputSound \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename inputSound \
    op interface \
    ports { inputSound_address0 { O 13 vector } inputSound_ce0 { O 1 bit } inputSound_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'inputSound'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 34 \
    name sp \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_sp \
    op interface \
    ports { sp { I 14 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 36 \
    name ret_offset \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ret_offset \
    op interface \
    ports { ret_offset { I 7 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


