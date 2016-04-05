[section .text]
        global _start

_start:
        jmp END
BEGIN:
        mov rax, 1
        mov rdi, 1
        pop rsi
        mov rdx, 5
        syscall

        mov rax, 0x3c
        mov rdi, 0
        syscall
END:
        call BEGIN
        DB "Hack!"