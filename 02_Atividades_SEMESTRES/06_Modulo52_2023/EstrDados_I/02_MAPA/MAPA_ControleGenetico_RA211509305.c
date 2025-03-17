/*	 ATIVIDADE MAPA
Acad�mico: Andr� Luis de Souza Lima
R.A. 21150930-5
Curso: ENGENHARIA DE SOFTWARE
Disciplina: MAPA - ESOFT - ESTRUTURA DE DADOS I - 52/2023 
Valor da atividade: 3,00
Prazo: 08/05/2023 08:00 a 07/07/2023 23:59 (hor�rio de Bras�lia) */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct no{
    char base;
    struct no* proximo;
}No;

typedef struct fila{
    No* inicio;
    No* fim;
}FilaDinamica;

typedef struct pilha {
    char base;
    struct pilha* proximo;
}PilhaDinamica;

//FUN��ES PARA CHAMAMENTO DO PROGRAMA

//inicializar a fila
void inicializarFila(FilaDinamica *fila) {
    fila->inicio = NULL;
    fila->fim = NULL;
}

//verifica se est� vazia ou n�o
int filaVazia(FilaDinamica *fila) {
    return (fila->inicio == NULL);
}

// inserir uma base de nucleot�deo na fila
void inserirFila(FilaDinamica* fila, char base) {
    No* novoNo = (No*)malloc(sizeof(No));
    novoNo->base = base;
    novoNo->proximo = NULL;

    if(filaVazia(fila)) {
        fila->inicio = novoNo;
    }
	else{
        fila->fim->proximo = novoNo;
    }
    fila->fim = novoNo;
}

// remover uma base de nucleot�deo da fila
char removerFila(FilaDinamica *fila) {
    if(filaVazia(fila)) {
        printf("Erro: Fila vazia!\n");
        return '\0';
    }    
    No* noRemovido = fila->inicio;
    char nucleotideo = noRemovido->base;

    fila->inicio = noRemovido->proximo;

    if(fila->inicio == NULL) {
       fila->fim = NULL;
    }
	free(noRemovido);

// Convers�o do nucleot�deo antes de inserir na pilha
    switch(nucleotideo){
        case 'A':
            nucleotideo = 'T';
            break;
        case 'C':
            nucleotideo = 'G';
            break;
        case 'T':
            nucleotideo = 'A';
            break;
        case 'G':
            nucleotideo = 'C';
            break;
    }return nucleotideo;
}

// imprimir a fila
void imprimirFila(FilaDinamica* fila) {
    No* noAtual = fila->inicio;

    printf("\nCadeia Principal:\n ");
    while(noAtual != NULL){
        printf(" %c |", noAtual->base);
        noAtual = noAtual->proximo;
    }
    printf("\n");
}

void inicializarPilha(PilhaDinamica **pilha) {
    *pilha = NULL;
}

//verifica se est� vazia ou n�o
int pilhaVazia(PilhaDinamica** pilha) {
    return (*pilha == NULL);
}

// inserir uma base de nucleot�deo na pilha
void inserirPilha(PilhaDinamica **pilha, char base) {
    PilhaDinamica* novoNo = (PilhaDinamica*)malloc(sizeof(PilhaDinamica));
    novoNo->base = base;
    novoNo->proximo = *pilha;
    *pilha = novoNo;
}

// imprimir a pilha
void imprimirPilha(PilhaDinamica** pilha) {
    PilhaDinamica* noAtual = *pilha;

    printf("\nCadeia Secund�ria:\n ");
    while(noAtual != NULL){
        printf(" %c |", noAtual->base);
        noAtual = noAtual->proximo;
    }
    printf("\n");
}

void limparTela() {
    system("clear || cls");
}

//PROGRAMA PRINCIPAL
int main(void) {
	setlocale(LC_ALL, "Portuguese");
    FilaDinamica fila;
    PilhaDinamica* pilha;
    char opcao, nucleotideo;

    inicializarFila(&fila);
    inicializarPilha(&pilha);
	//menu de op��o
    do{
        printf("\nGERA��O CADEIA SECUND�RIA DE DNA v1.0:\n\n");
        printf("[1] - Inserir a Pirimidina ou Purina da sequ�ncia do DNA\n");
        printf("[2] - Converter o nucleot�dio da cadaeia principal para criar a cadeia segund�ria do DNA correspondente\n");
        printf("[3] - Gere a cadeia principal (primeira h�lice) do DNA\n");
        printf("[4] - Gera a cadeia segund�ria (h�lice secund�ria) do DNA ap�s ter executado a op��o [2]\n");
        printf("[0] - Sair\n");
        printf("Escolha uma opcao: ");
        scanf(" %c", &opcao);

        limparTela();

        switch(opcao){
            case '1':
                printf("Digite um nucleotideo (A, C, T ou G): ");
                scanf(" %c", &nucleotideo);
                nucleotideo = toupper(nucleotideo);
                if(nucleotideo == 'A' || nucleotideo == 'C' || nucleotideo == 'T' || nucleotideo == 'G'){
                    inserirFila(&fila, nucleotideo);
                    printf("Nucleotideo inserido na cadeia principal.\n");
                    imprimirFila(&fila);
                }
				else{
                    printf("Nucleotideo invalido!\n");
                }
                break;
            case '2':
                if(!filaVazia(&fila)){
                    nucleotideo = removerFila(&fila);
                    inserirPilha(&pilha, nucleotideo);
                    printf("Nucleotideo removido da cadeia principal e inserido na secund�ria.\n");
                    imprimirPilha(&pilha);
                }
				else{
                    printf("Cadeia principal vazia! Nao ha nucleotideos para remover.\n");
                }
                break;
            case '3':
                imprimirFila(&fila);
                break;
            case '4':
                imprimirPilha(&pilha);
                break;
            case '0':
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }
    }while(opcao != '0');
    return 0;
}
