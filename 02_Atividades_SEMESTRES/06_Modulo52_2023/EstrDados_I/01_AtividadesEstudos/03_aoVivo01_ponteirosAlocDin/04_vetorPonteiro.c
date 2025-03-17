#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
#include <string.h>

//a função scanf() recebe o endereço de memória, e lá, salva o que foi lido [entrada do teclado]
//o vetor por natureza já é um ponteiro
//um vetor fica organizado na memória de forma sequencial (uma posição após a outra)
//o <nome_vetor> já é um ponteiro para o início do vetor [não precisa usar &]


int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	char texto[100]; // texto é um ponteiro, pois refere-se a um vetor
	
	scanf("%100[^\n]", texto); //até 100 caracteres ou encontrar o \n (última posição) - o vetor vai sendo armazenado de conteúdo
	                           //se passar de 100 ou precionar o \n - encerra o armazenamento de texto
							   //caso ultrapasse o tamanho do vetor, pode ser armazenado, não vai ser guardado
	printf("%s\n", texto);
	
	printf("%p\n", texto);
	printf("%p\n", &texto);
	printf("%p\n", &texto[0]);
}
