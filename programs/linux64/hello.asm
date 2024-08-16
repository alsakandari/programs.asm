format ELF64 executable

include "sys.inc"

segment executable readable
entry $
    syscall3 SYS_write, STDOUT, hello, hello.len
    syscall1 SYS_exit, 0

segment  writeable readable
message:
    hello db "Hello, World!", 10
    hello.len dq $-message
