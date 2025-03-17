#include <stdio.h>
#include <stdlib.h>

typedef struct no{ // É A CABEÇA DA LISTA - é um bloco com dois pedaços[Funcionário]
  int valor;
  struct no *proximo;
}No; // nó = [VALOR | ponteiro que indica o endereço do próximo nó]

// Por que no passa a se chamar No? Por que <no> é a estrutura que guarda o valor e o ponteiro.
// Para chamar essa estrutura de novo, eu uso o <No>

void inserir_inicio(No **lista, int num){ // ** lista -> é um ponteiro para receber outro ponteiro. Endereço indicando outro Endereço
  No *novo = (No*)malloc(sizeof(No));

// void inserir_inicio(No **lista <recebe o endereço de *lista[A1 = NULL]> e int num <valor = 30>){ //Está se inserindo como PILHA - empilhando! 
// No *novo = (No*)malloc(sizeof(No)); //cria novo Nó e JÁ ATRIBIU NA MEMÓRIA O SIZEOFF DE NO
// Com dois pedaços - Valor|Proximo Endereço, após o ponteiro *lista que tem conteúdo igual a NULL.

  if(novo){ //novo nó criado na linha 13 | o novo nó fica com duas partes 30|NULL em [B1] da memória fictícia
    novo->valor = num; //substitua o novo [valor] por 30
    novo->proximo = *lista; //pega o conteúdo da lista (NULL) e coloca no [Próximo]
    *lista = novo; //o endereço do novo [B1] passa a ser o novo conteúdo do ponteiro lista
    				//como LISTA e NOVO são ponteiros, seus endereços de memória são conteúdos!!!!
    				//o conteúdo de LISTA, que é um ponteiro, fica igual ao endereço de B1 [variável novo criado com MALLOC]
					// NOVO possui seu endereço de memoria alocado após o endereço em que está a LISTA]
    				
					//Criando novo Nó novamente em C1 [linha 13] - Se TRUE na linha 19, que é o novo nó criado | 50|B1
					// novo->valor = num; substitua o novo [valor] por 50
					// novo->proximo = *lista; pegue o conteúdo da lista (B1) e coloca no próximo de C1
					// *lista = novo; pega o endereço de novo [C1] e coloca como conteúdo de lista
  }else
    printf("Erro ao alocar memória.\n");
}

void inserir_fim(No **lista, int num){  // LISTA -> A1 [devido main], aux -> B1, novo -> C1[inserção do 30].
  No *aux, *novo = malloc(sizeof(No));  // reserve o próximo espaço livre em memória para o novo
  // pois, LISTA e aux já foram declarados e definidos antes de novo

  if(novo){
    novo->valor = num;
    novo->proximo = NULL; // é nulo, pois uma inserção numa fila, após ele niguém é inserido. A inserção é feita no final da fila
    // o primeiro número inserido é a cabeça da fila, e o primeiro a ser removido, portanto atrás dele deve ser NULL>

    if(*lista == NULL){ // se a lista está vazia, SENÃO
      *lista = novo; // pega o endereço de novo e coloca como conteúdo de lista | C1 [onde novo foi criado 30|NULL], passa a ser a CABEÇA da lista.
    }else{ //serva para que nó consecutivos não possuam valor de PROXIMO igual a NULL, pois numa FILA, apenas o 2º elemento inserido
    // pode ser o final da fila. O primeiro nó que foi inserido, recebe o endereço de D1 para encadear os nós. FIFO. [30|D1 e 50|NULL]
      aux = *lista; // pega o conteúdo de lista [C1] e colaca como endereço de aux. [como aux é um ponteiro, ele pode armazenar END MEM]
      while(aux->proximo) // como auxiliar que agora passa ser C1 não tem dado no PROXIMO, pula para linha 50 // //aux tem um próximo? 
        aux = aux->proximo; // pega o proximo de aux[C1 que aponta para o valor proximo D1]
      aux->proximo = novo; // no valor de proximo de aux alocada em B1, receba o endereço do novo nó que é D1 [inserção do 50]
    }
  }else
    printf("Erro ao alocar memória.\n");
}

