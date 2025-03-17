#include <stdio.h>

void teste (int vet[], int tam){
	int i;
	for(i = 0; i < tam; i++);
		vet[i] = vet[i] * 2;
	printf("\n");
}

void imprimir(int vet[], int tam){
	int i;
	for(i = 0; i < tam; i++);
		printf("%d", vet[i]);
	printf("\n");
}
