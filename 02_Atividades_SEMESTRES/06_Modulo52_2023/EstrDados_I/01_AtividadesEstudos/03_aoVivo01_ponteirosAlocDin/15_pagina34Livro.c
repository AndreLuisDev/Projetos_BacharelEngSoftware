#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//criando vetores dinâmicos

int main(){
	int tam; //ler o tamanho do vetor
	int *vetor; // variável criada de forma dinâmica de acordo com o valor lido na variável tam
	
	printf("Escolha o tamanho do vetor: ");
	scanf("%d", &tam);
	
	vetor = (int *) malloc(sizeof(int)*tam);

	int i;
	for(i = 0;i<tam;i++){
		vetor[i] = pow(2,i);
		printf("Posição %d: %d\n", i, vetor[i]);
	}
	
	free(vetor);
	return(0);

}
