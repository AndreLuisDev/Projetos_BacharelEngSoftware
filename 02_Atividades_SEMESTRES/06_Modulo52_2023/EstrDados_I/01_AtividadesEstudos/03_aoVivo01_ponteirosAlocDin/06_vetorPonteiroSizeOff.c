#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
#include <string.h>

void imprimir(int *num){
	printf("%d\n", *num);
}


int main(void){
	int vet[10] = {12,15,14,45,13,11,22,18,30,27};
	int tam = sizeof(vet)/sizeof(int); // tamanho em bytes vetor / tamanho bytes da posição
	 // tam informa o número de posições do vetor
	 
	imprimir(&tam);
}
