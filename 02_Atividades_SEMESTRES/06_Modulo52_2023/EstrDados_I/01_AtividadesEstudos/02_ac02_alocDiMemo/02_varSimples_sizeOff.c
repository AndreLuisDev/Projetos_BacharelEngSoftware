#include <stdio.h>
#include <stdlib.h> // aloca��o din�mica em mem�ria para vari�vel ponteiro do tipo simples [uma posi��o].
 int main(){
	int *p;
	p = (int *) malloc(sizeof(int)); //retorna a aloca��o em mem�ria de 4 bytes para o ponteiro
		if (p == NULL){   
				printf("Erro!\n");
		}
		else{
			*p = 10;
			printf("p: %d\n", *p);
			free(p); 
		}
}

	
