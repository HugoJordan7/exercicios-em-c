/* 4. Escreva um programa que armazene os dados relacionados a um filme (nome, autor, ano, preço) em
uma estrutura de dados do tipo struct. Crie rotinas para ler e para imprimir os dados desse tipo de
registro. Crie uma rotina main para ler e imprimir os dados de 3 diferentes filmes.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct f{
    char nome[50];
    char autor[50];
    int ano;
    float preco;
};

struct f lerFilmes(){
    struct f filme;
    printf("Informe o nome do filme: \n");
    scanf("%s",&filme.nome);
    
    printf("Informe o autor do filme: \n");
    scanf("%s",&filme.autor);
    
    printf("Informe o ano de lancamento do filme: \n");
    scanf("%d",&filme.ano);
    
    printf("Informe o preco do filme: \n");
    scanf("%f",&filme.preco);
    
    return filme;
}

void imprimir(struct f resultado){
    printf("Nome do filme: %s\n",resultado.nome);
    printf("Autor do filme: %s\n",resultado.autor);        
    printf("Ano do filme: %d\n",resultado.ano);
    printf("Preco do filme: %f\n",resultado.preco);        
}

int main()
{
    int tam = 1;
    struct f filme1;
    struct f filme2;
    struct f filme3;
    printf("Informe os dados de 3 filmes diferentes \n");
    
    printf("- Primeiro filme - \n");
    filme1 = lerFilmes();
    printf("- Segundo filme - \n");
    filme2 = lerFilmes();
    printf("- Terceiro filme - \n");
    filme3 = lerFilmes();
    
    printf("- Primeiro filme - \n");
    imprimir(filme1);
    printf("\n");
    printf("- Segundo filme - \n");
    imprimir(filme2);
    printf("\n");
    printf("- Terceiro filme - \n");
    imprimir(filme3);

}


