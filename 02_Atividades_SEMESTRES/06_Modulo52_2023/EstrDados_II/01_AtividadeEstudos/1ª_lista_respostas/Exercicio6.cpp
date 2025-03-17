/*
6 - Faça um programa que preencha um vetor com 10 números reais, calcule e mostre a quantidade de números negativos 
e a soma dos números positivos desse vetor.
*/
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float numeros[10];
	int i;
	int somaPositivo = 0;
	int contaNegativo = 0;
	
	for(i = 0; i < 10; i++){
		printf("Informe o valor da posição %d: ", i+1);
		scanf("%f", &numeros[i]);
		if(numeros[i] > 0){
			somaPositivo += numeros[i];
		}else{
			contaNegativo ++;
		}
		
	}
	
	printf("\nSoma de números positivos: %d", somaPositivo);
	printf("\nQuantidade de números negativos: %d", contaNegativo);

	return 0;
}
