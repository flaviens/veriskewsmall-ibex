set signals [list \
    "top.clk_i" \
    "top.auxy_rv_core_ibex_mem_top.i_rv_core_ibex.u_core.u_ibex_core.if_stage_i.signal124" \
    "top.auxy_rv_core_ibex_mem_top.i_rv_core_ibex.u_core.u_ibex_core.if_stage_i.instr_rdata_c_id_o_t0" \
]

gtkwave::addSignalsFromList $signals
