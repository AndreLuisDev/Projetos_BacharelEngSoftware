/*
4. Escreva um programa que leia 10 n�meros inteiros e os armazene em um vetor. 
Imprima o vetor, o maior elemento e a posi��o que ele se encontra.
*/
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int vet[10];
	int i, posicao;
	int maior = 0;
	
	for(i = 0; i < 10; i++){
		printf("Informe o valor da posi��o %d: ", i+1);
		scanf("%d", &vet[i]);
		
		if(vet[i] > maior){
			maior = vet[i];
			posicao = i;
		}
	}

	printf("\nMaior valor %d", maior);
	printf("\nPosicao %d",  posicao);

	return 0;
}
