// vetores criados estaticamente precisam de especificação de tamanho
//podem não ser usados em totalidade, perda de memória
// não podem aumentar de tamnho durante o tempo de execução

//abaixo a alocação dinâmica de um vetor.
// SINTAXE ->    <ponteiro> = (<cast> *) malloc(sizeof(<tipo>)*<tam>);

#include <stdio.h>
#include <time.h>
#include <stdlib.h> // alocação dinâmica em memória para variável ponteiro do tipo vetor
 int main(){
 	int i;
 	srand(time(NULL));
	int *vetor;
	int tam;
	printf ("Escolha o tamnho do vetor: ");
	scanf("%d", &tam);
	vetor = (int *) malloc(sizeof(int)*tam);
		if (vetor == NULL){   // coloque o tamanho do vetor -1 ....dá erro! kkk
				printf("Erro!\n");
		}
		else{
			int i;
			for(i=0; i < tam; i++){
				*vetor = rand() % 50;
				printf("Vetor: %d\n", *vetor);
			}
			
			free(vetor);
		//printf("Endereço do Ponteiro Vetor: %p \t Valor do Ponteiro Vetor: %d", vetor, *vetor);
		}
		free(vetor); 
}

	
