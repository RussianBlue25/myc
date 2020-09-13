#include<stdio.h>

int main(void) {
  int i = 1;

  printf("    .text\n");
  printf("    .globl  main\n");
  printf("    .type main, @function\n");

  printf("main:\n");
  printf(".LFB0:\n");
  printf("    .cfi_startproc\n");
  printf("    pushq  %%rbp\n");
  printf("    .cfi_def_cfa_offset 16\n");
  printf("    .cfi_offset 6, -16\n");
  printf("    movq  %%rsp, %%rbp\n");
  printf("    .cfi_def_cfa_register 6\n");
  printf("    movl  $%d, %%eax\n", i);
  printf("    popq  %%rbp\n");
  printf("    .cfi_def_cfa 7, 8\n");
  printf("    ret\n");
  printf("    .cfi_endproc\n");

  printf("LFE0:\n");
  printf("    .size  main, .-main\n");
  //printf("");
  //printf("");
  //printf("");
  //printf("");
  
  return 0;
}
