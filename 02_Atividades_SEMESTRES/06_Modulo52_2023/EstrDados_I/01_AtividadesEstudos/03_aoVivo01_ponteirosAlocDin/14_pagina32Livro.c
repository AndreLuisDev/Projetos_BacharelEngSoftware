#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int *ponteiro;
	printf("Endereco_erro do ponteiro: %p\n\n", ponteiro);
	ponteiro = (int *) malloc(sizeof(int)); //fun��o malloc reserva um espa�o em mem�ria do tamanho de um inteiro [4 bytes]
	// (int *) garantir que o retorno de malloc seja um valor compat�vel com o tipo da dado inteiro
	printf("Endereco do Ponteiro Alocado 1 - M�m�ria V�lida: %p\nConte�do do Ponteiro - Lixo Mem�ria: %d\n\n", ponteiro, *ponteiro);
	
	//Ap�s o malloc, o compilador reserva um endere�o v�lido na mem�ria
	// De onde surgiu o valor do ponteiro? Quando o malloc reservou os 32 bits, eles j� possuiam algum valor
	//Alocar dinamicamente a mem�ria, � diferente da de forma est�tica, em que se inicializa primeiro a vari�vel em zero
	// e depois executa. Dinamicamente, o malloc pegar� bits com valores, mas pelo menos os RESERVOU. A mem�ria dinamica
	// estar� zerada s� ap�s a interrup��o de energia.
	
	// DESSA FORMA, � SEMPRE BOM INICIALIZAR A VARIAVEL CRIADA DINAMICAMENTE, A SEGUIR:
	
	*ponteiro = 10; // inicializa��o da vari�vel din�mica
	printf("Endereco do Ponteiro Alocado 1 - M�m�ria V�lida: %p\nConte�do do Ponteiro: %d\n\n", ponteiro, *ponteiro);
	
	// printf("O MATEUS ESTA APRENDENDO A FAZER COMPUTA��O");	
	/*char bola[] = "Basketball";
	printf("A BOLA QUE O MATEUS GOSTA � DE: %s", bola);*/
	
	int x = 20;
	printf("Ender�o da vari�vel X: %p\n\n", &x);
	ponteiro = &x;
	printf("Endere�o do Ponteiro Alocado de X: %p\nConte�do do Ponteiro: %d\n\n", ponteiro, *ponteiro);
	
	free(ponteiro);
	
	return(0);
}
