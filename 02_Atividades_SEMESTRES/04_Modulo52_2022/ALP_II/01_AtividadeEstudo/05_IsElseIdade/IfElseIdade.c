#include <stdio.h>
#include <stdlib.h>

int main (){	
	int idade;	
		printf("Digite sua idade: \n");
		scanf("%d", &idade);

		printf("A idade digitada foi: \n%d \n", idade);
	
		if (idade >= 18){
			printf("A idade � maior que 18 \n");
		}	
		if (idade >=18 && idade <= 20){
			printf("A idade est� entre 18 e 20 \n");
		}	
		else {
			if(idade < 18){
				printf("Idade � menor que 18 \n");
		}
			if(idade > 20){
				printf("Idade � maior que 20 \n");
			}	
		}
	return 0;
}
