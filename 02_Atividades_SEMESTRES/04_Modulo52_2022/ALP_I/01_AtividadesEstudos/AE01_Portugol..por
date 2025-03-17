programa
{
	inclua biblioteca Util --> u
	funcao inicio()
	{

	real litros=0.0, leitura=0.0, superior_leitura=0.0, consumo=0.0
	inteiro n=0, apartamento=0, superior_leitura_apartamento=0

		escreva("Digite a quantidade de apartamentos: ")
		leia(n)
	
		para (inteiro i=0; i<n; i++){
			escreva("Digite o número do seu apartamento:")
			leia(apartamento)	
			escreva("Digite a leitura atual consumida em litros pelo seu apartamento: ")
			leia(leitura)
	
				se (leitura>superior_leitura) {
					superior_leitura=leitura
					superior_leitura_apartamento=apartamento					
				}
	}
	litros=superior_leitura
	consumo=litros/1000
	escreva("O maior consumo em métros cubicos de ", consumo, " foi do apartameto: ", superior_leitura_apartamento)

	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 737; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */