/*
5 - Fa�a um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule e imprima a m�dia geral.
*/
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float notas[15];
	int i;
	float somaNota = 0.0;
	float media;
	
	for(i = 0; i < 15; i++){
		printf("Informe o valor da posi��o %d: ", i+1);
		scanf("%f", &notas[i]);
		somaNota += notas[i];
	}
	media = somaNota / 15;
	printf("\nM�dia %.2f", media);

	return 0;
}
