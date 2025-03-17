#include <stdio.h>
#include <stdlib.h>

int main(void) {
  //int *p, num = 10;
  //p = 10;
  //p = &num;
  int num = 10;
  int *p = &num;  

  printf("Valor apontado por p: %d %d\n", *p, num);
  printf("Valor apontado por p:\n \n%p \n%p \n%d\n", p, &p, *p);
  printf("O endereço de num: %p \n", &num);
  
  free(p);
}


