#include <stdio.h>
#include <stdlib.h>

int main() {

	int numSemana;
	printf("Digite um n�mero da semana \n");
	scanf("%d", &numSemana);
	
	switch(numSemana){
		case 1 : {
			printf("Domingo \n");
			break;
		}
		case 2 : {
			printf("Segunda-feira \n");
			break;
		}
		case 3 : {
			printf("Ter�a-feira \n");
			break;
		}
		case 4 : {
			printf("Quarta-feira \n");
			break;
		}
		case 5 : {
			printf("Quinta-feira \n");
			break;
		}
		case 6 : {
			printf("Sexta-feira \n");
			break;
		}
		case 7 : {
			printf("S�bado \n");
			break;
		}
		default : {
			printf("N�mero Inv�lido \n");
			break;
		}
	}

	return 0;
}
