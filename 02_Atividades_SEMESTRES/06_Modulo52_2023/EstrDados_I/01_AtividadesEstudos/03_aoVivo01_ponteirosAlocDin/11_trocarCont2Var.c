#include <stdio.h>
#include <stdlib.h>

void troca(float *a, float *b){
	float aux;
	aux = *a; // aux = 50
	*a = *b; // a* = 100
	*b = aux; // b* = 50
}

int main(void){
	float num1 = 50, num2 = 100;
	
	printf("Num1: %.2f\t\tNum1: %.2f\n", num1, num2);
	troca(&num1, &num2);
	printf("Num1: %.2f\t\tNum2: %.2f\n",num1, num2);
}
