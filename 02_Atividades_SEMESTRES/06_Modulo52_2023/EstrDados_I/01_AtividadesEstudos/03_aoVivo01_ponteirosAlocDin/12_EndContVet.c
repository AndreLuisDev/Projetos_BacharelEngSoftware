#include <stdio.h>

int main(void){
	int i, vet[10] = {12, 13, 14, 15, 16, 22, 27, 30, 77, 80};
	
	// quero imprimir o endere�o de mem�rio de cada vetor e seu respectivo conte�do
	
	for(i = 0; i < 10; i++)
	printf("Endereco: %p\t Conteudo: %d\n", vet+i, *(vet+i));
}
