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
	int dados[10] = {1,2,3,4,5,6,7,8,9,10};
	
	i = 0;	
	while(i<10){
		soma += dados[i];
		i++;
	}
	printf("Soma: %d\n", soma);	
}
