// Copyright Flavien Solt, ETH Zurich.
// Licensed under the General Public License, Version 3.0, see LICENSE for details.
// SPDX-License-Identifier: GPL-3.0-only

#include "Vauxy_ibex_top__Syms.h"
#include "Vauxy_ibex_top___024root.h"

#include "testbench.h"
#include "ticks.h"

// Read the recorded trace
std::vector<single_input_recording_t> read_recorded_trace(std::string path_to_recording) {
  std::vector<single_input_recording_t> recorded_trace;
  size_t num_steps = -1;

  std::ifstream dumpfile;
  dumpfile.open(path_to_recording.c_str());
  dumpfile >> num_steps;
  for (size_t step_id = 0; step_id < num_steps; step_id++) {
    single_input_recording_t acquired;
    // Mem top
    // dumpfile >> acquired.boot_addr_i;
    // dumpfile >> acquired.boot_addr_i_t0;
    // dumpfile >> acquired.clk_esc_i;
    // dumpfile >> acquired.clk_esc_i_t0;
    // dumpfile >> acquired.clk_i;
    // dumpfile >> acquired.data_mem_gnt_i;
    // dumpfile >> acquired.data_mem_gnt_i_t0;
    // dumpfile >> acquired.data_mem_rdata_i;
    // dumpfile >> acquired.data_mem_rdata_i_t0;
    // dumpfile >> acquired.debug_req_i;
    // dumpfile >> acquired.debug_req_i_t0;
    // dumpfile >> acquired.esc_tx_i;
    // dumpfile >> acquired.esc_tx_i_t0;
    // dumpfile >> acquired.hart_id_i;
    // dumpfile >> acquired.hart_id_i_t0;
    // dumpfile >> acquired.instr_mem_gnt_i;
    // dumpfile >> acquired.instr_mem_gnt_i_t0;
    // dumpfile >> acquired.instr_mem_rdata_i;
    // dumpfile >> acquired.instr_mem_rdata_i_t0;
    // dumpfile >> acquired.irq_external_i;
    // dumpfile >> acquired.irq_external_i_t0;
    // dumpfile >> acquired.irq_software_i;
    // dumpfile >> acquired.irq_software_i_t0;
    // dumpfile >> acquired.irq_timer_i;
    // dumpfile >> acquired.irq_timer_i_t0;
    // dumpfile >> acquired.lc_cpu_en_i;
    // dumpfile >> acquired.lc_cpu_en_i_t0;
    // dumpfile >> acquired.ram_cfg_i;
    // dumpfile >> acquired.ram_cfg_i_t0;
    // dumpfile >> acquired.rst_esc_ni;
    // dumpfile >> acquired.rst_esc_ni_t0;
    // dumpfile >> acquired.rst_ni;
    // dumpfile >> acquired.test_en_i;
    // dumpfile >> acquired.test_en_i_t0;

    // Rv core
    // dumpfile >> acquired.boot_addr_i;
    // dumpfile >> acquired.boot_addr_i_t0;
    // dumpfile >> acquired.clk_esc_i;
    // dumpfile >> acquired.clk_esc_i_t0;
    // dumpfile >> acquired.clk_i;
    // dumpfile >> acquired.debug_req_i;
    // dumpfile >> acquired.debug_req_i_t0;
    // dumpfile >> acquired.esc_tx_i;
    // dumpfile >> acquired.esc_tx_i_t0;
    // dumpfile >> acquired.hart_id_i;
    // dumpfile >> acquired.hart_id_i_t0;
    // dumpfile >> acquired.irq_external_i;
    // dumpfile >> acquired.irq_external_i_t0;
    // dumpfile >> acquired.irq_software_i;
    // dumpfile >> acquired.irq_software_i_t0;
    // dumpfile >> acquired.irq_timer_i;
    // dumpfile >> acquired.irq_timer_i_t0;
    // dumpfile >> acquired.lc_cpu_en_i;
    // dumpfile >> acquired.lc_cpu_en_i_t0;
    // dumpfile >> acquired.ram_cfg_i;
    // dumpfile >> acquired.ram_cfg_i_t0;
    // dumpfile >> acquired.rst_esc_ni;
    // dumpfile >> acquired.rst_esc_ni_t0;
    // dumpfile >> acquired.rst_ni;
    // dumpfile >> acquired.test_en_i;
    // dumpfile >> acquired.test_en_i_t0;
    // dumpfile >> acquired.tl_d_i[0];
    // dumpfile >> acquired.tl_d_i[1];
    // dumpfile >> acquired.tl_d_i_t0[0];
    // dumpfile >> acquired.tl_d_i_t0[1];
    // dumpfile >> acquired.tl_i_i[0];
    // dumpfile >> acquired.tl_i_i[1];
    // dumpfile >> acquired.tl_i_i_t0[0];
    // dumpfile >> acquired.tl_i_i_t0[1];

    dumpfile >> acquired.boot_addr_i;
    dumpfile >> acquired.boot_addr_i_t0;
    dumpfile >> acquired.clk_i;
    dumpfile >> acquired.data_err_i;
    dumpfile >> acquired.data_err_i_t0;
    dumpfile >> acquired.data_gnt_i;
    dumpfile >> acquired.data_gnt_i_t0;
    dumpfile >> acquired.data_rdata_i;
    dumpfile >> acquired.data_rdata_i_t0;
    dumpfile >> acquired.data_rvalid_i;
    dumpfile >> acquired.data_rvalid_i_t0;
    dumpfile >> acquired.debug_req_i;
    dumpfile >> acquired.debug_req_i_t0;
    dumpfile >> acquired.fetch_enable_i;
    dumpfile >> acquired.fetch_enable_i_t0;
    dumpfile >> acquired.hart_id_i;
    dumpfile >> acquired.hart_id_i_t0;
    dumpfile >> acquired.instr_err_i;
    dumpfile >> acquired.instr_err_i_t0;
    dumpfile >> acquired.instr_gnt_i;
    dumpfile >> acquired.instr_gnt_i_t0;
    dumpfile >> acquired.instr_rdata_i;
    dumpfile >> acquired.instr_rdata_i_t0;
    dumpfile >> acquired.instr_rvalid_i;
    dumpfile >> acquired.instr_rvalid_i_t0;
    dumpfile >> acquired.irq_external_i;
    dumpfile >> acquired.irq_external_i_t0;
    dumpfile >> acquired.irq_fast_i;
    dumpfile >> acquired.irq_fast_i_t0;
    dumpfile >> acquired.irq_nm_i;
    dumpfile >> acquired.irq_nm_i_t0;
    dumpfile >> acquired.irq_software_i;
    dumpfile >> acquired.irq_software_i_t0;
    dumpfile >> acquired.irq_timer_i;
    dumpfile >> acquired.irq_timer_i_t0;
    dumpfile >> acquired.ram_cfg_i;
    dumpfile >> acquired.ram_cfg_i_t0;
    dumpfile >> acquired.rst_ni;
    dumpfile >> acquired.test_en_i;
    dumpfile >> acquired.test_en_i_t0;

    recorded_trace.push_back(acquired);
  }
  dumpfile.close();
  return recorded_trace;
}

