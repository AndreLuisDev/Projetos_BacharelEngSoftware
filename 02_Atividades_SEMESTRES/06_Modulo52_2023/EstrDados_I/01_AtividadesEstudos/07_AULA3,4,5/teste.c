#include <stdio.h>
#include <stdlib.h>

// Estrutura do nó da fila
typedef struct no {
    char nucleotideo;
    struct no* proximo;
} No;

// Estrutura da fila
typedef struct fila {
    No* inicio;
    No* fim;
} Fila;

// Estrutura do nó da pilha
typedef struct no_pilha {
    char nucleotideo;
    struct no_pilha* proximo;
} NoPilha;

// Estrutura da pilha
typedef struct pilha {
    NoPilha* topo;
} Pilha;

// Função para inicializar a fila
void inicializarFila(Fila* fila) {
    fila->inicio = NULL;
    fila->fim = NULL;
}

// Função para verificar se a fila está vazia
int filaVazia(Fila* fila) {
    return (fila->inicio == NULL);
}

// Função para inserir um nucleotídeo na fila
void inserirFila(Fila* fila, char nucleotideo) {
    No* novoNo = (No*)malloc(sizeof(No));
    novoNo->nucleotideo = nucleotideo;
    novoNo->proximo = NULL;

    if (filaVazia(fila)) {
        fila->inicio = novoNo;
        fila->fim = novoNo;
    } else {
        fila->fim->proximo = novoNo;
        fila->fim = novoNo;
    }
}

// Função para remover um nucleotídeo da fila
char removerFila(Fila* fila) {
    if (filaVazia(fila)) {
        printf("Fila vazia\n");
        return '\0';
    }

    No* noRemovido = fila->inicio;
    char nucleotideo = noRemovido->nucleotideo;
    fila->inicio = fila->inicio->proximo;

    if (fila->inicio == NULL) {
        fila->fim = NULL;
    }

    free(noRemovido);
    return nucleotideo;
}

// Função para imprimir a fila
void imprimirFila(Fila* fila) {
    No* atual = fila->inicio;

    printf("Fila: ");
    while (atual != NULL) {
        printf("%c ", atual->nucleotideo);
        atual = atual->proximo;
    }
    printf("\n");
}

// Função para inicializar a pilha
void inicializarPilha(Pilha* pilha) {
    pilha->topo = NULL;
}

// Função para verificar se a pilha está vazia
int pilhaVazia(Pilha* pilha) {
    return (pilha->topo == NULL);
}

// Função para inserir um nucleotídeo na pilha
void inserirPilha(Pilha* pilha, char nucleotideo) {
    NoPilha* novoNo = (NoPilha*)malloc(sizeof(NoPilha));
    novoNo->nucleotideo = nucleotideo;
    novoNo->proximo = pilha->topo;
    pilha->topo = novoNo;
}

// Função para remover um nucleotídeo da pilha
char removerPilha(Pilha* pilha) {
    if (pilhaVazia(pilha)) {
        printf("Pilha vazia\n");
        return '\0';
    }

    NoPilha* noRemovido = pilha->topo;
    char nucleotideo = noRemovido->nucleotideo;
    pilha->topo = pilha->topo->proximo;

    free(noRemovido);
    return nucleotideo;
}

// Função para imprimir a pilha
void imprimirPilha(Pilha* pilha) {
    NoPilha* atual = pilha->topo;

    printf("Pilha: ");
    while (atual != NULL) {
        printf("%c ", atual->nucleotideo);
        atual = atual->proximo;
    }
    printf("\n");
}

int main(void) {
    Fila fila;
    Pilha pilha;
    char nucleotideo;

    // Passo 1: Ler a entrada de DNA e inserir na fila
    inicializarFila(&fila);
    printf("Digite a sequencia de nucleotideos (A, C, T ou G):\n");
    do {
        scanf(" %c", &nucleotideo);
        if (nucleotideo == 'A' || nucleotideo == 'C' || nucleotideo == 'T' || nucleotideo == 'G') {
            inserirFila(&fila, nucleotideo);
        } else {
            printf("Nucleotideo invalido. Digite novamente.\n");
        }
    } while (nucleotideo != '\n');

    // Passo 2: Remover a sequência da fila para a pilha
    inicializarPilha(&pilha);
    while (!filaVazia(&fila)) {
        nucleotideo = removerFila(&fila);
        switch (nucleotideo) {
            case 'A':
                inserirPilha(&pilha, 'T');
                break;
            case 'C':
                inserirPilha(&pilha, 'G');
                break;
            case 'T':
                inserirPilha(&pilha, 'A');
                break;
            case 'G':
                inserirPilha(&pilha, 'C');
                break;
        }
    }

    // Passo 3: Imprimir a fila e a pilha
    imprimirFila(&fila);
    imprimirPilha(&pilha);

    return 0;
}

