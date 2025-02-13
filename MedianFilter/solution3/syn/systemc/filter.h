// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _filter_HH_
#define _filter_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "bubble_sort.h"
#include "filter_temp_array_0.h"

namespace ap_rtl {

struct filter : public sc_module {
    // Port declarations 13
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<32> > in_stream_V_dout;
    sc_in< sc_logic > in_stream_V_empty_n;
    sc_out< sc_logic > in_stream_V_read;
    sc_out< sc_lv<32> > out_stream_V_din;
    sc_in< sc_logic > out_stream_V_full_n;
    sc_out< sc_logic > out_stream_V_write;


    // Module declarations
    filter(sc_module_name name);
    SC_HAS_PROCESS(filter);

    ~filter();

    sc_trace_file* mVcdFile;

    filter_temp_array_0* temp_array_0_U;
    filter_temp_array_0* temp_array_1_U;
    bubble_sort* grp_bubble_sort_fu_196;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<3> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > in_stream_V_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_420;
    sc_signal< sc_logic > out_stream_V_blk_n;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter13;
    sc_signal< sc_lv<1> > or_cond_reg_446;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter12_or_cond_reg_446;
    sc_signal< sc_lv<19> > indvar_flatten_reg_163;
    sc_signal< sc_lv<10> > i_reg_174;
    sc_signal< sc_lv<10> > j_reg_185;
    sc_signal< sc_lv<1> > exitcond_flatten_fu_210_p2;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter2;
    sc_signal< bool > ap_block_state5_pp0_stage0_iter3;
    sc_signal< bool > ap_block_state6_pp0_stage0_iter4;
    sc_signal< bool > ap_block_state7_pp0_stage0_iter5;
    sc_signal< bool > ap_block_state8_pp0_stage0_iter6;
    sc_signal< bool > ap_block_state9_pp0_stage0_iter7;
    sc_signal< bool > ap_block_state10_pp0_stage0_iter8;
    sc_signal< bool > ap_block_state11_pp0_stage0_iter9;
    sc_signal< bool > ap_block_state12_pp0_stage0_iter10;
    sc_signal< bool > ap_block_state13_pp0_stage0_iter11;
    sc_signal< bool > ap_block_state14_pp0_stage0_iter12;
    sc_signal< bool > ap_block_state15_pp0_stage0_iter13;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter1_exitcond_flatten_reg_420;
    sc_signal< sc_lv<19> > indvar_flatten_next_fu_216_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<10> > i_mid2_fu_282_p3;
    sc_signal< sc_lv<10> > temp_array_0_addr_reg_434;
    sc_signal< sc_lv<10> > temp_array_1_addr_reg_440;
    sc_signal< sc_lv<1> > or_cond_fu_312_p2;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter1_or_cond_reg_446;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter2_or_cond_reg_446;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter3_or_cond_reg_446;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter4_or_cond_reg_446;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter5_or_cond_reg_446;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter6_or_cond_reg_446;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter7_or_cond_reg_446;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter8_or_cond_reg_446;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter9_or_cond_reg_446;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter10_or_cond_reg_446;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter11_or_cond_reg_446;
    sc_signal< sc_lv<10> > j_1_fu_318_p2;
    sc_signal< sc_lv<32> > crop_0_0_load_reg_455;
    sc_signal< sc_lv<32> > crop_2_0_load_reg_460;
    sc_signal< sc_lv<32> > crop_1_0_load_reg_465;
    sc_signal< sc_lv<32> > crop_2_1_load_1_reg_470;
    sc_signal< sc_lv<32> > crop_0_1_load_1_reg_475;
    sc_signal< sc_lv<32> > crop_1_1_load_1_reg_480;
    sc_signal< sc_lv<32> > tmp_5_reg_485;
    sc_signal< sc_lv<32> > temp_array_0_q0;
    sc_signal< sc_lv<32> > crop_0_2_reg_490;
    sc_signal< sc_lv<32> > temp_array_1_q0;
    sc_signal< sc_lv<32> > crop_1_2_reg_495;
    sc_signal< bool > ap_block_state1;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter1_state3;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter3;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter4;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter5;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter6;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter7;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter8;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter9;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter10;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter11;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter12;
    sc_signal< sc_lv<10> > temp_array_0_address0;
    sc_signal< sc_logic > temp_array_0_ce0;
    sc_signal< sc_logic > temp_array_0_ce1;
    sc_signal< sc_logic > temp_array_0_we1;
    sc_signal< sc_lv<10> > temp_array_1_address0;
    sc_signal< sc_logic > temp_array_1_ce0;
    sc_signal< sc_logic > temp_array_1_ce1;
    sc_signal< sc_logic > temp_array_1_we1;
    sc_signal< sc_lv<32> > grp_bubble_sort_fu_196_ap_return;
    sc_signal< sc_logic > grp_bubble_sort_fu_196_ap_ce;
    sc_signal< sc_lv<64> > tmp_8_fu_290_p1;
    sc_signal< bool > ap_block_pp0_stage0_01001;
    sc_signal< sc_lv<32> > crop_2_1_fu_88;
    sc_signal< sc_lv<32> > crop_0_0_fu_92;
    sc_signal< sc_lv<32> > crop_0_1_fu_96;
    sc_signal< sc_lv<32> > crop_2_0_fu_100;
    sc_signal< sc_lv<32> > crop_1_0_fu_104;
    sc_signal< sc_lv<32> > crop_1_1_fu_108;
    sc_signal< sc_lv<1> > exitcond_fu_222_p2;
    sc_signal< sc_lv<10> > i_s_fu_236_p2;
    sc_signal< sc_lv<9> > tmp_fu_242_p4;
    sc_signal< sc_lv<9> > tmp_1_fu_258_p4;
    sc_signal< sc_lv<1> > icmp_fu_252_p2;
    sc_signal< sc_lv<1> > icmp1_fu_268_p2;
    sc_signal< sc_lv<10> > j_mid2_fu_228_p3;
    sc_signal< sc_lv<9> > tmp_3_fu_296_p4;
    sc_signal< sc_lv<1> > tmp_mid2_fu_274_p3;
    sc_signal< sc_lv<1> > icmp2_fu_306_p2;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_lv<3> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<3> ap_ST_fsm_state1;
    static const sc_lv<3> ap_ST_fsm_pp0_stage0;
    static const sc_lv<3> ap_ST_fsm_state16;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<19> ap_const_lv19_0;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<19> ap_const_lv19_57E40;
    static const sc_lv<19> ap_const_lv19_1;
    static const sc_lv<10> ap_const_lv10_258;
    static const sc_lv<10> ap_const_lv10_1;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<9> ap_const_lv9_0;
    static const sc_lv<32> ap_const_lv32_2;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state16();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_01001();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state1();
    void thread_ap_block_state10_pp0_stage0_iter8();
    void thread_ap_block_state11_pp0_stage0_iter9();
    void thread_ap_block_state12_pp0_stage0_iter10();
    void thread_ap_block_state13_pp0_stage0_iter11();
    void thread_ap_block_state14_pp0_stage0_iter12();
    void thread_ap_block_state15_pp0_stage0_iter13();
    void thread_ap_block_state2_pp0_stage0_iter0();
    void thread_ap_block_state3_pp0_stage0_iter1();
    void thread_ap_block_state4_pp0_stage0_iter2();
    void thread_ap_block_state5_pp0_stage0_iter3();
    void thread_ap_block_state6_pp0_stage0_iter4();
    void thread_ap_block_state7_pp0_stage0_iter5();
    void thread_ap_block_state8_pp0_stage0_iter6();
    void thread_ap_block_state9_pp0_stage0_iter7();
    void thread_ap_condition_pp0_exit_iter1_state3();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_ready();
    void thread_exitcond_flatten_fu_210_p2();
    void thread_exitcond_fu_222_p2();
    void thread_grp_bubble_sort_fu_196_ap_ce();
    void thread_i_mid2_fu_282_p3();
    void thread_i_s_fu_236_p2();
    void thread_icmp1_fu_268_p2();
    void thread_icmp2_fu_306_p2();
    void thread_icmp_fu_252_p2();
    void thread_in_stream_V_blk_n();
    void thread_in_stream_V_read();
    void thread_indvar_flatten_next_fu_216_p2();
    void thread_j_1_fu_318_p2();
    void thread_j_mid2_fu_228_p3();
    void thread_or_cond_fu_312_p2();
    void thread_out_stream_V_blk_n();
    void thread_out_stream_V_din();
    void thread_out_stream_V_write();
    void thread_temp_array_0_address0();
    void thread_temp_array_0_ce0();
    void thread_temp_array_0_ce1();
    void thread_temp_array_0_we1();
    void thread_temp_array_1_address0();
    void thread_temp_array_1_ce0();
    void thread_temp_array_1_ce1();
    void thread_temp_array_1_we1();
    void thread_tmp_1_fu_258_p4();
    void thread_tmp_3_fu_296_p4();
    void thread_tmp_8_fu_290_p1();
    void thread_tmp_fu_242_p4();
    void thread_tmp_mid2_fu_274_p3();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
