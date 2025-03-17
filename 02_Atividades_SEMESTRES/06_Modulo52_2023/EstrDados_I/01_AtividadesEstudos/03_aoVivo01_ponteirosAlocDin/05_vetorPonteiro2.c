#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
#include <string.h>

void imprimir (int *num){ // 3 a função recebe "A1" [local de memória da variável idade]
                          // 4 que fica apontada pelo ponteiro <*num> criado
                          // 5 portanto, o ponteiro aponta para o endereço de memória da variável idade
	printf("%d\n", *num); // 6 printa na tela o conteúdo do ponteiro para qual p aponta que é primeiramente 35
	
	*num = 80;	 // 7 o conteúdo de num, que é um ponteiro (variavel dinâmica) recebe 80.
}

int main (void){
	int idade = 35; // 1 memória vazia - recebe o valor 35 na posição "A1"
	imprimir(&idade); // 2 a função imprimir recebe o endereço de idade "A1"
	printf("Nova idade: %d\n", idade);
	
	// 8 ao final do programa, printa o valor da idade, que foi modificado pelo ponteiro num, quando seu conteúdo foi trocado para 80.
}
