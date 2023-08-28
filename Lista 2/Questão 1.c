/* 1. Crie uma função que receba um valor inteiro e verifique se o valor é par. A função retorna 1 se o
número for par e 0 se for ímpar. Teste a lógica da função no programa principal.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int parOuImpar(int num){
    if (num % 2 == 0){
        return 1;
    }
    else if (num % 2 != 0){
        return 0;
    }
}

int main()
{
    int numero, resultado;
    printf("1 - par e 0 - impar \n");
    printf("Informe o numero inteiro: \n");
    scanf("%d",&numero);
    resultado = parOuImpar(numero);
    printf("%d",resultado);

    return 0;
}


