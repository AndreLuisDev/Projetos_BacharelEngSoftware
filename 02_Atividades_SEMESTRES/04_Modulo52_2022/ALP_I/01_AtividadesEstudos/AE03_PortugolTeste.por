programa
{
	
	funcao inicio()
	{
    inteiro totalGados, numGado=0, gadoNumPar, gadoNumImpar, cont1=0, cont2=0
    inteiro pasto1[21], pasto2[21]


    Escreva("Informe a quantidade de gados da fazenda: ")
    Leia(totalGados)
    Escreva("Informe o número do gado: ")
    Leia(numGado)
    se (numGado % 2 = 0) {
        para(cont1=0;cont1<22;cont1++){
                gadoNumPar <- numGado
                pasto1[cont1] <- gadoNumPar
        senao
            para (cont2=0;cont2<22;cont2++){
                gadoNumImpar <- numGado
                pasto2[cont2] <- gadoNumImpar
            }
        }
    Escreval("O total de gados da fazenda é", totalGados)
    (cont1=0;cont1<22;cont1++){        
        Escreval("Os números dos gados do Pasto 1 são: ", pasto1[cont1])
    }
    para (cont2=0;cont2<22;cont2++){
        Escreval("Os números dos gados do Pasto 2 são: ", pasto2[cont2])
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 70; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */