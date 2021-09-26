############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project voicerec
set_top voicerec
add_files voicerec/voicerec.cpp
add_files voicerec/neuralNetworkSynth.cpp
add_files -tb voicerec/voicerec_test.cpp -cflags "-Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas"
add_files -tb voicerec/ting.h -cflags "-Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas"
add_files -tb voicerec/qian.h -cflags "-Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas"
add_files -tb voicerec/lai.h -cflags "-Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas"
open_solution "solution1"
set_part {xc7a200tsbg484-1} -tool vivado
create_clock -period 200MHz -name default
set_clock_uncertainty 0
#source "./voicerec/solution1/directives.tcl"
csim_design
csynth_design
cosim_design -setup
export_design -rtl verilog -format ip_catalog -version "3.1.10"
