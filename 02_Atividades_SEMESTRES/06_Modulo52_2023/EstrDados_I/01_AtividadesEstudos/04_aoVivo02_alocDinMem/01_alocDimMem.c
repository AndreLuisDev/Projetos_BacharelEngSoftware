#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *x;

  x = (int *)malloc(sizeof(int)); //malloc reserva o sizeof necessário para o tipo de dado

  if(x){ // o x é diferente de nulo? Sim, pois o valor dele não é mais nulo,
         // pois a função malloc já alocou espaço reservado para x na memoria
    printf("Memória alocada com sucesso.\n");
    printf("x: %d\n", *x); // conteudo de x -> mostra um lixo de memória 
							// o conteudo pode até existir, mas
							// esse programa reserva o espaço para que 
							//outro programa não escreva por cima a informação
							// que será atribuída a seguir, após esse programa ser encerrado
    *x = 50;
    printf("x: %d\n", *x);    
  }else
    printf("Erro ao alocar memória.\n");
}
