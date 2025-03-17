/*
5 - Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule e imprima a média geral.
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
		printf("Informe o valor da posição %d: ", i+1);
		scanf("%f", &notas[i]);
		somaNota += notas[i];
	}
	media = somaNota / 15;
	printf("\nMédia %.2f", media);

	return 0;
}
