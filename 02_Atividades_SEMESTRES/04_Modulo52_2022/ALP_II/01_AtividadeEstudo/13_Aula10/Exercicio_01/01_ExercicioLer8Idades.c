#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int idades[8];
	int	i;

	for(i = 0; i<8 ;i++){
	    fflush(stdin);
		printf("Digite a idade numero %d\n", i+1);		
		scanf("%d", &idades[i]);
	}
	
	//ITEM A
	
	float mediaIdades, totalIdades;
	mediaIdades = 0.0, totalIdades = 0.0;
	
	//percorrer o vetor para somar todas as idades
	
	for(i = 0; i<8 ;i++){
	totalIdades = totalIdades + idades[i];
	}
	
	mediaIdades = totalIdades / 8;
	printf("A media de idade � %f\n", mediaIdades);
	
	
	//ITEM B - percorrer e indicar a posi��o com idade maior que 25 anos
	
	for(i = 0; i<8 ;i++){
		if(idades[i] > 25){
			printf("Idade maior que 25 anos encontrada na posi��o %d\n", i);
		}
	}
	
	// ITEM C
	int maiorIdade = 0;
	
		for(i = 0; i<8 ;i++){
			if(idades[i] > maiorIdade){
				maiorIdade = idades[i]; //a cada la�o a maior idade � alocada na vari�vel maiorIdade
			}
		}
	printf("A maior idade digitada foi %d\n", maiorIdade);
	
	// ITEM D - em qual posi��o foi digitada a maior idade?
	// Basta buscar dentro do vetor
		for(i = 0; i<8 ;i++){
			if(idades[i] == maiorIdade){
				printf("Maior idade encontrada na posi��o %d\n", i);
		}
	}
	
	
	
	return 0;
}
