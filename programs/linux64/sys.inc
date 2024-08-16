SYS_write equ 1
SYS_exit equ 60

STDOUT equ 0

macro syscall1 code, arg1 {
    mov rdi, arg1
    mov rax, code
    syscall
}

macro syscall3 code, arg1, arg2, arg3 {
    mov rdi, arg1
    mov rsi, arg2
    mov rdx, arg3
    mov rax, code
    syscall
}

