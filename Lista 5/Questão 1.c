/* 1. Utilizando ponteiros, fa�a um programa que leia 2 valores inteiros e chame uma fun��o que receba
estas 2 vari�veis e troque o seu conte�do, ou seja, esta fun��o � chamada passando duas vari�veis A
e B por exemplo e, ap�s a execu��o da fun��o, A conter� o valor de B e B ter� o valor de A.*/

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


