#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "Portuguese");
	int par, impar, num;
	par = 0;
	impar = 0;
	do
	{
		printf("Informe um n�mero:\n");
		scanf("%d", &num);
		if (num % 2 == 0)
			par++; /* par++ = par + 1, 0 + 1 */
		else
			impar++;
	}
	while (num !=0);	
	printf("A quantidade de par �: %d\n", par);
	printf("A quantidade de impar �: %d\n", impar);
	return (0);
}
