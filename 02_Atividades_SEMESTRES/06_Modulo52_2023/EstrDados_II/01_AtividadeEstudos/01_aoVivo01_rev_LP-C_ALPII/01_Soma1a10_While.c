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
	
	int i = 1;
	int soma = 0;

	while (i<=10){
		//soma = soma + i; // soma = 0 + 1, soma = 1+2/2+3/3+4/4+5/5+6/6+7/7+8/8+9		
		soma += i;
		i++; // i = i + 1;
		
	}
	printf("A soma é: %d\n", soma);
	
	
}

