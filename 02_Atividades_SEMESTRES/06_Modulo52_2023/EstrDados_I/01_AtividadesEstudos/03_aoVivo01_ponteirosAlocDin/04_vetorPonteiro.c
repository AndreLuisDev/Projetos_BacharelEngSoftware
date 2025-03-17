#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
#include <string.h>

//a fun��o scanf() recebe o endere�o de mem�ria, e l�, salva o que foi lido [entrada do teclado]
//o vetor por natureza j� � um ponteiro
//um vetor fica organizado na mem�ria de forma sequencial (uma posi��o ap�s a outra)
//o <nome_vetor> j� � um ponteiro para o in�cio do vetor [n�o precisa usar &]


int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	char texto[100]; // texto � um ponteiro, pois refere-se a um vetor
	
	scanf("%100[^\n]", texto); //at� 100 caracteres ou encontrar o \n (�ltima posi��o) - o vetor vai sendo armazenado de conte�do
	                           //se passar de 100 ou precionar o \n - encerra o armazenamento de texto
							   //caso ultrapasse o tamanho do vetor, pode ser armazenado, n�o vai ser guardado
	printf("%s\n", texto);
	
	printf("%p\n", texto);
	printf("%p\n", &texto);
	printf("%p\n", &texto[0]);
}
