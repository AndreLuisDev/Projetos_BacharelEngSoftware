#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "Portuguese");
	int par, impar, num;
	par = 0;
	impar = 0;
	printf("Informe um número:\n");
	scanf("%d", &num);
	while (num !=0)
	{
		if (num % 2 == 0)
			par++; /* par++ = par + 1, 0 + 1 */
		else
			impar++;
		printf("Informe um número:\n");
		scanf("%d", &num);
	}
	printf("A quantidade de par é: %d\n", par);
	printf("A quantidade de impar é: %d\n", impar);
	return (0);
}
