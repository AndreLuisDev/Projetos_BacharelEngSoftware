/* Desenvolva um algoritmo que some todos os números inteiros
comprendidos entre 1 e 10 (inclusive)

Utilizando
1) WHILE
2) FOR
3) 10 nºs int informados pelo usuário
4) inteiros de 1 a 10 armazenados em vetor
5) 10 nºs int informado pelo usuário e armazenados em um vetor */

#include <stdio.h>

int main(){
	
	int i = 0;
	int soma = 0;
	int dado;
	
	while(i<10){
		printf("Insira um elemento:\n");
		scanf("%d", &dado);
		soma += dado;
		i++;
	}
	printf("Soma: %d\n", soma);	
}
