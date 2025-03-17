#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Criando funções para a utilização em SUB-ROTINAS

//Pessoas que comem em média 100g de carne e bebem em média 200ml refri

int lerMenor10Anos(){
	int qtdMenor10Anos;
	printf("Digite a quantidade de convidados menores de 10 anos que irao ao churras\n");
	scanf("%d", &qtdMenor10Anos);
	// depois que fizer a leitura, retornar a informação
	// não é prinft, mas sim retornar o resultado da função
	return qtdMenor10Anos; 
	}
	
// Pessoas que comem em média 300g de carne e bebem em média 200ml refri
	
int ler10a17Anos(){
	int qtd10a17Anos;
	printf("Digite a quantidade de convidados com 10 a 17 anos que irao ao churras\n");
	scanf("%d", &qtd10a17Anos);
	return qtd10a17Anos;
}

//Pessoas que comem em média 300g de carne e bebem em média 500ml cerveja

int lerMaior18Anos(){
	int qtdMaior18Anos;
	printf("Digite a quantidade de pessoas com mais de 18 anos que irao ao churras\n");
	scanf("%d", &qtdMaior18Anos);
	return qtdMaior18Anos;
}

float lerPercentualMargem(){
	float percentualMargem;
	printf("Qual percentual de sobra voce deseja adicionar aos cauculos?\n");
	scanf("%f", &percentualMargem);
	return percentualMargem;
}

float calcularCarne(int totalAte10Anos, int totalMaisDe10Anos, float percentualMargem){
	float totalCarne = 0.0;
	totalCarne = totalCarne + (totalAte10Anos * 100);
	totalCarne = totalCarne + (totalMaisDe10Anos * 300);
	totalCarne = totalCarne + (1 + (percentualMargem / 100));
	totalCarne = totalCarne / 1000;
	return totalCarne;
}

float calcularCerveja(int totalMaior18, float percentualMargem){
	float totalCerveja = 0.0;
	totalCerveja = totalCerveja + (totalMaior18 * 500);
	totalCerveja = totalCerveja + (1+(percentualMargem/100));
	totalCerveja = totalCerveja / 600;
	return totalCerveja;
}

float calcularRefrigerante(int totalMenor18, float percentualMargem){
		float totalRefrigerante = 0.0;
		totalRefrigerante = totalRefrigerante + (totalMenor18 * 200);
		totalRefrigerante = totalRefrigerante * (1+(percentualMargem)/100);
		totalRefrigerante = totalRefrigerante / 350;
		return totalRefrigerante;
}

float calcularFarofa(int totalPessoa, float percentualMargem){
	float totalFarofa = 0.0;
	totalFarofa = totalFarofa + (totalPessoa * 50);
	totalFarofa = totalFarofa * (1+(percentualMargem/100));
	totalFarofa = totalFarofa / 100;
	return totalFarofa;
}

int main() {
	
	printf("Bem vindo a Calculadora do CHURRAS\n");
	int totMenor10 = lerMenor10Anos();
	int tot10a17 = ler10a17Anos();
	int tot18Anos = lerMaior18Anos();
	float margem = lerPercentualMargem();
	
	float resultadoCarne = calcularCarne(totMenor10, (tot10a17+tot18Anos), margem);
	printf("Total de carnce necessaria em KG e %f\n", resultadoCarne);
	float resultadoCerveja = calcularCerveja(tot18Anos, margem);
	printf("Total de cerveja em garrafas de 600ml e %f\n", resultadoCerveja);
	float resultadoRefrigerante = calcularRefrigerante((totMenor10+tot10a17), margem);
	printf("Total de refrigerante em lata de 350ml e %f\n", resultadoRefrigerante);
	float resultadoFarofa = calcularFarofa((totMenor10+tot10a17+tot18Anos), margem);
	printf("Total de pacotes de farofa necessario e %f\n", resultadoFarofa);

	
	return 0;
}
