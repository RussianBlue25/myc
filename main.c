#include<stdio.h>

int main(void) {
  int i = 1;

  printf("    .intel_syntax noprefix\n");
  printf("    .text\n");
  printf("    .globl  main\n");
  printf("    .type main, @function\n");

  printf("main:\n");
  printf("    push  rbp\n");
  printf("    mov   rbp, rsp\n");
  printf("    mov   eax, %d\n", i);
  printf("    pop   rbp\n");
  printf("    ret\n");
  printf("    .size  main, .-main\n");
  
  return 0;
}
