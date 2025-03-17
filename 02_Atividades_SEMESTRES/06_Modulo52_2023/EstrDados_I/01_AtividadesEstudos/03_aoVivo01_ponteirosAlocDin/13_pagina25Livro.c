#include <stdio.h>
#include <stdlib.h>


int minhaVariavel; // endereco 0000000000407A28
int *ptr_minhaVariavel; // endereço  0000000000407A20

void imprimir(){
	printf("Valor do conteudo da Minha Variavel = %d\n", minhaVariavel);
	printf("Valor do endereco de memoria da Minha Variavel = %p\n", &minhaVariavel);
	printf("Valor do endereco do Ponteiro que aponta para Minha Variavel = %p\n", &ptr_minhaVariavel);
	printf("Valor do endereco para o qual o Ponteiro aponta = %p\n", ptr_minhaVariavel);
	printf("Conteudo apontado pelo Ponteiro que aponta para Minha Variavel = %d\n\n\n", *ptr_minhaVariavel);
}

int main(){
	minhaVariavel = 10;
	ptr_minhaVariavel = &minhaVariavel;
	imprimir();
	
	system("Pause");
	
	minhaVariavel = 20;
	imprimir();
	
	system("Pause");
	
	*ptr_minhaVariavel = 30;
	imprimir();
	
	system("Pause");
	return(0);
}
