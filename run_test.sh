export SIMSRAMELF=$PWD/misc/app.elf
export SIMSRAMAUX=$PWD/misc/metadata
export TRACEFILE=$PWD/sim.fst
export RECORDINGFILE=$PWD/recording.txt

obj_dir/Vauxy_noerr_rv_core_ibex --trace
