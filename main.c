#include<stdio.h>

int main(void) {
  int i = 1;

  printf("  .intel_systax noprefix\n");
  printf("  .globl  main\n");

  printf("main:\n");
  printf("  pushq  %%rbp\n");
  printf("  movq  %%rsp, %%rbp\n");
  printf("  movl  $%d, %%eax\n", i);
  printf("  popq  %%rbp\n");
  printf("  ret\n");
  //printf("");
  //printf("");
  //printf("");
  //printf("");
  //printf("");
  
  return 0;
}
