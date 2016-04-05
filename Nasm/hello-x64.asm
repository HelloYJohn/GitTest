[section .text]
    global _start
_start:
    mov rax, 1
    mov rdi, 1
    mov rsi, Msg
    mov rdx, 12
    syscall

    mov rax, 0x3c
    mov rdi, 0
    syscall

Msg:
    DB "Hello world!"