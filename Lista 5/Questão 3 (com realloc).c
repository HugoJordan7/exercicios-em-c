/* 3. Utilizando alocação dinâmica de memória, escreva um programa que receba um vetor de n inteiros
(até que digite 0 - sair) e os endereços de duas variáveis inteiras, digamos min e max, e deposite
nessas variáveis o menor valor digitado e o maior.
Ex: 1 20 30 50
min = 1 e max = 50*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ler_vetor();
void imprimir_vetor();
void procurar_minEMax();

int *p,i = 0,min,max;

int main()
{
    ler_vetor();
    imprimir_vetor();
    procurar_minEMax();
    
}

void ler_vetor(){
    do{
    	p = (int*) realloc(p,(i+1)*sizeof(int));
        printf("Informe um numero inteiro para o vetor ou digite 0 para parar: ");
        scanf("%d",&p[i]);
        i++;
    } while(p[i] != 0);
}

void imprimir_vetor(){
    printf("\nVetor: ");
    int j;
    for (j = 0; j < i; j++){
        printf("%d ",&p[j]);
    }
}

void procurar_minEMax(){
    min = p[0];
    max = p[0];
    int j;
    for (j = 1; j < i; j++){
        if(p[j] > max){
            max = p[j];
        }
        else if(p[j] < min){
            min = p[j];
        }
    }
    printf("\nMaior valor: %d ",max);
    printf("\nMenor valor: %d ",min);

}

