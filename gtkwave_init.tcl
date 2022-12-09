set signals [list \
    "top.clk_i" \
    "top.auxy_ibex_top.u_ibex_core.if_stage_i.signal124" \
    "top.auxy_ibex_top.u_ibex_core.if_stage_i.instr_rdata_c_id_o_t0" \
]

gtkwave::addSignalsFromList $signals
