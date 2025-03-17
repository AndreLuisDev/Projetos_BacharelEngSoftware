#include <stdio.h>
#include <stdlib.h>

typedef struct no{ // � A CABE�A DA LISTA - � um bloco com dois peda�os[Funcion�rio]
  int valor;
  struct no *proximo;
}No; // n� = [VALOR | ponteiro que indica o endere�o do pr�ximo n�]

// Por que no passa a se chamar No? Por que <no> � a estrutura que guarda o valor e o ponteiro.
// Para chamar essa estrutura de novo, eu uso o <No>

void inserir_inicio(No **lista, int num){ // ** lista -> � um ponteiro para receber outro ponteiro. Endere�o indicando outro Endere�o
  No *novo = (No*)malloc(sizeof(No));

// void inserir_inicio(No **lista <recebe o endere�o de *lista[A1 = NULL]> e int num <valor = 30>){ //Est� se inserindo como PILHA - empilhando! 
// No *novo = (No*)malloc(sizeof(No)); //cria novo N� e J� ATRIBIU NA MEM�RIA O SIZEOFF DE NO
// Com dois peda�os - Valor|Proximo Endere�o, ap�s o ponteiro *lista que tem conte�do igual a NULL.

  if(novo){ //novo n� criado na linha 13 | o novo n� fica com duas partes 30|NULL em [B1] da mem�ria fict�cia
    novo->valor = num; //substitua o novo [valor] por 30
    novo->proximo = *lista; //pega o conte�do da lista (NULL) e coloca no [Pr�ximo]
    *lista = novo; //o endere�o do novo [B1] passa a ser o novo conte�do do ponteiro lista
    				//como LISTA e NOVO s�o ponteiros, seus endere�os de mem�ria s�o conte�dos!!!!
    				//o conte�do de LISTA, que � um ponteiro, fica igual ao endere�o de B1 [vari�vel novo criado com MALLOC]
					// NOVO possui seu endere�o de memoria alocado ap�s o endere�o em que est� a LISTA]
    				
					//Criando novo N� novamente em C1 [linha 13] - Se TRUE na linha 19, que � o novo n� criado | 50|B1
					// novo->valor = num; substitua o novo [valor] por 50
					// novo->proximo = *lista; pegue o conte�do da lista (B1) e coloca no pr�ximo de C1
					// *lista = novo; pega o endere�o de novo [C1] e coloca como conte�do de lista
  }else
    printf("Erro ao alocar mem�ria.\n");
}

void inserir_fim(No **lista, int num){  // LISTA -> A1 [devido main], aux -> B1, novo -> C1[inser��o do 30].
  No *aux, *novo = malloc(sizeof(No));  // reserve o pr�ximo espa�o livre em mem�ria para o novo
  // pois, LISTA e aux j� foram declarados e definidos antes de novo

  if(novo){
    novo->valor = num;
    novo->proximo = NULL; // � nulo, pois uma inser��o numa fila, ap�s ele nigu�m � inserido. A inser��o � feita no final da fila
    // o primeiro n�mero inserido � a cabe�a da fila, e o primeiro a ser removido, portanto atr�s dele deve ser NULL>

    if(*lista == NULL){ // se a lista est� vazia, SEN�O
      *lista = novo; // pega o endere�o de novo e coloca como conte�do de lista | C1 [onde novo foi criado 30|NULL], passa a ser a CABE�A da lista.
    }else{ //serva para que n� consecutivos n�o possuam valor de PROXIMO igual a NULL, pois numa FILA, apenas o 2� elemento inserido
    // pode ser o final da fila. O primeiro n� que foi inserido, recebe o endere�o de D1 para encadear os n�s. FIFO. [30|D1 e 50|NULL]
      aux = *lista; // pega o conte�do de lista [C1] e colaca como endere�o de aux. [como aux � um ponteiro, ele pode armazenar END MEM]
      while(aux->proximo) // como auxiliar que agora passa ser C1 n�o tem dado no PROXIMO, pula para linha 50 // //aux tem um pr�ximo? 
        aux = aux->proximo; // pega o proximo de aux[C1 que aponta para o valor proximo D1]
      aux->proximo = novo; // no valor de proximo de aux alocada em B1, receba o endere�o do novo n� que � D1 [inser��o do 50]
    }
  }else
    printf("Erro ao alocar mem�ria.\n");
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
    printf("Erro ao locar mem�ria.\n");
}

