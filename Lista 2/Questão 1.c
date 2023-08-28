#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int tam = 40;
    char palavras [tam];
    printf("Informe os 3 nomes: \n");
    fgets(palavras,tam,stdin);
    int quantA = 0, quantE = 0;
    int i;
    for (i=0;i<tam;i++){
        if (palavras [i] == 'A' || palavras[i] == 'a'){
            quantA++;
        }
        else if(palavras [i] == 'E' || palavras [i] == 'e'){
            quantE++;
        }
    }
    
    printf("Quantidade de A nos nomes: %d\n",quantA);
    printf("Quantidade de E nos nomes: %d\n",quantE);

    return 0;
}


