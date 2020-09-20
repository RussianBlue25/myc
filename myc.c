#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv) {
  printf("    .intel_syntax noprefix\n");
  printf("    .text\n");
  printf("    .globl  main\n");
  printf("    .type main, @function\n");

  printf("main:\n");
  printf("    mov   rax, 5\n");
  printf("    add   rax, 20\n");
  printf("    sub   rax, 10\n");
  printf("    ret\n");
  printf("    .size  main, .-main\n");
  
  return 0;
}
