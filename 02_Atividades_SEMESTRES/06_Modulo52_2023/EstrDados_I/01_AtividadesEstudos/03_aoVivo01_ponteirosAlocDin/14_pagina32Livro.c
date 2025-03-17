#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int *ponteiro;
	printf("Endereco_erro do ponteiro: %p\n\n", ponteiro);
	ponteiro = (int *) malloc(sizeof(int)); //função malloc reserva um espaço em memória do tamanho de um inteiro [4 bytes]
	// (int *) garantir que o retorno de malloc seja um valor compatível com o tipo da dado inteiro
	printf("Endereco do Ponteiro Alocado 1 - Mémória Válida: %p\nConteúdo do Ponteiro - Lixo Memória: %d\n\n", ponteiro, *ponteiro);
	
	//Após o malloc, o compilador reserva um endereço válido na memória
	// De onde surgiu o valor do ponteiro? Quando o malloc reservou os 32 bits, eles já possuiam algum valor
	//Alocar dinamicamente a memória, é diferente da de forma estática, em que se inicializa primeiro a variável em zero
	// e depois executa. Dinamicamente, o malloc pegará bits com valores, mas pelo menos os RESERVOU. A memória dinamica
	// estará zerada só após a interrupção de energia.
	
	// DESSA FORMA, é SEMPRE BOM INICIALIZAR A VARIAVEL CRIADA DINAMICAMENTE, A SEGUIR:
	
	*ponteiro = 10; // inicialização da variável dinâmica
	printf("Endereco do Ponteiro Alocado 1 - Mémória Válida: %p\nConteúdo do Ponteiro: %d\n\n", ponteiro, *ponteiro);
	
	// printf("O MATEUS ESTA APRENDENDO A FAZER COMPUTAÇÃO");	
	/*char bola[] = "Basketball";
	printf("A BOLA QUE O MATEUS GOSTA É DE: %s", bola);*/
	
	int x = 20;
	printf("Enderço da variável X: %p\n\n", &x);
	ponteiro = &x;
	printf("Endereço do Ponteiro Alocado de X: %p\nConteúdo do Ponteiro: %d\n\n", ponteiro, *ponteiro);
	
	free(ponteiro);
	
	return(0);
}
