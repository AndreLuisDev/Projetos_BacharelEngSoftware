//inclusão das Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Constantes
#define tamanho 5

// Estrutura da fila para o armazenamento dos elementos
struct tfila {
	int dados[tamanho];
	int ini;
	int fim;
};

//Variáveis globais
struct tfila fila;
int op; //variável para o switch case com Menu

//Funções para serem invocadas
void entrar_fila();
void sair_fila();
void mostrar_fila();
void mostrar_menu();

//Programa principal
int main(){
	setlocale(LC_ALL, "Portuguese");
	op = 1;
	fila.ini = 0;
	fila.fim = 0;
	while(op != 0){
		system("cls");
		mostrar_fila();
		mostrar_menu();
		scanf("%d", &op);
		switch (op){
			case 1:
				entrar_fila();
			break;
			case 2:
				sair_fila();
			break;
		}
	}
	return(0);
}

//Adicionar um elemento no final da Fila
void entrar_fila(){
	if(fila.fim == tamanho){
		printf("\nA fila está cheia, volte outro dia!\n\n");
		system("pause");
	}
	else {
		printf("\nDigite o valor a ser inserido: ");
		scanf("%d", &fila.dados[fila.fim]);
		fila.fim++;
	}
}

//Retirar o primeiro elemento da fila
void sair_fila(){
	if (fila.ini == fila.fim){
		printf("\nFila vazia, mas logo aparece alguém!\n\n");
		system("pause");
	}else{
		int i;
		for(i=0;i<tamanho;i++){
			fila.dados[i] = fila.dados[i+1];
		}
		fila.dados[fila.fim] = 0;
		fila.fim--;
	}
}

//Mostrar o conteúdo da Fila
void mostrar_fila(){
	int i;
	printf("[ ");
	for (i=0; i<tamanho;i++){
		printf("%d ", fila.dados[i]);
	}
	printf("]\n\n");
}

//Mostra o menu de opções
void mostrar_menu(){
	printf("\nEscolha uma opção:\n");
	printf("1 - Incluir elemento na Fila\n");
	printf("2 - Excluir elemento da Fila\n");
	printf("0 - Sair\n\n");
}


		












