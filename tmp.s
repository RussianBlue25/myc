    .intel_syntax noprefix
    .text
    .globl  main
    .type main, @function
main:
    mov   rax, 5
    add   rax, 20
    sub   rax, 10
    ret
    .size  main, .-main
