    .intel_syntax noprefix
    .text
    .globl  main
    .type main, @function
main:
    mov   rax, 5
    add   rax, 20
    sub   rax, 4
    ret
    .size  main, .-main
