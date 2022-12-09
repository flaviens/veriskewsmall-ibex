# Rare clock skew in Verilator

## How to reproduce

Requirements: Verilator `Verilator 5.003 devel rev v4.228-192-g79682e607`.
Tried on Ubuntu 22.04.

```
bash build_test.sh # Verilate
bash make_test.sh  # Make
bash run_test.sh   # Run the simulation
bash wave.sh       # Display the relevant waves
```

## Expected and actual results

As described by the SystemVerilog source, the signal `instr_rdata_c_id_o_t0` should follow `signal124` with 1 cycle latency. However, it does not.

```
  always_ff @(posedge clk_i)
    instr_rdata_c_id_o_t0 <= signal124;
```
