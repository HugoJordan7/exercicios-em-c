#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int tam = 2;
    int matriz1[tam][tam];
    int matriz2[tam][tam];
    
    int matrizSoma[tam][tam];
    int matrizDiferenca[tam][tam];
    
    printf("Preencha a primeira matriz de ordem 2 com numeros inteiros: \n");
    
    int i,j;
    for (i = 0; i < tam; i++){
        for (j = 0; j < tam; j++){
            printf("matriz[%d][%d] = ",i+1,j+1);
            scanf("%d",&matriz1[i][j]);
        }
    }
    printf("Preencha a segunda matriz de ordem 2 com numeros inteiros: \n");
    
    for (i = 0; i < tam; i++){
        for (j = 0; j < tam; j++){
            printf("matriz[%d][%d] = ",i+1,j+1);
            scanf("%d",&matriz2[i][j]);
        }
    }
    
    printf("Soma entre as matrizes: \n");
    for (i = 0; i < tam; i++){
        for (j = 0; j < tam; j++){
            printf("%d ",matriz1[i][j] + matriz2[i][j]);
        }
        printf("\n");
    }
    
    printf("Diferenca entre as matrizes: \n");
    for (i = 0; i < tam; i++){
        for (j = 0; j < tam; j++){
            printf("%d ",matriz1[i][j] - matriz2[i][j]);
        }
        printf("\n");
    }

    return 0;
}


