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
	int dados[10]; // 4 bytes * 10 = 40 bytes -> sizeof(dados)
	
	i = 0;
	while(i<sizeof(dados)/sizeof(dados[0]/*4 bytes; int ou float*/)){ // 10 posições
		printf("Insira um elemento:\n");
		scanf("%d", &dados[i]); //ler e salvar os dados
		soma += dados[i]; // soma = soma + dados[i]
		i++; // iterador i = i + 1
	}	

	printf("Soma: %d\n", soma);	
}
