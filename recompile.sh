rm -f build/run_0.1/default-verilator/toplevel.o
rm -f build/run_0.1/default-verilator/Vauxy_noerr_rv_core_ibex
rm -rf build/run_0.1/src/run_$*_0.1/dv
rm -rf ./build/run_0.1/dv
cp -r dv build/run_0.1/src/run_$*_0.1
make -C build/run_0.1/default-verilator -j 250
