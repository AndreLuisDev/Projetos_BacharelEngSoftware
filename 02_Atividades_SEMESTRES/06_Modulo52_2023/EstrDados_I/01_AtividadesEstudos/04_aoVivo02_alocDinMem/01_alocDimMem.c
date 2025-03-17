#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *x;

  x = (int *)malloc(sizeof(int)); //malloc reserva o sizeof necess�rio para o tipo de dado

  if(x){ // o x � diferente de nulo? Sim, pois o valor dele n�o � mais nulo,
         // pois a fun��o malloc j� alocou espa�o reservado para x na memoria
    printf("Mem�ria alocada com sucesso.\n");
    printf("x: %d\n", *x); // conteudo de x -> mostra um lixo de mem�ria 
							// o conteudo pode at� existir, mas
							// esse programa reserva o espa�o para que 
							//outro programa n�o escreva por cima a informa��o
							// que ser� atribu�da a seguir, ap�s esse programa ser encerrado
    *x = 50;
    printf("x: %d\n", *x);    
  }else
    printf("Erro ao alocar mem�ria.\n");
}
