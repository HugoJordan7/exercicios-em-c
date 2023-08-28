/* 3. Construa um programa que leia uma palavra e a escreva de trás para frente.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palavra[30];
    
    printf("Digite uma palavra: \n");
    scanf("%s",&palavra);

    printf("A palavra de tras para frente: \n");
    int i;
    for (i = strlen(palavra); i >= 0; i--){
        printf("%c",palavra[i]);
    }

    return 0;
}


