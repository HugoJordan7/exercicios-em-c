/* 1. Crie uma fun��o que receba um valor inteiro e verifique se o valor � par. A fun��o retorna 1 se o
n�mero for par e 0 se for �mpar. Teste a l�gica da fun��o no programa principal.*/
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


