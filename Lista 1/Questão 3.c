/* 3. Armazenar em Vetores notas de 5 alunos. Calcular a média de cada aluno e imprimir
aprovado se a média for maior ou igual a 7 e reprovado se média for menor que 7.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    float notas[5][2];
    int i;
    float medias[5];
    for (i = 0; i < 5; i++){
        printf("Informe as duas notas do %d aluno (separe por espaco): \n",i+1);
        scanf("%f%f",&notas[i][0],&notas[i][1]);
    }
    for (i = 0; i < 5; i++){
        medias[i] = (notas[i][0] + notas[i][1])/2;
        printf("Media do %d aluno: %.2f\n",i+1,medias[i]);
        if (medias[i] >= 7){
            printf("O %d aluno foi aprovado!\n\n",i+1);
        }
        else {
            printf("O %d aluno foi reprovado!\n\n",i+1);
        }
    }

    return 0;
}


