#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Quando o programa é iniciado com a função void, e mesmo possui retorno vazio
void main(){
	
	char pergunta[300];
	printf("Digite a pergunta da pesquisa\n");
	// gets - usado para fazer a leitura(captura) de uma string ou texto
	// o comando scanf "%s" pode dar algum erro na leitura
	gets(pergunta);
	
	// Após ser lido ler a pergunta, deve-se criar uma estrutura de MENU para fazer a leitura das opções possíveis
	
	int opcao = 0;
	double totalSim = 0, totalNao = 0, totalVotos = 0;
	
	double percentualSim = 0.0, percentualNao = 0.0;
	
	
	do{
		printf("Digite\n 1 - SIM\n 2 - NÃO\n 3 - ENCERRAR\n");
		scanf("%d", &opcao);
		
		switch (opcao){
			case 1 : {
				totalSim = totalSim + 1;
				totalVotos = totalVotos + 1;
				break;
			}
			case 2 : {
				totalNao = totalNao + 1;
				totalVotos = totalVotos + 1;
				break;
			}
			case 3 : {
				percentualSim = (totalSim * 100)/ totalVotos;
				percentualNao = (totalNao * 100)/ totalVotos;
				
				printf("Resultado da Pesquisa\n\n");
				printf("%s\n", pergunta);
				printf("SIM -> %.2f\n", percentualSim);
				printf("NÃO -> %.2f\n", percentualNao);
				break;
			}				
			default : {
				printf("Opção Inválida\n");
				break;
			}
		}
	}while(opcao != 3);
}
