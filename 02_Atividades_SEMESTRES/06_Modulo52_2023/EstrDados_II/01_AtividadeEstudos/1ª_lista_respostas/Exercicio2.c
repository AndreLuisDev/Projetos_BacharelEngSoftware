/*
2 - Leia um vetor de 10 posições. Contar e escrever quantos valores positivos e negativos ele possui.
*/
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int vet[10];
	int i;
	int contPositivo = 0;
	int contNegativo = 0;
	
	for(i = 0; i < 10; i++){
		printf("Informe o valor da posição %d: ", i+1);
		scanf("%d", &vet[i]);
		
		if(vet[i] > 0){
			contPositivo++;
		}else{
			contNegativo++;
		}
	}

	printf("\nNa sequência temos %d", contPositivo, " positivos.");
	printf("\nNa sequência temos %d",  contNegativo, " negativos.");

	return 0;
}
