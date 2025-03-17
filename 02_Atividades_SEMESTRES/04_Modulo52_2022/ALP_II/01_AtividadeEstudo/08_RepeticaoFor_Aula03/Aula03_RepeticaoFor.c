#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char nome[30];
	int i;
	
	printf("Informe o nome:\n");
	scanf("%s", &nome);
	for(i=1; i<=10; i++)
		printf("\n %s", nome);
	
	return 0;
}
