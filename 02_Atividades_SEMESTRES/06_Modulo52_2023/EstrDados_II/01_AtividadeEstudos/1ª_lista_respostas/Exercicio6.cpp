/*
6 - Fa�a um programa que preencha um vetor com 10 n�meros reais, calcule e mostre a quantidade de n�meros negativos 
e a soma dos n�meros positivos desse vetor.
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
		printf("Informe o valor da posi��o %d: ", i+1);
		scanf("%f", &numeros[i]);
		if(numeros[i] > 0){
			somaPositivo += numeros[i];
		}else{
			contaNegativo ++;
		}
		
	}
	
	printf("\nSoma de n�meros positivos: %d", somaPositivo);
	printf("\nQuantidade de n�meros negativos: %d", contaNegativo);

	return 0;
}
