#include <stdio.h>

int main(void){
	int i, vet[10] = {12, 13, 14, 15, 16, 22, 27, 30, 77, 80};
	
	// quero imprimir o endereço de memório de cada vetor e seu respectivo conteúdo
	
	for(i = 0; i < 10; i++)
	printf("Endereco: %p\t Conteudo: %d\n", vet+i, *(vet+i));
}
