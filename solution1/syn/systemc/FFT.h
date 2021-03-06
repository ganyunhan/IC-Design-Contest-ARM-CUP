// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _FFT_HH_
#define _FFT_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "voicerec_faddfsubbkb.h"
#include "voicerec_fmul_32ncud.h"
#include "voicerec_sdiv_11ndEe.h"
#include "FFT_cosVec.h"
#include "FFT_sinVec.h"

namespace ap_rtl {

struct FFT : public sc_module {
    // Port declarations 16
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<9> > c_address0;
    sc_out< sc_logic > c_ce0;
    sc_out< sc_logic > c_we0;
    sc_out< sc_lv<32> > c_d0;
    sc_in< sc_lv<32> > c_q0;
    sc_out< sc_lv<9> > c_address1;
    sc_out< sc_logic > c_ce1;
    sc_out< sc_logic > c_we1;
    sc_out< sc_lv<32> > c_d1;
    sc_in< sc_lv<32> > c_q1;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    FFT(sc_module_name name);
    SC_HAS_PROCESS(FFT);

    ~FFT();

    sc_trace_file* mVcdFile;

    FFT_cosVec* cosVec_U;
    FFT_sinVec* sinVec_U;
    voicerec_faddfsubbkb<1,9,32,32,32>* voicerec_faddfsubbkb_U1;
    voicerec_faddfsubbkb<1,9,32,32,32>* voicerec_faddfsubbkb_U2;
    voicerec_fmul_32ncud<1,5,32,32,32>* voicerec_fmul_32ncud_U3;
    voicerec_fmul_32ncud<1,5,32,32,32>* voicerec_fmul_32ncud_U4;
    voicerec_fmul_32ncud<1,5,32,32,32>* voicerec_fmul_32ncud_U5;
    voicerec_fmul_32ncud<1,5,32,32,32>* voicerec_fmul_32ncud_U6;
    voicerec_sdiv_11ndEe<1,15,11,32,32>* voicerec_sdiv_11ndEe_U7;
    sc_signal< sc_lv<52> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<8> > cosVec_address0;
    sc_signal< sc_logic > cosVec_ce0;
    sc_signal< sc_lv<32> > cosVec_q0;
    sc_signal< sc_lv<8> > sinVec_address0;
    sc_signal< sc_logic > sinVec_ce0;
    sc_signal< sc_lv<32> > sinVec_q0;
    sc_signal< sc_lv<32> > d_reg_279;
    sc_signal< sc_lv<32> > wik_reg_291;
    sc_signal< sc_lv<8> > k_1_reg_303;
    sc_signal< sc_lv<32> > wrk_1_reg_314;
    sc_signal< sc_lv<32> > wik_1_reg_326;
    sc_signal< sc_lv<32> > reg_390;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage2;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter0;
    sc_signal< bool > ap_block_state28_pp1_stage2_iter0;
    sc_signal< bool > ap_block_pp1_stage2_11001;
    sc_signal< sc_lv<1> > exitcond_reg_956;
    sc_signal< sc_lv<1> > tmp_68_reg_965;
    sc_signal< sc_lv<32> > reg_398;
    sc_signal< sc_lv<32> > reg_406;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage3;
    sc_signal< bool > ap_block_state29_pp1_stage3_iter0;
    sc_signal< bool > ap_block_pp1_stage3_11001;
    sc_signal< sc_lv<32> > reg_414;
    sc_signal< sc_lv<32> > grp_fu_349_p2;
    sc_signal< sc_lv<32> > reg_421;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage14;
    sc_signal< bool > ap_block_state40_pp1_stage14_iter0;
    sc_signal< bool > ap_block_pp1_stage14_11001;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage24;
    sc_signal< bool > ap_block_state50_pp1_stage24_iter0;
    sc_signal< bool > ap_block_pp1_stage24_11001;
    sc_signal< sc_lv<9> > k_3_fu_434_p2;
    sc_signal< sc_lv<9> > k_3_reg_799;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > tmp_fu_444_p2;
    sc_signal< sc_lv<1> > tmp_reg_804;
    sc_signal< sc_lv<1> > exitcond3_fu_428_p2;
    sc_signal< sc_lv<9> > c_addr_reg_808;
    sc_signal< sc_lv<9> > c_addr_4_reg_813;
    sc_signal< sc_lv<9> > c_addr_5_reg_818;
    sc_signal< sc_lv<9> > c_addr_6_reg_823;
    sc_signal< sc_lv<4> > q_1_fu_500_p2;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<32> > j_2_fu_560_p3;
    sc_signal< sc_lv<1> > exitcond2_fu_494_p2;
    sc_signal< sc_lv<32> > n_1_fu_568_p3;
    sc_signal< sc_lv<32> > j_4_fu_576_p2;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<31> > tmp_48_fu_582_p1;
    sc_signal< sc_lv<31> > tmp_48_reg_851;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<32> > n_fu_586_p2;
    sc_signal< sc_lv<32> > n_reg_856;
    sc_signal< sc_lv<11> > indvar_flatten_next_fu_598_p2;
    sc_signal< sc_lv<11> > indvar_flatten_next_reg_865;
    sc_signal< sc_lv<1> > exitcond1_fu_604_p2;
    sc_signal< sc_lv<1> > exitcond1_reg_870;
    sc_signal< sc_lv<1> > exitcond_flatten_fu_592_p2;
    sc_signal< sc_lv<32> > wr_mid2_v_v_fu_610_p3;
    sc_signal< sc_lv<32> > wr_mid2_v_v_reg_879;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<31> > tmp_60_fu_632_p3;
    sc_signal< sc_lv<31> > tmp_60_reg_886;
    sc_signal< sc_lv<32> > n_mid2_fu_644_p3;
    sc_signal< sc_lv<32> > n_mid2_reg_891;
    sc_signal< sc_lv<11> > tmp_61_fu_650_p1;
    sc_signal< sc_lv<11> > tmp_61_reg_896;
    sc_signal< sc_lv<32> > wr_mid2_v_fu_654_p2;
    sc_signal< sc_lv<32> > wr_mid2_v_reg_901;
    sc_signal< sc_logic > ap_CS_fsm_state23;
    sc_signal< sc_lv<8> > j_3_mid2_fu_659_p3;
    sc_signal< sc_lv<8> > j_3_mid2_reg_906;
    sc_signal< sc_logic > ap_CS_fsm_state24;
    sc_signal< sc_lv<32> > grp_fu_616_p2;
    sc_signal< sc_lv<32> > nb_mid2_reg_922;
    sc_signal< sc_lv<39> > cp_rec_mid2_fu_671_p3;
    sc_signal< sc_lv<39> > cp_rec_mid2_reg_927;
    sc_signal< sc_logic > ap_CS_fsm_state25;
    sc_signal< sc_lv<32> > cosVec_load_reg_932;
    sc_signal< sc_lv<32> > sinVec_load_reg_938;
    sc_signal< sc_lv<11> > tmp_62_fu_681_p1;
    sc_signal< sc_lv<11> > tmp_62_reg_944;
    sc_signal< sc_lv<1> > tmp_64_fu_685_p2;
    sc_signal< sc_lv<1> > tmp_64_reg_952;
    sc_signal< sc_lv<1> > exitcond_fu_690_p2;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage0;
    sc_signal< bool > ap_block_state26_pp1_stage0_iter0;
    sc_signal< bool > ap_block_state51_pp1_stage0_iter1;
    sc_signal< bool > ap_block_pp1_stage0_11001;
    sc_signal< sc_lv<8> > k_4_fu_696_p2;
    sc_signal< sc_lv<8> > k_4_reg_960;
    sc_signal< sc_lv<1> > tmp_68_fu_706_p2;
    sc_signal< sc_lv<9> > c_addr_7_reg_969;
    sc_signal< sc_lv<9> > c_addr_8_reg_974;
    sc_signal< sc_lv<9> > c_addr_9_reg_979;
    sc_signal< sc_lv<9> > c_addr_10_reg_984;
    sc_signal< sc_lv<32> > grp_fu_360_p2;
    sc_signal< sc_lv<32> > tmp_78_reg_989;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage4;
    sc_signal< bool > ap_block_state30_pp1_stage4_iter0;
    sc_signal< bool > ap_block_pp1_stage4_11001;
    sc_signal< sc_lv<32> > grp_fu_365_p2;
    sc_signal< sc_lv<32> > tmp_79_reg_994;
    sc_signal< sc_lv<32> > grp_fu_370_p2;
    sc_signal< sc_lv<32> > tmp_80_reg_999;
    sc_signal< sc_lv<32> > grp_fu_375_p2;
    sc_signal< sc_lv<32> > tmp_81_reg_1004;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage6;
    sc_signal< bool > ap_block_state32_pp1_stage6_iter0;
    sc_signal< bool > ap_block_pp1_stage6_11001;
    sc_signal< sc_lv<32> > tmp_72_reg_1019;
    sc_signal< sc_lv<32> > tmp_73_reg_1024;
    sc_signal< sc_lv<32> > wrk_reg_1029;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage13;
    sc_signal< bool > ap_block_state39_pp1_stage13_iter0;
    sc_signal< bool > ap_block_pp1_stage13_11001;
    sc_signal< sc_lv<32> > grp_fu_353_p2;
    sc_signal< sc_lv<32> > wik_2_reg_1034;
    sc_signal< sc_lv<32> > di_1_reg_1039;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage15;
    sc_signal< bool > ap_block_state41_pp1_stage15_iter0;
    sc_signal< bool > ap_block_pp1_stage15_11001;
    sc_signal< sc_lv<32> > tmp_76_reg_1044;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage23;
    sc_signal< bool > ap_block_state49_pp1_stage23_iter0;
    sc_signal< bool > ap_block_pp1_stage23_11001;
    sc_signal< sc_lv<8> > j_5_fu_782_p2;
    sc_signal< sc_lv<8> > j_5_reg_1049;
    sc_signal< sc_logic > ap_CS_fsm_state52;
    sc_signal< sc_lv<39> > cp_addr_rec_fu_791_p2;
    sc_signal< sc_logic > ap_CS_fsm_state53;
    sc_signal< bool > ap_block_pp1_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp1_exit_iter0_state26;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter1;
    sc_signal< bool > ap_block_pp1_stage24_subdone;
    sc_signal< sc_lv<9> > k_reg_175;
    sc_signal< sc_lv<32> > j_reg_186;
    sc_signal< sc_lv<4> > q_reg_198;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<32> > j_1_reg_209;
    sc_signal< sc_lv<32> > n3_reg_220;
    sc_signal< sc_lv<11> > indvar_flatten_reg_232;
    sc_signal< sc_lv<32> > n_2_reg_243;
    sc_signal< sc_lv<8> > j_3_reg_255;
    sc_signal< sc_lv<39> > cp_rec_reg_267;
    sc_signal< sc_lv<32> > ap_phi_mux_d_phi_fu_283_p4;
    sc_signal< bool > ap_block_pp1_stage0;
    sc_signal< sc_lv<32> > ap_phi_mux_wik_phi_fu_295_p4;
    sc_signal< sc_lv<8> > ap_phi_mux_k_1_phi_fu_307_p4;
    sc_signal< sc_lv<32> > ap_phi_reg_pp1_iter0_wrk_1_reg_314;
    sc_signal< sc_lv<32> > ap_phi_reg_pp1_iter0_wik_1_reg_326;
    sc_signal< sc_lv<32> > cp_s_reg_338;
    sc_signal< sc_lv<64> > tmp_53_fu_456_p1;
    sc_signal< sc_lv<64> > tmp_55_fu_467_p1;
    sc_signal< sc_lv<64> > tmp_56_fu_478_p1;
    sc_signal< sc_lv<64> > tmp_58_fu_489_p1;
    sc_signal< sc_lv<64> > wr_mid2_fu_666_p1;
    sc_signal< sc_lv<64> > cp_sum_cast_fu_726_p1;
    sc_signal< sc_lv<64> > cp_sum9_cast_fu_746_p1;
    sc_signal< sc_lv<64> > cp_sum1_cast_fu_761_p1;
    sc_signal< sc_lv<64> > cp_sum2_cast_fu_777_p1;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage1;
    sc_signal< bool > ap_block_state27_pp1_stage1_iter0;
    sc_signal< bool > ap_block_pp1_stage1_11001;
    sc_signal< bool > ap_block_pp1_stage1;
    sc_signal< bool > ap_block_pp1_stage2;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage22;
    sc_signal< bool > ap_block_state48_pp1_stage22_iter0;
    sc_signal< bool > ap_block_pp1_stage22_11001;
    sc_signal< bool > ap_block_pp1_stage22;
    sc_signal< bool > ap_block_pp1_stage23;
    sc_signal< bool > ap_block_pp1_stage24;
    sc_signal< sc_lv<32> > grp_fu_349_p0;
    sc_signal< sc_lv<32> > grp_fu_349_p1;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage5;
    sc_signal< bool > ap_block_pp1_stage5;
    sc_signal< bool > ap_block_pp1_stage6;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage7;
    sc_signal< bool > ap_block_pp1_stage7;
    sc_signal< bool > ap_block_pp1_stage14;
    sc_signal< bool > ap_block_pp1_stage15;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage16;
    sc_signal< bool > ap_block_pp1_stage16;
    sc_signal< sc_lv<32> > grp_fu_353_p0;
    sc_signal< sc_lv<32> > grp_fu_353_p1;
    sc_signal< sc_lv<32> > grp_fu_360_p0;
    sc_signal< sc_lv<32> > grp_fu_360_p1;
    sc_signal< sc_lv<32> > grp_fu_365_p0;
    sc_signal< sc_lv<32> > grp_fu_365_p1;
    sc_signal< sc_lv<32> > grp_fu_370_p0;
    sc_signal< sc_lv<32> > grp_fu_370_p1;
    sc_signal< sc_lv<32> > grp_fu_375_p0;
    sc_signal< sc_lv<32> > grp_fu_375_p1;
    sc_signal< sc_lv<32> > k_cast3_fu_440_p1;
    sc_signal< sc_lv<9> > i0_fu_450_p2;
    sc_signal< sc_lv<9> > tmp_54_fu_461_p2;
    sc_signal< sc_lv<32> > i1_fu_472_p2;
    sc_signal< sc_lv<32> > tmp_57_fu_483_p2;
    sc_signal< sc_lv<1> > slt_fu_506_p2;
    sc_signal< sc_lv<31> > tmp_65_fu_518_p4;
    sc_signal< sc_lv<1> > rev_fu_512_p2;
    sc_signal< sc_lv<1> > icmp_fu_528_p2;
    sc_signal< sc_lv<31> > tmp_66_fu_546_p4;
    sc_signal< sc_lv<1> > or_cond_fu_534_p2;
    sc_signal< sc_lv<32> > j_6_fu_540_p2;
    sc_signal< sc_lv<32> > n_3_fu_556_p1;
    sc_signal< sc_lv<11> > grp_fu_616_p0;
    sc_signal< sc_lv<31> > tmp_59_fu_622_p4;
    sc_signal< sc_lv<32> > tmp_52_fu_638_p2;
    sc_signal< sc_lv<32> > j_3_cast2_fu_678_p1;
    sc_signal< sc_lv<31> > k_1_cast1_fu_702_p1;
    sc_signal< sc_lv<8> > i0_1_fu_711_p2;
    sc_signal< sc_lv<11> > tmp_39_fu_717_p1;
    sc_signal< sc_lv<11> > cp_sum_fu_721_p2;
    sc_signal< sc_lv<8> > tmp_69_fu_731_p2;
    sc_signal< sc_lv<11> > tmp_75_cast_fu_737_p1;
    sc_signal< sc_lv<11> > cp_sum9_fu_741_p2;
    sc_signal< sc_lv<11> > tmp_76_cast_fu_751_p2;
    sc_signal< sc_lv<11> > cp_sum1_fu_756_p2;
    sc_signal< sc_lv<11> > tmp_78_cast_fu_766_p2;
    sc_signal< sc_lv<11> > cp_sum2_fu_772_p2;
    sc_signal< sc_lv<39> > cp_cast_fu_787_p1;
    sc_signal< sc_lv<2> > grp_fu_349_opcode;
    sc_signal< bool > ap_block_state33_pp1_stage7_iter0;
    sc_signal< bool > ap_block_pp1_stage7_00001;
    sc_signal< bool > ap_block_pp1_stage14_00001;
    sc_signal< bool > ap_block_pp1_stage15_00001;
    sc_signal< bool > ap_block_state31_pp1_stage5_iter0;
    sc_signal< bool > ap_block_pp1_stage5_00001;
    sc_signal< bool > ap_block_pp1_stage6_00001;
    sc_signal< bool > ap_block_state42_pp1_stage16_iter0;
    sc_signal< bool > ap_block_pp1_stage16_00001;
    sc_signal< sc_lv<2> > grp_fu_353_opcode;
    sc_signal< sc_logic > grp_fu_616_ap_start;
    sc_signal< sc_logic > grp_fu_616_ap_done;
    sc_signal< sc_lv<52> > ap_NS_fsm;
    sc_signal< bool > ap_block_pp1_stage1_subdone;
    sc_signal< bool > ap_block_pp1_stage2_subdone;
    sc_signal< bool > ap_block_pp1_stage3_subdone;
    sc_signal< bool > ap_block_pp1_stage4_subdone;
    sc_signal< bool > ap_block_pp1_stage5_subdone;
    sc_signal< bool > ap_block_pp1_stage6_subdone;
    sc_signal< bool > ap_block_pp1_stage7_subdone;
    sc_signal< bool > ap_block_state34_pp1_stage8_iter0;
    sc_signal< bool > ap_block_pp1_stage8_subdone;
    sc_signal< bool > ap_block_state35_pp1_stage9_iter0;
    sc_signal< bool > ap_block_pp1_stage9_subdone;
    sc_signal< bool > ap_block_state36_pp1_stage10_iter0;
    sc_signal< bool > ap_block_pp1_stage10_subdone;
    sc_signal< bool > ap_block_state37_pp1_stage11_iter0;
    sc_signal< bool > ap_block_pp1_stage11_subdone;
    sc_signal< bool > ap_block_state38_pp1_stage12_iter0;
    sc_signal< bool > ap_block_pp1_stage12_subdone;
    sc_signal< bool > ap_block_pp1_stage13_subdone;
    sc_signal< bool > ap_block_pp1_stage14_subdone;
    sc_signal< bool > ap_block_pp1_stage15_subdone;
    sc_signal< bool > ap_block_pp1_stage16_subdone;
    sc_signal< bool > ap_block_state43_pp1_stage17_iter0;
    sc_signal< bool > ap_block_pp1_stage17_subdone;
    sc_signal< bool > ap_block_state44_pp1_stage18_iter0;
    sc_signal< bool > ap_block_pp1_stage18_subdone;
    sc_signal< bool > ap_block_state45_pp1_stage19_iter0;
    sc_signal< bool > ap_block_pp1_stage19_subdone;
    sc_signal< bool > ap_block_state46_pp1_stage20_iter0;
    sc_signal< bool > ap_block_pp1_stage20_subdone;
    sc_signal< bool > ap_block_state47_pp1_stage21_iter0;
    sc_signal< bool > ap_block_pp1_stage21_subdone;
    sc_signal< bool > ap_block_pp1_stage22_subdone;
    sc_signal< bool > ap_block_pp1_stage23_subdone;
    sc_signal< sc_logic > ap_idle_pp1;
    sc_signal< sc_logic > ap_enable_pp1;
    sc_signal< bool > ap_condition_1138;
    sc_signal< bool > ap_condition_1141;
    sc_signal< bool > ap_condition_1145;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<52> ap_ST_fsm_state1;
    static const sc_lv<52> ap_ST_fsm_state2;
    static const sc_lv<52> ap_ST_fsm_state3;
    static const sc_lv<52> ap_ST_fsm_state4;
    static const sc_lv<52> ap_ST_fsm_state5;
    static const sc_lv<52> ap_ST_fsm_state6;
    static const sc_lv<52> ap_ST_fsm_state7;
    static const sc_lv<52> ap_ST_fsm_state8;
    static const sc_lv<52> ap_ST_fsm_state9;
    static const sc_lv<52> ap_ST_fsm_state10;
    static const sc_lv<52> ap_ST_fsm_state11;
    static const sc_lv<52> ap_ST_fsm_state12;
    static const sc_lv<52> ap_ST_fsm_state13;
    static const sc_lv<52> ap_ST_fsm_state14;
    static const sc_lv<52> ap_ST_fsm_state15;
    static const sc_lv<52> ap_ST_fsm_state16;
    static const sc_lv<52> ap_ST_fsm_state17;
    static const sc_lv<52> ap_ST_fsm_state18;
    static const sc_lv<52> ap_ST_fsm_state19;
    static const sc_lv<52> ap_ST_fsm_state20;
    static const sc_lv<52> ap_ST_fsm_state21;
    static const sc_lv<52> ap_ST_fsm_state22;
    static const sc_lv<52> ap_ST_fsm_state23;
    static const sc_lv<52> ap_ST_fsm_state24;
    static const sc_lv<52> ap_ST_fsm_state25;
    static const sc_lv<52> ap_ST_fsm_pp1_stage0;
    static const sc_lv<52> ap_ST_fsm_pp1_stage1;
    static const sc_lv<52> ap_ST_fsm_pp1_stage2;
    static const sc_lv<52> ap_ST_fsm_pp1_stage3;
    static const sc_lv<52> ap_ST_fsm_pp1_stage4;
    static const sc_lv<52> ap_ST_fsm_pp1_stage5;
    static const sc_lv<52> ap_ST_fsm_pp1_stage6;
    static const sc_lv<52> ap_ST_fsm_pp1_stage7;
    static const sc_lv<52> ap_ST_fsm_pp1_stage8;
    static const sc_lv<52> ap_ST_fsm_pp1_stage9;
    static const sc_lv<52> ap_ST_fsm_pp1_stage10;
    static const sc_lv<52> ap_ST_fsm_pp1_stage11;
    static const sc_lv<52> ap_ST_fsm_pp1_stage12;
    static const sc_lv<52> ap_ST_fsm_pp1_stage13;
    static const sc_lv<52> ap_ST_fsm_pp1_stage14;
    static const sc_lv<52> ap_ST_fsm_pp1_stage15;
    static const sc_lv<52> ap_ST_fsm_pp1_stage16;
    static const sc_lv<52> ap_ST_fsm_pp1_stage17;
    static const sc_lv<52> ap_ST_fsm_pp1_stage18;
    static const sc_lv<52> ap_ST_fsm_pp1_stage19;
    static const sc_lv<52> ap_ST_fsm_pp1_stage20;
    static const sc_lv<52> ap_ST_fsm_pp1_stage21;
    static const sc_lv<52> ap_ST_fsm_pp1_stage22;
    static const sc_lv<52> ap_ST_fsm_pp1_stage23;
    static const sc_lv<52> ap_ST_fsm_pp1_stage24;
    static const sc_lv<52> ap_ST_fsm_state52;
    static const sc_lv<52> ap_ST_fsm_state53;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_1B;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_1C;
    static const sc_lv<32> ap_const_lv32_27;
    static const sc_lv<32> ap_const_lv32_31;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_18;
    static const sc_lv<32> ap_const_lv32_19;
    static const sc_lv<32> ap_const_lv32_1D;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_26;
    static const sc_lv<32> ap_const_lv32_28;
    static const sc_lv<32> ap_const_lv32_30;
    static const sc_lv<32> ap_const_lv32_32;
    static const sc_lv<32> ap_const_lv32_33;
    static const sc_lv<9> ap_const_lv9_0;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_80;
    static const sc_lv<11> ap_const_lv11_0;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<39> ap_const_lv39_0;
    static const sc_lv<32> ap_const_lv32_3F800000;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_1A;
    static const sc_lv<32> ap_const_lv32_2F;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<32> ap_const_lv32_29;
    static const sc_lv<9> ap_const_lv9_100;
    static const sc_lv<9> ap_const_lv9_1;
    static const sc_lv<4> ap_const_lv4_8;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<31> ap_const_lv31_0;
    static const sc_lv<11> ap_const_lv11_400;
    static const sc_lv<11> ap_const_lv11_1;
    static const sc_lv<8> ap_const_lv8_80;
    static const sc_lv<32> ap_const_lv32_100;
    static const sc_lv<32> ap_const_lv32_FFFFFFFF;
    static const sc_lv<8> ap_const_lv8_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<2> ap_const_lv2_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_pp1_stage0();
    void thread_ap_CS_fsm_pp1_stage1();
    void thread_ap_CS_fsm_pp1_stage13();
    void thread_ap_CS_fsm_pp1_stage14();
    void thread_ap_CS_fsm_pp1_stage15();
    void thread_ap_CS_fsm_pp1_stage16();
    void thread_ap_CS_fsm_pp1_stage2();
    void thread_ap_CS_fsm_pp1_stage22();
    void thread_ap_CS_fsm_pp1_stage23();
    void thread_ap_CS_fsm_pp1_stage24();
    void thread_ap_CS_fsm_pp1_stage3();
    void thread_ap_CS_fsm_pp1_stage4();
    void thread_ap_CS_fsm_pp1_stage5();
    void thread_ap_CS_fsm_pp1_stage6();
    void thread_ap_CS_fsm_pp1_stage7();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state23();
    void thread_ap_CS_fsm_state24();
    void thread_ap_CS_fsm_state25();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state52();
    void thread_ap_CS_fsm_state53();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_block_pp1_stage0();
    void thread_ap_block_pp1_stage0_11001();
    void thread_ap_block_pp1_stage0_subdone();
    void thread_ap_block_pp1_stage1();
    void thread_ap_block_pp1_stage10_subdone();
    void thread_ap_block_pp1_stage11_subdone();
    void thread_ap_block_pp1_stage12_subdone();
    void thread_ap_block_pp1_stage13_11001();
    void thread_ap_block_pp1_stage13_subdone();
    void thread_ap_block_pp1_stage14();
    void thread_ap_block_pp1_stage14_00001();
    void thread_ap_block_pp1_stage14_11001();
    void thread_ap_block_pp1_stage14_subdone();
    void thread_ap_block_pp1_stage15();
    void thread_ap_block_pp1_stage15_00001();
    void thread_ap_block_pp1_stage15_11001();
    void thread_ap_block_pp1_stage15_subdone();
    void thread_ap_block_pp1_stage16();
    void thread_ap_block_pp1_stage16_00001();
    void thread_ap_block_pp1_stage16_subdone();
    void thread_ap_block_pp1_stage17_subdone();
    void thread_ap_block_pp1_stage18_subdone();
    void thread_ap_block_pp1_stage19_subdone();
    void thread_ap_block_pp1_stage1_11001();
    void thread_ap_block_pp1_stage1_subdone();
    void thread_ap_block_pp1_stage2();
    void thread_ap_block_pp1_stage20_subdone();
    void thread_ap_block_pp1_stage21_subdone();
    void thread_ap_block_pp1_stage22();
    void thread_ap_block_pp1_stage22_11001();
    void thread_ap_block_pp1_stage22_subdone();
    void thread_ap_block_pp1_stage23();
    void thread_ap_block_pp1_stage23_11001();
    void thread_ap_block_pp1_stage23_subdone();
    void thread_ap_block_pp1_stage24();
    void thread_ap_block_pp1_stage24_11001();
    void thread_ap_block_pp1_stage24_subdone();
    void thread_ap_block_pp1_stage2_11001();
    void thread_ap_block_pp1_stage2_subdone();
    void thread_ap_block_pp1_stage3_11001();
    void thread_ap_block_pp1_stage3_subdone();
    void thread_ap_block_pp1_stage4_11001();
    void thread_ap_block_pp1_stage4_subdone();
    void thread_ap_block_pp1_stage5();
    void thread_ap_block_pp1_stage5_00001();
    void thread_ap_block_pp1_stage5_subdone();
    void thread_ap_block_pp1_stage6();
    void thread_ap_block_pp1_stage6_00001();
    void thread_ap_block_pp1_stage6_11001();
    void thread_ap_block_pp1_stage6_subdone();
    void thread_ap_block_pp1_stage7();
    void thread_ap_block_pp1_stage7_00001();
    void thread_ap_block_pp1_stage7_subdone();
    void thread_ap_block_pp1_stage8_subdone();
    void thread_ap_block_pp1_stage9_subdone();
    void thread_ap_block_state26_pp1_stage0_iter0();
    void thread_ap_block_state27_pp1_stage1_iter0();
    void thread_ap_block_state28_pp1_stage2_iter0();
    void thread_ap_block_state29_pp1_stage3_iter0();
    void thread_ap_block_state30_pp1_stage4_iter0();
    void thread_ap_block_state31_pp1_stage5_iter0();
    void thread_ap_block_state32_pp1_stage6_iter0();
    void thread_ap_block_state33_pp1_stage7_iter0();
    void thread_ap_block_state34_pp1_stage8_iter0();
    void thread_ap_block_state35_pp1_stage9_iter0();
    void thread_ap_block_state36_pp1_stage10_iter0();
    void thread_ap_block_state37_pp1_stage11_iter0();
    void thread_ap_block_state38_pp1_stage12_iter0();
    void thread_ap_block_state39_pp1_stage13_iter0();
    void thread_ap_block_state40_pp1_stage14_iter0();
    void thread_ap_block_state41_pp1_stage15_iter0();
    void thread_ap_block_state42_pp1_stage16_iter0();
    void thread_ap_block_state43_pp1_stage17_iter0();
    void thread_ap_block_state44_pp1_stage18_iter0();
    void thread_ap_block_state45_pp1_stage19_iter0();
    void thread_ap_block_state46_pp1_stage20_iter0();
    void thread_ap_block_state47_pp1_stage21_iter0();
    void thread_ap_block_state48_pp1_stage22_iter0();
    void thread_ap_block_state49_pp1_stage23_iter0();
    void thread_ap_block_state50_pp1_stage24_iter0();
    void thread_ap_block_state51_pp1_stage0_iter1();
    void thread_ap_condition_1138();
    void thread_ap_condition_1141();
    void thread_ap_condition_1145();
    void thread_ap_condition_pp1_exit_iter0_state26();
    void thread_ap_done();
    void thread_ap_enable_pp1();
    void thread_ap_idle();
    void thread_ap_idle_pp1();
    void thread_ap_phi_mux_d_phi_fu_283_p4();
    void thread_ap_phi_mux_k_1_phi_fu_307_p4();
    void thread_ap_phi_mux_wik_phi_fu_295_p4();
    void thread_ap_ready();
    void thread_c_address0();
    void thread_c_address1();
    void thread_c_ce0();
    void thread_c_ce1();
    void thread_c_d0();
    void thread_c_d1();
    void thread_c_we0();
    void thread_c_we1();
    void thread_cosVec_address0();
    void thread_cosVec_ce0();
    void thread_cp_addr_rec_fu_791_p2();
    void thread_cp_cast_fu_787_p1();
    void thread_cp_rec_mid2_fu_671_p3();
    void thread_cp_sum1_cast_fu_761_p1();
    void thread_cp_sum1_fu_756_p2();
    void thread_cp_sum2_cast_fu_777_p1();
    void thread_cp_sum2_fu_772_p2();
    void thread_cp_sum9_cast_fu_746_p1();
    void thread_cp_sum9_fu_741_p2();
    void thread_cp_sum_cast_fu_726_p1();
    void thread_cp_sum_fu_721_p2();
    void thread_exitcond1_fu_604_p2();
    void thread_exitcond2_fu_494_p2();
    void thread_exitcond3_fu_428_p2();
    void thread_exitcond_flatten_fu_592_p2();
    void thread_exitcond_fu_690_p2();
    void thread_grp_fu_349_opcode();
    void thread_grp_fu_349_p0();
    void thread_grp_fu_349_p1();
    void thread_grp_fu_353_opcode();
    void thread_grp_fu_353_p0();
    void thread_grp_fu_353_p1();
    void thread_grp_fu_360_p0();
    void thread_grp_fu_360_p1();
    void thread_grp_fu_365_p0();
    void thread_grp_fu_365_p1();
    void thread_grp_fu_370_p0();
    void thread_grp_fu_370_p1();
    void thread_grp_fu_375_p0();
    void thread_grp_fu_375_p1();
    void thread_grp_fu_616_ap_start();
    void thread_grp_fu_616_p0();
    void thread_i0_1_fu_711_p2();
    void thread_i0_fu_450_p2();
    void thread_i1_fu_472_p2();
    void thread_icmp_fu_528_p2();
    void thread_indvar_flatten_next_fu_598_p2();
    void thread_j_2_fu_560_p3();
    void thread_j_3_cast2_fu_678_p1();
    void thread_j_3_mid2_fu_659_p3();
    void thread_j_4_fu_576_p2();
    void thread_j_5_fu_782_p2();
    void thread_j_6_fu_540_p2();
    void thread_k_1_cast1_fu_702_p1();
    void thread_k_3_fu_434_p2();
    void thread_k_4_fu_696_p2();
    void thread_k_cast3_fu_440_p1();
    void thread_n_1_fu_568_p3();
    void thread_n_3_fu_556_p1();
    void thread_n_fu_586_p2();
    void thread_n_mid2_fu_644_p3();
    void thread_or_cond_fu_534_p2();
    void thread_q_1_fu_500_p2();
    void thread_rev_fu_512_p2();
    void thread_sinVec_address0();
    void thread_sinVec_ce0();
    void thread_slt_fu_506_p2();
    void thread_tmp_39_fu_717_p1();
    void thread_tmp_48_fu_582_p1();
    void thread_tmp_52_fu_638_p2();
    void thread_tmp_53_fu_456_p1();
    void thread_tmp_54_fu_461_p2();
    void thread_tmp_55_fu_467_p1();
    void thread_tmp_56_fu_478_p1();
    void thread_tmp_57_fu_483_p2();
    void thread_tmp_58_fu_489_p1();
    void thread_tmp_59_fu_622_p4();
    void thread_tmp_60_fu_632_p3();
    void thread_tmp_61_fu_650_p1();
    void thread_tmp_62_fu_681_p1();
    void thread_tmp_64_fu_685_p2();
    void thread_tmp_65_fu_518_p4();
    void thread_tmp_66_fu_546_p4();
    void thread_tmp_68_fu_706_p2();
    void thread_tmp_69_fu_731_p2();
    void thread_tmp_75_cast_fu_737_p1();
    void thread_tmp_76_cast_fu_751_p2();
    void thread_tmp_78_cast_fu_766_p2();
    void thread_tmp_fu_444_p2();
    void thread_wr_mid2_fu_666_p1();
    void thread_wr_mid2_v_fu_654_p2();
    void thread_wr_mid2_v_v_fu_610_p3();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
