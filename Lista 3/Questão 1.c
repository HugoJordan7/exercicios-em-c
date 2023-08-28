/* 1. Construa um programa que permita ao usuário gravar 10 palavras em um arquivo e, em seguida,
efetue a leitura do arquivo.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palavras[20];
    int i;
    FILE *arq;
    arq = fopen("Arquivo.txt","w");
    if (arq == NULL){
        printf("Erro ao abrir o arquivo!\n");
    } else{
        printf("Informe 10 palavras\n");
        for (i = 0; i<10; i++){
            printf("Informe a palavra %d: \n",i+1);
            fgets(palavras,20,stdin);
            fprintf(arq, "%s", palavras);
        }
        
    }
    fclose(arq);
    
    arq = fopen("Arquivo.txt","r");
    if (arq == NULL){
        printf("Erro ao abrir o arquivo!\n");
    } else{
        printf("Palavras encontradas no arquivo: \n");
        while(fgets(palavras,20,arq) != NULL){
            printf("%s",palavras);
        }
        
    }
    fclose(arq);

    return 0;
}