void inserir_meio(No **lista, int num, int ant){
  No *aux, *novo = malloc(sizeof(No));

  if(novo){
    novo->valor = num;

    if(*lista == NULL){
      novo->proximo = NULL;
      *lista = novo;
    }else{
      aux = *lista;
      while(aux->valor != ant && aux->proximo)
        aux = aux->proximo;
      novo->proximo = aux->proximo;
      aux->proximo = novo;
    }
  }else
    printf("Erro ao locar memória.\n");
}

void inserir_ordenado(No **lista, int num){ // * * lista - significa um ponteiro de ponteiro -
											// é um variável especial que guarda o endereço de outro ponteiro
											// ao posso que esse ponteiro que a lista aponta, contém o dado a ser armazenado.
											// **lista exime de usar uma estrutura de lista [outra estrutura]
  No *aux, *novo = malloc(sizeof(No));

  if(novo){
    novo->valor = num;

    if(*lista == NULL){ // o conteudo apontado por lista é NULL?
      novo->proximo = NULL; // se lista não está mais vazia, pois agora existe o nó 30 | NULL e atribuo seu endereço para o ponteiro lista como conteude
      *lista = novo; // o conteúdo de lista passaa ser o endereço do novo nó criado.
    }else if(novo->valor < (*lista)->valor){ //se o valor do novo nó for maior que o valor do conteúdo apontado por lista [C1]
      novo->proximo = *lista; // pega o conteudo apontado por lista, e coloca no proximo do novo nó alocado
      *lista = novo; // o endereço do novo nó, passa a ser o novo conteúdo do ponteiro lista, que a é cabeça da lista ordenada
    }else{
      aux = *lista;// coloque o conteudo de lista que é C1 em B1
      while(aux->proximo && novo->valor > aux->proximo->valor) //aux->proximo *C1 tem próximo?; no ponteiro aux - o conteudo de proximo existe? é diferente de nulo 
        aux = aux->proximo; // novo->valor > aux->proximo->valor - o valor do novo nó é maior do que o valor do aux-proximo? A2 -> C1 ->30?
      novo->proximo = aux->proximo; // pega o proximo da aux[B1] que aponta para C1 em seu conteudo NULO, e coloca no proximo do novo nó criado em D1.
      aux->proximo = novo; // pega o endereço de novo e coloca no proximo de auxilar
	  					   // novo e proximo são ponteiros - então eles podem receber conteudo como sendo endereço de memória
						   // para encadear a lista ordenada.
    }    
  }else
    printf("Erro ao alocar memória.\n");
}
// necessário atualizar os conteúdos dos ponteiros para não ficar um buraco na lista
No* remover(No **lista, int num){ // ação: remover o 1º elemento da lista | end ini [A1] e o número a ser excluídos 25 como parâmetros
  No *aux, *no = NULL;

  if(*lista){ // recebeu o conteudo de A1? sim, tem o A2 lá!
    if((*lista)->valor == num){ // em A2 (*lista)->valor - pega o valor | é o número que quero remover? SIM 
      no = *lista; // pega o conteúdo de lista, salva em A1, que é[A2]...
	  				// ... e salva esse ínico de lista na aux ponteiro no, que era NULL
      *lista = no->proximo; // antes de remover o valor de A2, pega seu valor proximo[C1] e colaca no início da lista, para continuar ligada.
    }else{
      aux = *lista;
      while(aux->proximo && aux->proximo->valor != num) // aux->proximo->valor - no local de memoria indicado pela variavel aux..
      													// no campo proximo, o valor é diferente do buscado?
														// aux em B1 = C1
														// e em C1 = 30 | B2; em B2 o valor é o buscado para remoção?
        aux = aux->proximo; // aux deixa de ser C1 e passa a ser B2, pois era o conteudo que a aux B1 apontava como próximo em C1.
      if(aux->proximo){
        no = aux->proximo;
        aux->proximo = no->proximo;
      }
    }
  }
  return no; // retorna o no que tem conteudo A2 [25 | C1] - o 25 será excluido no Switch
}

