# ==============================================================
# File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
# Version: 2018.2
# Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
# 
# ==============================================================

proc generate {drv_handle} {
    xdefine_include_file $drv_handle "xparameters.h" "XVoicerec" \
        "NUM_INSTANCES" \
        "DEVICE_ID" \
        "C_S_AXI_VOICE_REC_BASEADDR" \
        "C_S_AXI_VOICE_REC_HIGHADDR"

    xdefine_config_file $drv_handle "xvoicerec_g.c" "XVoicerec" \
        "DEVICE_ID" \
        "C_S_AXI_VOICE_REC_BASEADDR"

    xdefine_canonical_xpars $drv_handle "xparameters.h" "XVoicerec" \
        "DEVICE_ID" \
        "C_S_AXI_VOICE_REC_BASEADDR" \
        "C_S_AXI_VOICE_REC_HIGHADDR"
}
