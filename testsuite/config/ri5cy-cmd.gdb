set height 0
target remote | riscv64-gdbserver --stdin
load
cont
quit
