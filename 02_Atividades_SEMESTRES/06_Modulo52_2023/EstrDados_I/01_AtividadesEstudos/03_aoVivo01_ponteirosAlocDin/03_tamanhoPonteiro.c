#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
#include <string.h>

//o ponteiro refere-se � quantidade e ao tipo de dado que est� sendo manipulado
// int 4 bytes , char, float, bool
// O operador sizeof() descobre o tamanho de um ponteiro

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int *p1;
	char *p2;
	float *p3;
	double *p4;
	bool *p5;
	
	// 
	printf("Tamanho do bloco de bytes alocado de forma din�mica para o ponteiro p1: %d\n", sizeof(p1));
	printf("Tamanho do bloco de bytes alocado de forma din�mica para o ponteiro p2: %d\n", sizeof(p2));
	printf("Tamanho do bloco de bytes alocado de forma din�mica para o ponteiro p3: %d\n", sizeof(p3));
	printf("Tamanho do bloco de bytes alocado de forma din�mica para o ponteiro p4: %d\n", sizeof(p4));
	printf("Tamanho do bloco de bytes alocado de forma din�mica para o ponteiro p5: %d\n", sizeof(p5));
	
	free(p1);
	free(p2);
	free(p3);
	free(p4);
	free(p5);
}
