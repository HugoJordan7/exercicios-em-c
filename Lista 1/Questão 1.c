/*1. Preencher um vetor com 3 nomes e mostre 
quantas letras A e E tem nos 3 nomes.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int tam = 40;
    char palavras [3][tam];
    int i;
    for (i=0;i<3;i++){
    	printf("Informe o %d nome: ",i+1);
    	fgets(palavras[i],tam,stdin);
	}
    
    int quantA = 0, quantE = 0;
    int j;
    for (j=0;j<3;j++){
    	for (i=0;i<tam;i++){
	        if (palavras[j][i] == 'A' || palavras[j][i] == 'a'){
	            quantA++;
	        }
	        else if(palavras[j][i] == 'E' || palavras[j][i] == 'e'){
	            quantE++;
	        }
    	}
	}
    
    printf("Quantidade de A nos nomes: %d\n",quantA);
    printf("Quantidade de E nos nomes: %d\n",quantE);
    return 0;
}


