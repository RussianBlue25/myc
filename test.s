    .intel_syntax noprefix
    .text
    .globl  main
    .type main, @function
main:
    push  rbp
    mov   rbp, rsp
    mov   eax, 1
    pop   rbp
    ret
    .size  main, .-main
