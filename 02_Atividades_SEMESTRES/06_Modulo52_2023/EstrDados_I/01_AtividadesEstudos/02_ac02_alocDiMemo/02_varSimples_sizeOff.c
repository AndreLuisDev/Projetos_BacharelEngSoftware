#include <stdio.h>
#include <stdlib.h> // alocação dinâmica em memória para variável ponteiro do tipo simples [uma posição].
 int main(){
	int *p;
	p = (int *) malloc(sizeof(int)); //retorna a alocação em memória de 4 bytes para o ponteiro
		if (p == NULL){   
				printf("Erro!\n");
		}
		else{
			*p = 10;
			printf("p: %d\n", *p);
			free(p); 
		}
}

	
