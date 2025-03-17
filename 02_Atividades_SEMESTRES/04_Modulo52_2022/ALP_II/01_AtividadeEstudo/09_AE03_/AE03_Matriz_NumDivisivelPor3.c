#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	
	int matriz[5][5] = {{15,9,23,43,49},
                        {3,36,55,53,18},
                        {12,42,51,57,34},
                        {6,32,28,25,62},
                        {72,91,81,16,41}};                        
    int i, j, elementosMatrizDiv3(int matriz[5][5]);      
    for(i=0;i<5;i++){
    	for(j=0;j<5;j++){
    		if(matriz[i][j] % 3 == 0)
    			printf("Elemento divisivel por 3 encontrado linha %d, coluna %d, numero: %d;\n", i+1, j+1, matriz[i][j]);
		}
	}	
	return 0;	
}
