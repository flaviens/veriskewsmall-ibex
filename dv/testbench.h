// Copyright Flavien Solt, ETH Zurich.
// Licensed under the General Public License, Version 3.0, see LICENSE for details.
// SPDX-License-Identifier: GPL-3.0-only

#include "Vauxy_ibex_top.h"
#include "verilated.h"

#if VM_TRACE
#if VM_TRACE_FST
#include <verilated_fst_c.h>
#else
#include <verilated_vcd_c.h>
#endif // VM_TRACE_FST
#endif // VM_TRACE

#include <iostream>
#include <fstream>
#include <stdlib.h>

#ifndef TESTBENCH_H
#define TESTBENCH_H

#if VM_TRACE
// Depth of the trace.
const int kTraceLevel = 6;
#endif // VM_TRACE

typedef Vauxy_ibex_top Module;

typedef struct {
// Mem top
  // uint64_t boot_addr_i;
  // uint64_t boot_addr_i_t0;
  // uint64_t clk_esc_i;
  // uint64_t clk_esc_i_t0;
  // uint64_t clk_i;
  // uint64_t data_mem_gnt_i;
  // uint64_t data_mem_gnt_i_t0;
  // uint64_t data_mem_rdata_i;
  // uint64_t data_mem_rdata_i_t0;
  // uint64_t debug_req_i;
  // uint64_t debug_req_i_t0;
  // uint64_t esc_tx_i;
  // uint64_t esc_tx_i_t0;
  // uint64_t hart_id_i;
  // uint64_t hart_id_i_t0;
  // uint64_t instr_mem_gnt_i;
  // uint64_t instr_mem_gnt_i_t0;
  // uint64_t instr_mem_rdata_i;
  // uint64_t instr_mem_rdata_i_t0;
  // uint64_t irq_external_i;
  // uint64_t irq_external_i_t0;
  // uint64_t irq_software_i;
  // uint64_t irq_software_i_t0;
  // uint64_t irq_timer_i;
  // uint64_t irq_timer_i_t0;
  // uint64_t lc_cpu_en_i;
  // uint64_t lc_cpu_en_i_t0;
  // uint64_t ram_cfg_i;
  // uint64_t ram_cfg_i_t0;
  // uint64_t rst_esc_ni;
  // uint64_t rst_esc_ni_t0;
  // uint64_t rst_ni;
  // uint64_t test_en_i;
  // uint64_t test_en_i_t0;

// Rv core
  // uint64_t boot_addr_i;
  // uint64_t boot_addr_i_t0;
  // uint64_t clk_esc_i;
  // uint64_t clk_esc_i_t0;
  // uint64_t clk_i;
  // uint64_t debug_req_i;
  // uint64_t debug_req_i_t0;
  // uint64_t esc_tx_i;
  // uint64_t esc_tx_i_t0;
  // uint64_t hart_id_i;
  // uint64_t hart_id_i_t0;
  // uint64_t irq_external_i;
  // uint64_t irq_external_i_t0;
  // uint64_t irq_software_i;
  // uint64_t irq_software_i_t0;
  // uint64_t irq_timer_i;
  // uint64_t irq_timer_i_t0;
  // uint64_t lc_cpu_en_i;
  // uint64_t lc_cpu_en_i_t0;
  // uint64_t ram_cfg_i;
  // uint64_t ram_cfg_i_t0;
  // uint64_t rst_esc_ni;
  // uint64_t rst_esc_ni_t0;
  // uint64_t rst_ni;
  // uint64_t test_en_i;
  // uint64_t test_en_i_t0;
  // uint64_t tl_d_i[2];
  // uint64_t tl_d_i_t0[2];
  // uint64_t tl_i_i[2];
  // uint64_t tl_i_i_t0[2];

// u_core
  uint64_t boot_addr_i;
  uint64_t boot_addr_i_t0;
  uint64_t clk_i;
  uint64_t data_err_i;
  uint64_t data_err_i_t0;
  uint64_t data_gnt_i;
  uint64_t data_gnt_i_t0;
  uint64_t data_rdata_i;
  uint64_t data_rdata_i_t0;
  uint64_t data_rvalid_i;
  uint64_t data_rvalid_i_t0;
  uint64_t debug_req_i;
  uint64_t debug_req_i_t0;
  uint64_t fetch_enable_i;
  uint64_t fetch_enable_i_t0;
  uint64_t hart_id_i;
  uint64_t hart_id_i_t0;
  uint64_t instr_err_i;
  uint64_t instr_err_i_t0;
  uint64_t instr_gnt_i;
  uint64_t instr_gnt_i_t0;
  uint64_t instr_rdata_i;
  uint64_t instr_rdata_i_t0;
  uint64_t instr_rvalid_i;
  uint64_t instr_rvalid_i_t0;
  uint64_t irq_external_i;
  uint64_t irq_external_i_t0;
  uint64_t irq_fast_i;
  uint64_t irq_fast_i_t0;
  uint64_t irq_nm_i;
  uint64_t irq_nm_i_t0;
  uint64_t irq_software_i;
  uint64_t irq_software_i_t0;
  uint64_t irq_timer_i;
  uint64_t irq_timer_i_t0;
  uint64_t ram_cfg_i;
  uint64_t ram_cfg_i_t0;
  uint64_t rst_ni;
  uint64_t test_en_i;
  uint64_t test_en_i_t0;

  } single_input_recording_t;

// This class implements elementary interaction with the design under test.
class Testbench {
 public:
  Testbench(const std::string &trace_filename = "")
      : module_(new Module), tick_count_(0l) {

#if VM_TRACE
#if VM_TRACE_FST
    trace_ = new VerilatedFstC;
#else // VM_TRACE_FST
    trace_ = new VerilatedVcdC;
#endif // VM_TRACE_FST
    module_->trace(trace_, kTraceLevel);
    trace_->open(trace_filename.c_str());
#endif // VM_TRACE
  }

  ~Testbench(void) { close_trace(); }

  void close_trace(void) {
#if VM_TRACE  
    trace_->close();
#endif // VM_TRACE
  }

  std::unique_ptr<Module> module_;
  #if VM_TRACE
  #if VM_TRACE_FST
    VerilatedFstC *trace_;
  #else // VM_TRACE_FST
    VerilatedVcdC *trace_;
  #endif // VM_TRACE_FST
  #endif // VM_TRACE
 private:
  vluint32_t tick_count_;


  // Masks that contain ones in the corresponding fields.
  uint32_t id_mask_;
  uint32_t content_mask_;
};

#endif // TESTBENCH_H
