/*
1 - Fa�a um programa que leia um vetor de 8 posi��es e, em seguida, leia tamb�m dois valores X e Y quaisquer
 correspondentes a duas posi��es no vetor. Ao final seu programa devera escrever a soma dos valores encontrados 
 nas respectivas posi��es X e Y.
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

	printf("\nValor encontrado na posi��o %d � %d", posicao1, vet[posicao1]);
	printf("\nValor encontrado na posi��o %d � %d", posicao2, vet[posicao2]);
	printf("\nSomando as duas posi��o temos %d", soma);

	return 0;
}
