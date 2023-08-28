/* 4. Crie um programa capaz de criar a transposta de uma matriz. A matriz deve ser lida de
teclado.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int lin,col;
    printf("Informe o tamanho de linhas e colunas da matriz (separe com um espaco): \n");
    scanf("%d%d",&lin,&col);
    int matriz[lin][col];
    printf("Agora preencha a matriz com numeros inteiros: \n");
    
    int i,j;
    for (i = 0; i < lin; i++){
        for (j = 0; j < col; j++){
            printf("matriz[%d][%d] = \n",i+1,j+1);
            scanf("%d",&matriz[i][j]);
        }
    }
    printf("Matriz original: \n");
    for (i = 0; i < lin; i++){
        for (j = 0; j < col; j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    
    int matrizTp[col][lin];
    
    for (i = 0; i < lin; i++){
        for (j = 0; j < col; j++){
            matrizTp[j][i] = matriz[i][j];
        }
        printf("\n");
    }
    
    printf("Matriz transposta: \n");
    for (i = 0; i < col; i++){
        for (j = 0; j < lin; j++){
            printf("%d ",matrizTp[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

