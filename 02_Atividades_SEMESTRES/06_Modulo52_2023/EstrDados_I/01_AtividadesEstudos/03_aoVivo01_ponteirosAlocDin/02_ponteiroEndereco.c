#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char *p;
  char letra;
  
  letra = 'e';
  //p = 'e';
  p = &letra;
  printf("Valor apontado por p: \n\n%p \n%p \n%c \n%p", p, &p, *p, &letra);
  free(p);
}