No* buscar(No **lista, int num){ // No **lista - recebendo o conteudo de lista [A1]
  No *aux, *no = NULL; //cria-se duas memórias auxiliares aux e no

  aux = *lista;
  while(aux && aux->valor != num) // enquanto existir aux [que é um endereço] e um valor para ele E esse valor for DIFERENTE do numero buscado:
    aux = aux->proximo;//no endereco de memória aux=[A2], o valor do proximo de aux[C1]=[25|C1] passa para o endereço de aux=[C1]
  if(aux) // se não houver endereço para aux ou quando o valor do nó atual não é diferente do buscado, e sim é o numero buscado.
    no = aux;
  return no; // caso não encontre um valor passado, retornará o valor do no que é NULO,
  			// senão retorna o valor buscado devido atribuição na linha anterior
  			// o retorno nó continua no Switch 7
}

void imprimir(No *no){ // a função imprimir recebe a lista como argumento passado do tipo No (struct) e imprime seu conteudo [*no]
  printf("\nLista: ");
  while(no){ //enquanto tiver nó, enquanto nó for verdadeiro ou enquanto nó for diferente de NULO.
    printf("%d ", no->valor);
	// PONTEIRO opera com operador SETA para referir-se a tal campo no->valor [resume a escrita] ou *(no).valor
	// pode usar o "." , mas como o ponteiro tem mais de um campo, é necessário especificar o conteudo de nó *(no) + o campo ".valor"
	// REGISTRO opera com o operador "." para referir-se a tal campo no.valor
    no = no->proximo; // o no recebe o endereço do nó do campo próximo
  }
  printf("\n\n");
}

int main(void) {
  int opcao, valor, anterior;
  No *no, *lista = NULL; // o ponteiro <lista> é a primeira variável que é alocada na memória, pois é a primeira a receber um atributo igual a NULL

  do{
    printf("\n0 - Sair\n1 - Inserir no início\n2 - Inserir no fim\n3 - Inserir no meio\n4 - Inserir ordenado\n5 - Remover\n6 - Imprimir\n7 - Buscar\n");
    scanf("%d", &opcao);

    switch(opcao){
      case 1:
        printf("Valor: ");
        scanf("%d", &valor);
        inserir_inicio(&lista, valor);
        break;
      case 2:
        printf("Valor: ");
        scanf("%d", &valor);
        inserir_fim(&lista, valor);
        break;
      case 3:
        printf("Valor a ser inserido e valor de referência: ");
        scanf("%d%d", &valor, &anterior);
        inserir_meio(&lista, valor, anterior);
        break;
      case 4:
        printf("Valor: ");
        scanf("%d", &valor);
        inserir_ordenado(&lista, valor);
        break;
      case 5:
        printf("Valor: ");
        scanf("%d", &valor);
        no = remover(&lista, valor); //&lista - passo o endereço da lista - do primeiro local da lista - o A1
        if(no){
          printf("Elemento: %d", no->valor);
          free(no); // vai limpar o conteudo de nó [25 | C1] que havia sido alocado por Malloc | Fazer uso consciente da memória
          			// não necessariamente será limpado, mas outro programa(se concorrente) poderá ocupado o espaço da memória.
        }else
          printf("Elemento não encontrado.\n");
        break;
      case 6:
        imprimir(lista); // pega o conteudo do endereço de onde está salva a variável ponteiro lista e imprime-o
        				// sabe-se que a impressão do conteudo de lista, é o primeiro local de memoria, onde inicia a lista
        				// contém um endereço de memória de outro nó. Assim, lista aponta para o próximo nó (que contém um valor)
        				// e um proximo endereço de memória, imprimindo sucessivamente os nós até NULL.
        break;
      case 7:
        printf("Valor: ");
        scanf("%d", &valor);
        no = buscar(&lista, valor);
        if(no) // recebe o nó atribuido no fim da função Buscar
          printf("Elemento: %d", no->valor); // imprime apenas o valor  
        else // não não houver nó, se for NULL
          printf("Elemento não encontrado.\n"); //fim
        break;
      default:
        if(opcao != 0)
          printf("Opção inválida.\n");
    }
  }while(opcao != 0);
  return 0;
}
