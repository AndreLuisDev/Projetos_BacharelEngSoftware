/*
7 - Faca um programa que receba 6 numeros inteiros e mostre:
- Os numeros pares digitados;
- A soma dos numeros pares digitados;
- Os numeros .mpares digitados;
- A quantidade de numeros .mpares digitados;
*/
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int numeros[6], par[6], impar[6];
	int i, j,l;
	int somaPar = 0;
	int contaImpar = 0;
	j = 0;
	l = 0 ;
	for(i = 0; i < 6; i++){
		printf("Informe o valor da posição %d: ", i+1);
		scanf("%d", &numeros[i]);
		
		if(numeros[i] % 2 == 0){
			if(j == 0){
				par[j] = numeros[i];
				j++;			
			}else{	
				par[j] = numeros[i];
				j++;			
			}		
			somaPar += numeros[i];
		}else{
			if(l == 0){
				impar[l] = numeros[i];	
				l++;		
			}else{
				impar[l] = numeros[i];	
				l++;		
			}
			contaImpar ++;
		}
	}
	printf("\n\nNúmeros pares!");
	for(i = 0; i < sizeof(par) / sizeof(int); i++){
		if(par[i])
			printf("%d - ", par[i]);
	}
	
	printf("\n\nNúmeros impares!");
	for(i = 0; i < sizeof(impar) / sizeof(int); i++){
		if(impar[i])
			printf("%d - ", impar[i]);
	}
	printf("\nSoma de números pares: %d", somaPar);
	printf("\nQuantidade de números impares: %d", contaImpar);

	return 0;
}
