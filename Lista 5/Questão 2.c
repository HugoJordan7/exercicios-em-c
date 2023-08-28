/* 2. Crie um programa que contenha um vetor contendo 5 elementos inteiros. Leia esse vetor do teclado
e imprima o endereço das posições contendo valores pares.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int vetor[5];
    printf("Informe os 5 numeros inteiros do vetor: \n");
    int i;
    for (i = 0; i < 5; i++){
        printf("%d numero:",i+1);
        scanf("%d",&vetor[i]);
    }
    
    printf("\n\nEndereco dos valores pares do vetor: \n");
    for (i = 0; i < 5; i++){
        if (vetor[i] % 2 == 0){
            printf("vetor[n%d]: %p\n",i+1, vetor+i);
        }
    }
    
    return 0;
}

