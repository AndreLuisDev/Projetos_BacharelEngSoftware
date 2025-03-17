/* Desenvolva um algoritmo que pe�a ao usu�rio que preencha os dados
de um vetor de 5 posi��es com valores reais quaisquer, desde que estejam
compreendidos entre 1 e 100 (supor que o usu�rio ir� respeitar o enunciado - 
sem necessidade de validar se o dado inserido est� correto).
Ao final, o algoritmo deve mostrar na tela o conteudo de cada posic�o do vetor
dividio por 100*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	float vet[5]; // vetor criado para armazenar os 5 dados decimais
	int i=0; //contador para percorrer o vetor com for ou while - navegar no la�o
	
	// la�o para a leitura dos dados
	while(i<5){
	printf("Insira um dado de 1 at� 100: \n");
	scanf("%f", &vet[i]);
	i++;	
	}
	
	//Processamento dos dados
	// buscar o dado na posi��o i do vetor, divide-o por 100 e salvar na mesma posi��o
	i=0;
	while(i<5){
	vet[i] = vet[i] / 100.0;
	i++;	
	}
	
	//impress�0 do vetor
	i=0;
	printf("Vetor Final:\n[ ");
	while(i<5){
	printf("%.2f ", vet[i]);
	i++;
	}
	printf("]\n");	
}
