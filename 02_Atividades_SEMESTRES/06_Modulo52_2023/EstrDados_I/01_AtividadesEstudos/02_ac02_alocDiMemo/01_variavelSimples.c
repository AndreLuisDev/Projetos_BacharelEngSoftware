#include <stdio.h>
#include <stdlib.h>
 int main(){
	int *p; // declara��o de ponteiro de inteiros
	p = (int *) malloc(4); //ponteiro recebe um cast do tipo inteiro do retorno da fun��o malloc, passando 4 bytes para se alocado em uma regi�o de mem�ria de forma din�mica
		if (p == NULL){   //se o retorno da fun��o malloc() n�o conseguir alocar um bloco de bytes em mem�ria para o ponteiro, vai atribuir ao ponteiro p o valor igual a NULL.
				printf("Erro!\n");
		}
		else{
			*p = 10; //p -> chamada de vari�vel din�mica
			printf("p: %d\n", *p); //imprimir o conte�do da vari�vel para qual o p aponta.
			free(p); //desalocar sempre o espa�o em mem�ria com essa fun��o, ap�s ter sido atribuido um conte�do dinamicamente.
		}
}
		
		/* tamanho dos tipos primitivos
		int: 4 bytes ou 2 bytes
		char: 1 byte
		float: 4 bytes
		double: 8 bytes
		bool: 1 byte 	stdbool.h	
		
		FUN��O SIZEOF() -> calcula automaticamente o tamanho do bloco de bytes que se 
							deve alocar a depender do tipo de dado que ser� manipulado e 
						 	do hardware que est� sendo usado (compilador).
						 	
		sizeof(int); - vai retornar 4 bytes alocados em mem�ria dinamicamente para o ponteiro.
		*/
		
