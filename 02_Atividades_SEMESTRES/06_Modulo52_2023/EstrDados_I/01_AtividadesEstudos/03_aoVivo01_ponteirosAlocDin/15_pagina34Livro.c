#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//criando vetores din�micos

int main(){
	int tam; //ler o tamanho do vetor
	int *vetor; // vari�vel criada de forma din�mica de acordo com o valor lido na vari�vel tam
	
	printf("Escolha o tamanho do vetor: ");
	scanf("%d", &tam);
	
	vetor = (int *) malloc(sizeof(int)*tam);

	int i;
	for(i = 0;i<tam;i++){
		vetor[i] = pow(2,i);
		printf("Posi��o %d: %d\n", i, vetor[i]);
	}
	
	free(vetor);
	return(0);

}
