#include <stdio.h>
#include <stdlib.h>

int main(){
	int num, resto;
		printf("Digite um número: \n");
		scanf("%d", &num);
	
		resto = num / 2;
		resto = num - (resto*2);
	
		if(resto == 0){
			printf("par");
	}
		else{
			printf("ímpar");
	}
	
	return (0);
}
