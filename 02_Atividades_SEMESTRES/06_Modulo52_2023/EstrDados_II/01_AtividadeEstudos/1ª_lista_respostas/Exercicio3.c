/*
3 - Fa�a um programa que receba do usu�rio um vetor com 10 posi��es. 
Em seguida dever� ser impresso o maior e o menor elemento do vetor.
*/
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int vet[10];
	int i;
	int menor;
	int maior = 0;
	
	for(i = 0; i < 10; i++){
		printf("Informe o valor da posi��o %d: ", i+1);
		scanf("%d", &vet[i]);
		
		if(vet[i] > maior){
			maior = vet[i];
		}else if(vet[i] < menor){
			menor = vet[i];
		}
	}

	printf("\nMaior valor %d", maior);
	printf("\nMenor valor %d",  menor);

	return 0;
}
