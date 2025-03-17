#include <stdio.h>

void imprimir(int vet[], int tam){
	int i;
	for(i = 0; i < tam; i++){
		printf("%d", *(vet + i));
		printf("\n");
	}
}

int main(void){
	int vet[10] = {12, 15, 14, 45, 13, 10, 22, 18, 30, 27};
	int tam = sizeof(vet)/sizeof(int); // sizeof(vet)[80] / sizeof(int)[8]
	
	imprimir(vet, tam);
}
