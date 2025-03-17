// vetores criados estaticamente precisam de especifica��o de tamanho
//podem n�o ser usados em totalidade, perda de mem�ria
// n�o podem aumentar de tamnho durante o tempo de execu��o

//abaixo a aloca��o din�mica de um vetor.
// SINTAXE ->    <ponteiro> = (<cast> *) malloc(sizeof(<tipo>)*<tam>);

#include <stdio.h>
#include <time.h>
#include <stdlib.h> // aloca��o din�mica em mem�ria para vari�vel ponteiro do tipo vetor
 int main(){
 	int i;
 	srand(time(NULL));
	int *vetor;
	int tam;
	printf ("Escolha o tamnho do vetor: ");
	scanf("%d", &tam);
	vetor = (int *) malloc(sizeof(int)*tam);
		if (vetor == NULL){   // coloque o tamanho do vetor -1 ....d� erro! kkk
				printf("Erro!\n");
		}
		else{
			int i;
			for(i=0; i < tam; i++){
				*vetor = rand() % 50;
				printf("Vetor: %d\n", *vetor);
			}
			
			free(vetor);
		//printf("Endere�o do Ponteiro Vetor: %p \t Valor do Ponteiro Vetor: %d", vetor, *vetor);
		}
		free(vetor); 
}

	
