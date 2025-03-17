/*	 ATIVIDADE MAPA
Acadêmico: André Luis de Souza Lima
R.A. 21150930-5
Curso: ENGENHARIA DE SOFTWARE
Disciplina: ALGORITMOS E LÓGICA DE PROGRAMAÇÃO II - 52/2022
Valor da atividade: 3,50
Prazo: 02/05/2022 a 08/07/2022 23:59 (horário de Brasília) */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct paciente{
	int codigo;
	char nome[50];
	char cpf[20];
	char vacina[20];
	char data[20];
	char lote[50];
};
//efetuar cadastro de vacina e com seus respectivos dados
struct paciente cadastrarVacina(){
	
	struct paciente vac;
		
	printf("Cadastrando dados vacinais... \n\n");
	printf("Digite o código do paciente:\n");
	fflush(stdin);
	scanf("%d", &vac.codigo);
	printf("Digite o nome do paciente:\n");
	fflush(stdin);
	gets(vac.nome);
	printf("Digite o CPF do paciente no formato xxx.xxx.xxx-xx\n");
	fflush(stdin);
	scanf("%s", &vac.cpf);
	printf("Digite o nome da vacina que o paciente recebeu:\n");
	fflush(stdin);
	gets(vac.vacina);
	printf("Digite o data da vacinação no formato xx/xx/xxx:\n");
	fflush(stdin);
	gets(vac.data);
	printf("Digite o lote vacina:\n");
	fflush(stdin);
	gets(vac.lote);
		
	return vac;
};	
// printar tela com relatório de dados de cadastro vacinal

void listarAplicacoesVacinais(struct paciente vacinas[999], int qdtCadastro){
	int i;
	for(i = 0; i < qdtCadastro; i++){
		printf("===================================\n\n");
		printf("CÓDIGO: %d\n", vacinas[i].codigo);
		printf("NOME: %s\n", vacinas[i].nome);
		printf("CPF: %s\n", vacinas[i].cpf);
		printf("VACINA: %s\n", vacinas[i].vacina);
		printf("DATA: %s\n", vacinas[i].data);
		printf("LOTE: %s\n", vacinas[i].lote);
		printf("===================================\n\n");
	}	
};

int buscarCPF (struct paciente *cadastroVacina, int P, char* elem){
	int i = 0, posicao;
	for(i = 0; i < P; i++){
		if(strcmp(elem,cadastroVacina[i].cpf)==0){
			printf("\nCPF encontrado!\n");
			posicao = i;
			printf("CÓDIGO: %d\n",cadastroVacina[i].codigo);
			printf("NOME: %s\n", cadastroVacina[i].nome);
			printf("CPF: %s\n", cadastroVacina[i].cpf);
			printf("VACINA: %s\n", cadastroVacina[i].vacina);
			printf("DATA: %s\n", cadastroVacina[i].data);
			printf("LOTE: %s\n", cadastroVacina[i].lote);		
		}
		else{
			posicao = -1;
			printf("\nCPF não encontrado!\nBusca finalizada!\n");
		};
	};
};

int main() {
	setlocale(LC_ALL, "Portuguese");
	printf("\nCONTROLE DE VACINAÇÃO - ANO 2022 - COVID19\n\n");
	
	struct paciente cadastroVacina[99];
	char busca[20];	
	int opcao = 0, contVacina, procura;
		
	do{
		printf("\nESCOLHA UMA DAS OPÇÕES:\n\n");
		printf("[1] -> CADASTRAR VACINA\n[2] -> LISTAR APLICAÇÕES VACINAIS\n[3] -> CONSULTAR VACINAÇÃO POR CPF\n[4] -> SAIR\n\n");
		scanf("%d", &opcao);
		
		switch(opcao){
			case 1 :
				system("cls");
				cadastroVacina[contVacina] = cadastrarVacina();
				contVacina++;		
				break;			
			case 2 :
				system("cls");
				printf("Listando vacinações... \n\n");
				listarAplicacoesVacinais(cadastroVacina, contVacina);
				printf("LISTAGEM FINALIZADA!\n\n");
				break;			
			case 3 :
				system("cls");
				printf("Digite um CPF que deseja encontrar no formato 000.000.000-00\n");
				fflush(stdin);
				scanf("%s",&busca);
				buscarCPF(cadastroVacina, contVacina, busca);		
				break;		
			case 4 :
				system("cls");
				printf("Saindo do programa...\n");
				break;							
			default :
				system("cls");
				printf("Opção Inválida\n");
				break;
			}
		}
		while(opcao != 4);
	return 0;
}
