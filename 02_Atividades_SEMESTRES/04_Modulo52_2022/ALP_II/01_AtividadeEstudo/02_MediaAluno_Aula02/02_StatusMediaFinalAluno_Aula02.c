#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float media;
		printf("Digite sua m�dia final: \n");
		scanf("%f", &media);
		
		if(media >= 7.0){
			printf("Aprovado!");
		}
		else{
			if(media >= 4.0 && media < 7.0){
				printf("Voc� ficou de recupera��o!");
			}
			else{
				printf("Voc� foi reprovado!");
			}						
		}
	return 0;
}
