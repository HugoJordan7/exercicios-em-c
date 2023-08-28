//Segunda Questão
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int vetor[10];
    int i,j,crescente,decrescente;
    printf("Informe os dez numeros de um vetor \n");
    for (i=0;i<10;i++){
        printf("Informe o %d numero do vetor: \n",i+1);
        scanf("%d",&vetor[i]);
    }
    
    crescente = vetor[0];
    for (i = 0; i <9;i++){
        for (j= i + 1; j < 10;j++){
            if (vetor[j] < vetor[i]){
                crescente = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = crescente;
                
            }
        }
    }

    printf("Vetor em ordem crescente: \n");
    for (i=0;i<10;i++){
        printf("%d ",vetor[i]);
    }

    printf("\n\nVetor em ordem decrescente: \n");
    for (i=9;i>=0;i--){
        printf("%d ",vetor[i]);
    }

    return 0;
}

