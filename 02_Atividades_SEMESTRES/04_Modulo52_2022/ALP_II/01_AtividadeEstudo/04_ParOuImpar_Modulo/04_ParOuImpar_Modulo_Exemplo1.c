#include <stdio.h>
#include <stdlib.h>

int main(){
	int num, resto;
		printf("Digite um n�mero: \n");
		scanf("%d", &num);
	
		resto = num / 2;
		resto = num - (resto*2);
	
		if(resto == 0){
			printf("par");
	}
		else{
			printf("�mpar");
	}
	
	return (0);
}