static void feed_tb(Testbench *tb, single_input_recording_t acquired) {
  // Mem top
  // tb->module_->boot_addr_i          = acquired.boot_addr_i;
  // tb->module_->boot_addr_i_t0       = acquired.boot_addr_i_t0;
  // tb->module_->clk_esc_i            = acquired.clk_esc_i;
  // tb->module_->clk_esc_i_t0         = acquired.clk_esc_i_t0;
  // // tb->module_->clk_i                = acquired.clk_i;
  // tb->module_->data_mem_gnt_i       = acquired.data_mem_gnt_i;
  // tb->module_->data_mem_gnt_i_t0    = acquired.data_mem_gnt_i_t0;
  // tb->module_->data_mem_rdata_i     = acquired.data_mem_rdata_i;
  // tb->module_->data_mem_rdata_i_t0  = acquired.data_mem_rdata_i_t0;
  // tb->module_->debug_req_i          = acquired.debug_req_i;
  // tb->module_->debug_req_i_t0       = acquired.debug_req_i_t0;
  // tb->module_->esc_tx_i             = acquired.esc_tx_i;
  // tb->module_->esc_tx_i_t0          = acquired.esc_tx_i_t0;
  // tb->module_->hart_id_i            = acquired.hart_id_i;
  // tb->module_->hart_id_i_t0         = acquired.hart_id_i_t0;
  // tb->module_->instr_mem_gnt_i      = acquired.instr_mem_gnt_i;
  // tb->module_->instr_mem_gnt_i_t0   = acquired.instr_mem_gnt_i_t0;
  // tb->module_->instr_mem_rdata_i    = acquired.instr_mem_rdata_i;
  // tb->module_->instr_mem_rdata_i_t0 = acquired.instr_mem_rdata_i_t0;
  // tb->module_->irq_external_i       = acquired.irq_external_i;
  // tb->module_->irq_external_i_t0    = acquired.irq_external_i_t0;
  // tb->module_->irq_software_i       = acquired.irq_software_i;
  // tb->module_->irq_software_i_t0    = acquired.irq_software_i_t0;
  // tb->module_->irq_timer_i          = acquired.irq_timer_i;
  // tb->module_->irq_timer_i_t0       = acquired.irq_timer_i_t0;
  // tb->module_->lc_cpu_en_i          = acquired.lc_cpu_en_i;
  // tb->module_->lc_cpu_en_i_t0       = acquired.lc_cpu_en_i_t0;
  // tb->module_->ram_cfg_i            = acquired.ram_cfg_i;
  // tb->module_->ram_cfg_i_t0         = acquired.ram_cfg_i_t0;
  // tb->module_->rst_esc_ni           = acquired.rst_esc_ni;
  // tb->module_->rst_esc_ni_t0        = acquired.rst_esc_ni_t0;
  // tb->module_->rst_ni               = acquired.rst_ni;
  // tb->module_->test_en_i            = acquired.test_en_i;
  // tb->module_->test_en_i_t0         = acquired.test_en_i_t0;

  // Rv core
  // tb->module_->boot_addr_i       = acquired.boot_addr_i;
  // tb->module_->boot_addr_i_t0    = acquired.boot_addr_i_t0;
  // tb->module_->clk_esc_i         = acquired.clk_esc_i;
  // tb->module_->clk_esc_i_t0      = acquired.clk_esc_i_t0;
  // // tb->module_->clk_i             = acquired.clk_i;
  // tb->module_->debug_req_i       = acquired.debug_req_i;
  // tb->module_->debug_req_i_t0    = acquired.debug_req_i_t0;
  // tb->module_->esc_tx_i          = acquired.esc_tx_i;
  // tb->module_->esc_tx_i_t0       = acquired.esc_tx_i_t0;
  // tb->module_->hart_id_i         = acquired.hart_id_i;
  // tb->module_->hart_id_i_t0      = acquired.hart_id_i_t0;
  // tb->module_->irq_external_i    = acquired.irq_external_i;
  // tb->module_->irq_external_i_t0 = acquired.irq_external_i_t0;
  // tb->module_->irq_software_i    = acquired.irq_software_i;
  // tb->module_->irq_software_i_t0 = acquired.irq_software_i_t0;
  // tb->module_->irq_timer_i       = acquired.irq_timer_i;
  // tb->module_->irq_timer_i_t0    = acquired.irq_timer_i_t0;
  // tb->module_->lc_cpu_en_i       = acquired.lc_cpu_en_i;
  // tb->module_->lc_cpu_en_i_t0    = acquired.lc_cpu_en_i_t0;
  // tb->module_->ram_cfg_i         = acquired.ram_cfg_i;
  // tb->module_->ram_cfg_i_t0      = acquired.ram_cfg_i_t0;
  // tb->module_->rst_esc_ni        = acquired.rst_esc_ni;
  // tb->module_->rst_esc_ni_t0     = acquired.rst_esc_ni_t0;
  // tb->module_->rst_ni            = acquired.rst_ni;
  // tb->module_->test_en_i         = acquired.test_en_i;
  // tb->module_->test_en_i_t0      = acquired.test_en_i_t0;
  // tb->module_->tl_d_i[0]         = acquired.tl_d_i[0];
  // tb->module_->tl_d_i[1]         = acquired.tl_d_i[1];
  // tb->module_->tl_d_i_t0[0]      = acquired.tl_d_i_t0[0];
  // tb->module_->tl_d_i_t0[1]      = acquired.tl_d_i_t0[1];
  // tb->module_->tl_i_i[0]         = acquired.tl_i_i[0];
  // tb->module_->tl_i_i[1]         = acquired.tl_i_i[1];
  // tb->module_->tl_i_i_t0[0]      = acquired.tl_i_i_t0[0];
  // tb->module_->tl_i_i_t0[1]      = acquired.tl_i_i_t0[1];

  // u_core
  tb->module_->boot_addr_i       = acquired.boot_addr_i;
  tb->module_->boot_addr_i_t0    = acquired.boot_addr_i_t0;
  // tb->module_->clk_i             = acquired.clk_i;
  tb->module_->data_err_i        = acquired.data_err_i;
  tb->module_->data_err_i_t0     = acquired.data_err_i_t0;
  tb->module_->data_gnt_i        = acquired.data_gnt_i;
  tb->module_->data_gnt_i_t0     = acquired.data_gnt_i_t0;
  tb->module_->data_rdata_i      = acquired.data_rdata_i;
  tb->module_->data_rdata_i_t0   = acquired.data_rdata_i_t0;
  tb->module_->data_rvalid_i     = acquired.data_rvalid_i;
  tb->module_->data_rvalid_i_t0  = acquired.data_rvalid_i_t0;
  tb->module_->debug_req_i       = acquired.debug_req_i;
  tb->module_->debug_req_i_t0    = acquired.debug_req_i_t0;
  tb->module_->fetch_enable_i    = acquired.fetch_enable_i;
  tb->module_->fetch_enable_i_t0 = acquired.fetch_enable_i_t0;
  tb->module_->hart_id_i         = acquired.hart_id_i;
  tb->module_->hart_id_i_t0      = acquired.hart_id_i_t0;
  tb->module_->instr_err_i       = acquired.instr_err_i;
  tb->module_->instr_err_i_t0    = acquired.instr_err_i_t0;
  tb->module_->instr_gnt_i       = acquired.instr_gnt_i;
  tb->module_->instr_gnt_i_t0    = acquired.instr_gnt_i_t0;
  tb->module_->instr_rdata_i     = acquired.instr_rdata_i;
  tb->module_->instr_rdata_i_t0  = acquired.instr_rdata_i_t0;
  tb->module_->instr_rvalid_i    = acquired.instr_rvalid_i;
  tb->module_->instr_rvalid_i_t0 = acquired.instr_rvalid_i_t0;
  tb->module_->irq_external_i    = acquired.irq_external_i;
  tb->module_->irq_external_i_t0 = acquired.irq_external_i_t0;
  tb->module_->irq_fast_i        = acquired.irq_fast_i;
  tb->module_->irq_fast_i_t0     = acquired.irq_fast_i_t0;
  tb->module_->irq_nm_i          = acquired.irq_nm_i;
  tb->module_->irq_nm_i_t0       = acquired.irq_nm_i_t0;
  tb->module_->irq_software_i    = acquired.irq_software_i;
  tb->module_->irq_software_i_t0 = acquired.irq_software_i_t0;
  tb->module_->irq_timer_i       = acquired.irq_timer_i;
  tb->module_->irq_timer_i_t0    = acquired.irq_timer_i_t0;
  tb->module_->ram_cfg_i         = acquired.ram_cfg_i;
  tb->module_->ram_cfg_i_t0      = acquired.ram_cfg_i_t0;
  tb->module_->rst_ni            = acquired.rst_ni;
  tb->module_->test_en_i         = acquired.test_en_i;
  tb->module_->test_en_i_t0      = acquired.test_en_i_t0;
}

