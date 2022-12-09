# Rare clock skew in Verilator

## How to reproduce

Requirements: Verilator `Verilator 5.003 devel rev v4.228-192-g79682e607` and fusesoc.
Tried on Ubuntu 22.04.

```
bash run_test_notrace.sh
# or bash run_test_trace.sh, slower to compile but that will provide access to waveforms.
```

## Expected and actual results

As described by the SystemVerilog source, the signal `signal_1154` should follow `signal_0672` with 1 cycle latency, if no negative reset is applied.

```
  always_ff @(posedge clk_i, negedge rst_ni)
    if (!rst_ni) signal_1154 <= 64'h0000000000000000;
    else signal_1154 <= signal_0672;
  assign icache_rtrn_o_t0[268:205] = signal_1154;
```

However, in some occurrence, both signal go from zero to `0xfffff000` at the exact same time, instead of `signal_1154` having 1 cycle delay.

```
Before tick 44: signal_0672:0, signal_1154:0.              
Before tick 45: signal_0672:fffff000, signal_1154:fffff000.
Before tick 46: signal_0672:fffff000, signal_1154:fffff000.
```

## Convenience scrips

By running `bash recompile_notrace.sh` or `bash recompile_trace.sh`, you can recompile the software only, without recompiling the Verilator model (maybe there is a cleaner way, though).

By running `bash rerun_notrace.sh` or `bash rerun_trace.sh`, you can rerun the simulation only, without recompiling the Verilator model (maybe there is a cleaner way, though).

By running `bash wave.sh`, you can display the waveforms after the experiment.
