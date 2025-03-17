#include <stdio.h>
#include <stdlib.h>
 int main(){
	int *p; // declaração de ponteiro de inteiros
	p = (int *) malloc(4); //ponteiro recebe um cast do tipo inteiro do retorno da função malloc, passando 4 bytes para se alocado em uma região de memória de forma dinâmica
		if (p == NULL){   //se o retorno da função malloc() não conseguir alocar um bloco de bytes em memória para o ponteiro, vai atribuir ao ponteiro p o valor igual a NULL.
				printf("Erro!\n");
		}
		else{
			*p = 10; //p -> chamada de variável dinâmica
			printf("p: %d\n", *p); //imprimir o conteúdo da variável para qual o p aponta.
			free(p); //desalocar sempre o espaço em memória com essa função, após ter sido atribuido um conteúdo dinamicamente.
		}
}
		
		/* tamanho dos tipos primitivos
		int: 4 bytes ou 2 bytes
		char: 1 byte
		float: 4 bytes
		double: 8 bytes
		bool: 1 byte 	stdbool.h	
		
		FUNÇÃO SIZEOF() -> calcula automaticamente o tamanho do bloco de bytes que se 
							deve alocar a depender do tipo de dado que será manipulado e 
						 	do hardware que está sendo usado (compilador).
						 	
		sizeof(int); - vai retornar 4 bytes alocados em memória dinamicamente para o ponteiro.
		*/
		
