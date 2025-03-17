/*
1 - Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois valores X e Y quaisquer
 correspondentes a duas posições no vetor. Ao final seu programa devera escrever a soma dos valores encontrados 
 nas respectivas posições X e Y.
*/
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int vet[8]= {1,2,3,4,5,6,7,8};
	int i, posicao1, posicao2;
	int soma;

	posicao1 = 3;
	posicao2 = 7;

	soma = vet[posicao1] + vet[posicao2];

	printf("\nValor encontrado na posição %d é %d", posicao1, vet[posicao1]);
	printf("\nValor encontrado na posição %d é %d", posicao2, vet[posicao2]);
	printf("\nSomando as duas posição temos %d", soma);

	return 0;
}
