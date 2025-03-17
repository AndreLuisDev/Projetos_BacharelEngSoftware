#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
#include <string.h>

void imprimir (int *num){ // 3 a fun��o recebe "A1" [local de mem�ria da vari�vel idade]
                          // 4 que fica apontada pelo ponteiro <*num> criado
                          // 5 portanto, o ponteiro aponta para o endere�o de mem�ria da vari�vel idade
	printf("%d\n", *num); // 6 printa na tela o conte�do do ponteiro para qual p aponta que � primeiramente 35
	
	*num = 80;	 // 7 o conte�do de num, que � um ponteiro (variavel din�mica) recebe 80.
}

int main (void){
	int idade = 35; // 1 mem�ria vazia - recebe o valor 35 na posi��o "A1"
	imprimir(&idade); // 2 a fun��o imprimir recebe o endere�o de idade "A1"
	printf("Nova idade: %d\n", idade);
	
	// 8 ao final do programa, printa o valor da idade, que foi modificado pelo ponteiro num, quando seu conte�do foi trocado para 80.
}