/**
 * Runs the recorded trace.
 *
 * @param tb a pointer to a testbench instance
 * @param simlen the number of cycles to run
 */
static void run_test(Testbench *tb, std::string path_to_recording) {
  std::vector<single_input_recording_t> recorded_trace = read_recorded_trace(path_to_recording);
  uint32_t clk = 0;
  for (size_t step_id = 0; step_id < recorded_trace.size(); step_id++) {
    single_input_recording_t acquired;
    printf("Step %ld\n", step_id);
    acquired = recorded_trace[step_id];
    feed_tb(tb, acquired);
    tb->module_->clk_i = 0;
    tb->module_->eval();
#if VM_TRACE
    tb->trace_->dump(5*step_id+4);
#endif // VM_TRACE

    acquired = recorded_trace[step_id+1];
    // feed_tb(tb, acquired);
    tb->module_->clk_i = 1;
    tb->module_->eval();
#if VM_TRACE
    tb->trace_->dump(5*step_id+5);
#endif // VM_TRACE

    acquired = recorded_trace[step_id+2];
    // feed_tb(tb, acquired);
    tb->module_->clk_i = 0;
    tb->module_->eval();
#if VM_TRACE
    tb->trace_->dump(5*step_id+7);
    tb->trace_->flush();
#endif // VM_TRACE
  }
}

int main(int argc, char **argv, char **env) {

  Verilated::commandArgs(argc, argv);
  Verilated::traceEverOn(VM_TRACE);

  Testbench *tb = new Testbench(cl_get_tracefile());

  ////////
  // Run the recorded trace.
  ////////

  run_test(tb, cl_get_recordingfile());

  ////////
  // Display the results.
  ////////
  std::cout << "Testbench complete!" << std::endl;
  
  delete tb;
  exit(0);
}
