/* Desenvolva um algoritmo que some todos os n�meros inteiros
comprendidos entre 1 e 10 (inclusive)

Utilizando
1) WHILE
2) FOR
3) 10 n�s int informados pelo usu�rio
4) inteiros de 1 a 10 armazenados em vetor
5) 10 n�s int informado pelo usu�rio e armazenados em um vetor */

#include <stdio.h>

int main(){
	
	int i;
	int soma = 0;
	
	for(i=1; i<=10; i++){
		soma += i;	
	}

	printf("Soma: %d\n", soma);
	
	
}

