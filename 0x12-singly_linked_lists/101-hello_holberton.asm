global _start

section .text
_start:
    mov rax, 1 ; syscall number for write
    mov rdi, 1 ; file descriptor for stdout
    mov rsi, message ; address of the message
    mov rdx, 14 ; length of the message (including newline)
    syscall ; invoke the write system call

    mov rax, 60 ; syscall number for exit
    xor rdi, rdi ; exit status 0
    syscall ; invoke the exit system call

section .data
message: db "Hello, Holberton\n" ; The message to print
