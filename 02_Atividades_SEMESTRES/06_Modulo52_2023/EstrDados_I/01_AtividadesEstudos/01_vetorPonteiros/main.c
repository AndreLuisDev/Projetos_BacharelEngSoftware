#include <stdio.h>
#include <stdlib.h>
int xi;
int *ptr_xi;
void imprimir() {
 printf("Valor de xi = %d \n", xi); 
 printf("Valor de &xi = %p \n", &xi); 
 printf("Valor de ptr_xi = %p \n", ptr_xi); 
 printf("Valor de *ptr_xi = %d \n\n", *ptr_xi); 
}
int main() {
 xi = 1000;
 ptr_xi = &xi;
 imprimir();
 
 xi = 2000;
 imprimir();
  
 *ptr_xi = 3000;
  imprimir();
  
 system("Pause"); 
 return(0);
}
