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
	
	int i;
	int soma = 0;
	int dados[10];
	
	i = 0;
	while(i<10){ // de 0 a 9
		printf("Insira um elemento:\n");
		scanf("%d", &dados[i]);
		i++;
	}	
	
	i = 0; //necessário zerar o contador novamente	
	while(i<10){
		soma += dados[i];
		i++;
	}
	printf("Soma: %d\n", soma);	
}