void inserir_ordenado(No **lista, int num){ // * * lista - significa um ponteiro de ponteiro -
											// � um vari�vel especial que guarda o endere�o de outro ponteiro
											// ao posso que esse ponteiro que a lista aponta, cont�m o dado a ser armazenado.
											// **lista exime de usar uma estrutura de lista [outra estrutura]
  No *aux, *novo = malloc(sizeof(No));

  if(novo){
    novo->valor = num;

    if(*lista == NULL){ // o conteudo apontado por lista � NULL?
      novo->proximo = NULL; // se lista n�o est� mais vazia, pois agora existe o n� 30 | NULL e atribuo seu endere�o para o ponteiro lista como conteude
      *lista = novo; // o conte�do de lista passaa ser o endere�o do novo n� criado.
    }else if(novo->valor < (*lista)->valor){ //se o valor do novo n� for maior que o valor do conte�do apontado por lista [C1]
      novo->proximo = *lista; // pega o conteudo apontado por lista, e coloca no proximo do novo n� alocado
      *lista = novo; // o endere�o do novo n�, passa a ser o novo conte�do do ponteiro lista, que a � cabe�a da lista ordenada
    }else{
      aux = *lista;// coloque o conteudo de lista que � C1 em B1
      while(aux->proximo && novo->valor > aux->proximo->valor) //aux->proximo *C1 tem pr�ximo?; no ponteiro aux - o conteudo de proximo existe? � diferente de nulo 
        aux = aux->proximo; // novo->valor > aux->proximo->valor - o valor do novo n� � maior do que o valor do aux-proximo? A2 -> C1 ->30?
      novo->proximo = aux->proximo; // pega o proximo da aux[B1] que aponta para C1 em seu conteudo NULO, e coloca no proximo do novo n� criado em D1.
      aux->proximo = novo; // pega o endere�o de novo e coloca no proximo de auxilar
	  					   // novo e proximo s�o ponteiros - ent�o eles podem receber conteudo como sendo endere�o de mem�ria
						   // para encadear a lista ordenada.
    }    
  }else
    printf("Erro ao alocar mem�ria.\n");
}
// necess�rio atualizar os conte�dos dos ponteiros para n�o ficar um buraco na lista
No* remover(No **lista, int num){ // a��o: remover o 1� elemento da lista | end ini [A1] e o n�mero a ser exclu�dos 25 como par�metros
  No *aux, *no = NULL;

  if(*lista){ // recebeu o conteudo de A1? sim, tem o A2 l�!
    if((*lista)->valor == num){ // em A2 (*lista)->valor - pega o valor | � o n�mero que quero remover? SIM 
      no = *lista; // pega o conte�do de lista, salva em A1, que �[A2]...
	  				// ... e salva esse �nico de lista na aux ponteiro no, que era NULL
      *lista = no->proximo; // antes de remover o valor de A2, pega seu valor proximo[C1] e colaca no in�cio da lista, para continuar ligada.
    }else{
      aux = *lista;
      while(aux->proximo && aux->proximo->valor != num) // aux->proximo->valor - no local de memoria indicado pela variavel aux..
      													// no campo proximo, o valor � diferente do buscado?
														// aux em B1 = C1
														// e em C1 = 30 | B2; em B2 o valor � o buscado para remo��o?
        aux = aux->proximo; // aux deixa de ser C1 e passa a ser B2, pois era o conteudo que a aux B1 apontava como pr�ximo em C1.
      if(aux->proximo){
        no = aux->proximo;
        aux->proximo = no->proximo;
      }
    }
  }
  return no; // retorna o no que tem conteudo A2 [25 | C1] - o 25 ser� excluido no Switch
}

