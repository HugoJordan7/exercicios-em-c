/* 1. Utilizando ponteiros, faça um programa que leia 2 valores inteiros e chame uma função que receba
estas 2 variáveis e troque o seu conteúdo, ou seja, esta função é chamada passando duas variáveis A
e B por exemplo e, após a execução da função, A conterá o valor de B e B terá o valor de A.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void troca(int *v1,int *v2){
    int aux = *v2;
    *v2 = *v1;
    *v1 = aux;
}

int main()
{
    int valor1,valor2;
    
    printf("Informe o primeiro valor: ");
    scanf("%d",&valor1);
    printf("Informe o segundo valor: ");
    scanf("%d",&valor2);
    troca(&valor1,&valor2);
    
    printf("Valores depois da troca: valor1 = %d e valor2 = %d",valor1,valor2);

    return 0;
}


