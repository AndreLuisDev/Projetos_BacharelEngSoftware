#include <stdio.h>
#include <stdlib.h> // trabalha com malloc
#include <time.h> // utilizado por srand - gera numeros aleatorios

int main(void) {
  int i, tam, *vet;

  printf("Informe o tamanho do vetor: "); // ex: 8 posições
  scanf("%d", &tam); // armazena no endereço da variável tam - 8
  srand(time(NULL)); // "startar" usando a hora. Pega o valor de hora e armazena
					// como as horas geram novos segundos, consegue-se gerar numeros
					// aleatorios com base na hora
					
  vet = malloc(tam * sizeof(int)); 
  					// o vetor vet será atribuído de um armazenamento, 
					// tal qual[bytes]
					// de memória que é definido pelo tipo de dado e
					// o tamanho do vetor por conta da funçao malloc
					// reserva 64 bytes

  if(vet){ // se vet é igual a true - existe vet
    printf("Memória alocada com sucesso.\n");
    for(i = 0; i < tam; i++) // aloca 8 posições sequenciais
      *(vet /*posição inicial do vetor vet*/ + i) = rand() % 100; // aritmética de ponteiros - alocar em sequencia os valores i aleatorios criados por srand nas posições i que o for roda
    for(i = 0; i < tam; i++) // rand() % 100 - pega a hora, divide por 100 e o resto da divisão cria o número aleatório.
      printf("%d ", *(vet + i)); // vet + i - é a primeira posição do vetor + 8 bytes para frente = que ocupa a segunda posição
   								//vet + 2 - primeira posição de 8 bytes + 16 bytes - 1ª posicão 8 8 bytes
   								// 2ª 8 bytes da primeira, + 8 bytes para a segunta - 00000000|00000000
   								// 3ª 16 + 8 = 1 00000000|2 00000000|3 00000000
	// então na posição 1 [0 do vetor] - será lançado um valor randômico
    printf("\n");
  }else{
  	printf("Erro ao alocar memória.\n");
    free(vet);
  }
    free(vet);
}

// na linguagem Python e JavaScript trabalha-se com ponteiros em alto nível
// o manuseio no código dessa váriavel dinâmica não é explícita como é
// na linguagem C, que é de médio nível, em que o programador deve 
//declarar e manipular as referência a nível de código.
