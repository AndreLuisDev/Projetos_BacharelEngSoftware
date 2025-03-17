#include <stdio.h>
#include <stdlib.h> // trabalha com malloc
#include <time.h> // utilizado por srand - gera numeros aleatorios

int main(void) {
  int i, tam, *vet;

  printf("Informe o tamanho do vetor: "); // ex: 8 posi��es
  scanf("%d", &tam); // armazena no endere�o da vari�vel tam - 8
  srand(time(NULL)); // "startar" usando a hora. Pega o valor de hora e armazena
					// como as horas geram novos segundos, consegue-se gerar numeros
					// aleatorios com base na hora
					
  vet = malloc(tam * sizeof(int)); 
  					// o vetor vet ser� atribu�do de um armazenamento, 
					// tal qual[bytes]
					// de mem�ria que � definido pelo tipo de dado e
					// o tamanho do vetor por conta da fun�ao malloc
					// reserva 64 bytes

  if(vet){ // se vet � igual a true - existe vet
    printf("Mem�ria alocada com sucesso.\n");
    for(i = 0; i < tam; i++) // aloca 8 posi��es sequenciais
      *(vet /*posi��o inicial do vetor vet*/ + i) = rand() % 100; // aritm�tica de ponteiros - alocar em sequencia os valores i aleatorios criados por srand nas posi��es i que o for roda
    for(i = 0; i < tam; i++) // rand() % 100 - pega a hora, divide por 100 e o resto da divis�o cria o n�mero aleat�rio.
      printf("%d ", *(vet + i)); // vet + i - � a primeira posi��o do vetor + 8 bytes para frente = que ocupa a segunda posi��o
   								//vet + 2 - primeira posi��o de 8 bytes + 16 bytes - 1� posic�o 8 8 bytes
   								// 2� 8 bytes da primeira, + 8 bytes para a segunta - 00000000|00000000
   								// 3� 16 + 8 = 1 00000000|2 00000000|3 00000000
	// ent�o na posi��o 1 [0 do vetor] - ser� lan�ado um valor rand�mico
    printf("\n");
  }else{
  	printf("Erro ao alocar mem�ria.\n");
    free(vet);
  }
    free(vet);
}

// na linguagem Python e JavaScript trabalha-se com ponteiros em alto n�vel
// o manuseio no c�digo dessa v�riavel din�mica n�o � expl�cita como �
// na linguagem C, que � de m�dio n�vel, em que o programador deve 
//declarar e manipular as refer�ncia a n�vel de c�digo.
