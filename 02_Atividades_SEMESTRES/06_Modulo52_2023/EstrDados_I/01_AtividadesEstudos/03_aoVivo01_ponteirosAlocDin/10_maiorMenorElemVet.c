#include <stdio.h>
#include <stdlib.h>

void maiorMenor(int *vet, int tam, int *menor, int *maior){
	int i;
	*menor = *vet; //inicializa com o primeiro elemento do vetor
	*maior = *vet; //inicializa com o primeiro elemento do vetor
	for(i = 0; i<tam; i++){
		if(*menor > *(vet + i))
			*menor = *(vet + i);
		if(*maior < *(vet + i))
			*maior = *(vet + i);
	}
}

int main(void){
	int menor, maior, v[10] = {45, 89, 69, 23, 14, 75, 2, 45, 100, 58};
	printf("Menor: %d\tMaior: %d\n", menor, maior);
	maiorMenor(v, 10, &menor, &maior); // &menor - passa o endere�o da var�avel
	// como as vari�veis menor e maior n�o foram inicializadas, iniciam com valor indeterminado.
	printf("Menor: %d\tMaior: %d\n", menor, maior);
		
}

/* Explica��o ChatGpt

#include <stdio.h>
#include <stdlib.h>

Essas linhas incluem as bibliotecas stdio.h e stdlib.h.
fornece fun��es de entrada e sa�da, como printf, e stdlib.h fornece fun��es
utilit�rias, como aloca��o de mem�ria.


void maiorMenor(int *vet, int tam, int *menor, int *maior){

Essa linha declara uma fun��o chamada maiorMenor, que recebe:

- um ponteiro vet que aponta para um vetor de inteiros (vetor v[10]) - comen�ando pela sua primeira posi��o;
- tam, que � o tamanho do vetor de 10 posi��es;
- um ponteiro menor, que aponta para o endere�o da vari�vel menor, a qual armazena o valor do menor elemento do vetor;
- um ponteiro maior que aponta para o endere�o da vari�vel manior, a qual armazenar o valor do maior elemento do vetor.
(modifiquei pelo meu entendimento!)



int i;
*menor = *vet;
*maior = *vet;

Essas linhas inicializam *menor e *maior com o primeiro elemento do vetor *vet.
Assumimos que o primeiro elemento � tanto o menor quanto o maior inicialmente.



for(i = 9; i<tam; i++){ 58 TESTE DE MESA
    if(*menor > *(vet + i))
        *menor = *(vet + i); 2
    if(*maior < *(vet + i))
        *maior = *(vet + i); 100
}

Essas linhas percorrem o vetor a partir do primeiro elemento at� o �ltimo elemento (i = 0 at� tam - 1).
Para cada elemento, comparamos se ele � menor que *menor e, se for, 
atualizamos *menor para esse valor.
Da mesma forma, comparamos se ele � maior que *maior e, se for,
atualizamos *maior para esse valor.

cpp

int main(void){
    int menor, maior, v[10] = {45, 89, 69, 23, 14, 75, 2, 45, 100, 58};
    printf("Menor: %d\tMaior: %d\n", menor, maior);
    maiorMenor(v, 10, &menor, &maior);
    printf("Menor: %d\tMaior: %d\n", menor, maior);
}

Essas linhas definem a fun��o principal main. 
Nela, declaramos as vari�veis menor e maior e o vetor v contendo 10 elementos. 
Em seguida, imprimimos na tela o valor de menor e maior 
(que s�o n�o inicializados e ter�o valores indeterminados). 
Depois, chamamos a fun��o maiorMenor, passando o vetor v, 
o tamanho 10 e os endere�os das vari�veis menor e maior. 
Por fim, imprimimos novamente o valor de menor e maior, que agora 
foram atualizados pela fun��o maiorMenor.

*/


