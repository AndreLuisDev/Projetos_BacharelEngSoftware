#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//42:00
void imprimir(int *v, int t){
  int i;
  for (i = 0; i < t; i++){
  	printf("%d ", *(v + i));
  printf("\n");
  }

}

int main(void) {
  int i, tam, *vet;

  printf("Digite o tamanho do vetor: ");
  scanf("%d", &tam);
  srand(time(NULL));

  vet = malloc(tam * sizeof(int));

  if(vet){
    printf("Memória alocada com sucesso.\n");
    for(i = 0; i < tam; i++)
      *(vet + i) = rand() % 100;
    
    imprimir(vet, tam);

    free(vet); //não apaga o condeúdo da memória, mas libera para que outra dado possa sobrescrever
  }else
    printf("Erro ao alocar memória.\n");
}
