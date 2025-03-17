#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int n, cont;
	float litros, leitura;
		for cont 1 até n 
		
		
		printf("Digite a quantidade de apartamentos do condomínio: \n");
		scanf("%d", &n);		
		printf("O número de apartamento é: \n%d \n", n);
			
		printf("Digite o consumo de litros: \n");
		scanf("%f", &litros);
		
	/* comparar a maior leitura*/
		leitura = litros / 1000;
			printf("Métros cubicos consumidos: \n%f \n",  leitura);
			
	return 0;
}
