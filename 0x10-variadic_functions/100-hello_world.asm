section .data
message db "Hello, World",10

section .text
global main

main:
mov rdi, 1
mov rsi, msg
mov rax, 1
mov rdx, 13
syscall