No* buscar(No **lista, int num){ // No **lista - recebendo o conteudo de lista [A1]
  No *aux, *no = NULL; //cria-se duas mem�rias auxiliares aux e no

  aux = *lista;
  while(aux && aux->valor != num) // enquanto existir aux [que � um endere�o] e um valor para ele E esse valor for DIFERENTE do numero buscado:
    aux = aux->proximo;//no endereco de mem�ria aux=[A2], o valor do proximo de aux[C1]=[25|C1] passa para o endere�o de aux=[C1]
  if(aux) // se n�o houver endere�o para aux ou quando o valor do n� atual n�o � diferente do buscado, e sim � o numero buscado.
    no = aux;
  return no; // caso n�o encontre um valor passado, retornar� o valor do no que � NULO,
  			// sen�o retorna o valor buscado devido atribui��o na linha anterior
  			// o retorno n� continua no Switch 7
}

void imprimir(No *no){ // a fun��o imprimir recebe a lista como argumento passado do tipo No (struct) e imprime seu conteudo [*no]
  printf("\nLista: ");
  while(no){ //enquanto tiver n�, enquanto n� for verdadeiro ou enquanto n� for diferente de NULO.
    printf("%d ", no->valor);
	// PONTEIRO opera com operador SETA para referir-se a tal campo no->valor [resume a escrita] ou *(no).valor
	// pode usar o "." , mas como o ponteiro tem mais de um campo, � necess�rio especificar o conteudo de n� *(no) + o campo ".valor"
	// REGISTRO opera com o operador "." para referir-se a tal campo no.valor
    no = no->proximo; // o no recebe o endere�o do n� do campo pr�ximo
  }
  printf("\n\n");
}

int main(void) {
  int opcao, valor, anterior;
  No *no, *lista = NULL; // o ponteiro <lista> � a primeira vari�vel que � alocada na mem�ria, pois � a primeira a receber um atributo igual a NULL

  do{
    printf("\n0 - Sair\n1 - Inserir no in�cio\n2 - Inserir no fim\n3 - Inserir no meio\n4 - Inserir ordenado\n5 - Remover\n6 - Imprimir\n7 - Buscar\n");
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
        printf("Valor a ser inserido e valor de refer�ncia: ");
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
        no = remover(&lista, valor); //&lista - passo o endere�o da lista - do primeiro local da lista - o A1
        if(no){
          printf("Elemento: %d", no->valor);
          free(no); // vai limpar o conteudo de n� [25 | C1] que havia sido alocado por Malloc | Fazer uso consciente da mem�ria
          			// n�o necessariamente ser� limpado, mas outro programa(se concorrente) poder� ocupado o espa�o da mem�ria.
        }else
          printf("Elemento n�o encontrado.\n");
        break;
      case 6:
        imprimir(lista); // pega o conteudo do endere�o de onde est� salva a vari�vel ponteiro lista e imprime-o
        				// sabe-se que a impress�o do conteudo de lista, � o primeiro local de memoria, onde inicia a lista
        				// cont�m um endere�o de mem�ria de outro n�. Assim, lista aponta para o pr�ximo n� (que cont�m um valor)
        				// e um proximo endere�o de mem�ria, imprimindo sucessivamente os n�s at� NULL.
        break;
      case 7:
        printf("Valor: ");
        scanf("%d", &valor);
        no = buscar(&lista, valor);
        if(no) // recebe o n� atribuido no fim da fun��o Buscar
          printf("Elemento: %d", no->valor); // imprime apenas o valor  
        else // n�o n�o houver n�, se for NULL
          printf("Elemento n�o encontrado.\n"); //fim
        break;
      default:
        if(opcao != 0)
          printf("Op��o inv�lida.\n");
    }
  }while(opcao != 0);
  return 0;
}
