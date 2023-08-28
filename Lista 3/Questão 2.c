/* 2. Faça um programa que crie uma lista de contatos de 10 pessoas. Os contatos devem ter nome, telefone, endereço, profissão, idade, sexo e data de nascimento. Em seguida crie um menu com opções
para gravar a lista em um arquivo e em seguida ler o arquivo.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct contato {
    char nome[30];
    char telefone[30];
    char endereco[30];
    char profissao[30];
    int idade;
    char sexo[30];
    char nascimento[30];
};

struct contato lista[10];

void gravar_noarquivo();

void ler_arquivo();

FILE *arq;

int main(){
    int comando;
    do{
    	printf("- Menu principal -\n1 - Gravar o contato de 10 pessoas em uma lista em um arquivo \n2 - Ler o arquivo \n3 - Parar o programa\n\n");
        printf("Informe um comando: ");
        scanf("%d",&comando);
        getchar();
        switch(comando){
            case 1:
                gravar_noarquivo();
            break;
            case 2:
                ler_arquivo();
            break;
            case 3:
                printf("Programa encerrado!\n");
            break;
            default:
                printf("Comando invalido!\n");
        }
       
    } while(comando != 3);
   

    return 0;
}


void gravar_noarquivo(){
    int i;
    arq = fopen("Arquivo.txt","w");
    if(arq == NULL){
        printf("Erro ao abrir o arquivo!\n");
    } else{
        printf("Informe os dados dos 10 contatos!\n\n");
        fprintf(arq,"Lista de contatos\n\n");
        for (i = 0; i<10;i++){
            printf("- Dados do %d contato -\n",i+1);
            fprintf(arq,"- %d contato -\n\n",i+1);
            
            printf("Nome: ");
            fgets(lista[i].nome,30,stdin);
            fprintf(arq,"Nome: %s",lista[i].nome);
            
            
            printf("Numero: ");
            fgets(lista[i].telefone,30,stdin);
            fprintf(arq,"Numero: %s",lista[i].telefone);
            
            printf("Endereco: ");
            fgets(lista[i].endereco,30,stdin);
            fprintf(arq,"Endereco: %s",lista[i].endereco);
            
            printf("Profissao: ");
            fgets(lista[i].profissao,30,stdin);
            fprintf(arq,"Profissao: %s",lista[i].profissao);
            
            printf("Idade: ");
            scanf("%d",&lista[i].idade);
            getchar();
            fprintf(arq,"Idade: %d\n",lista[i].idade);
            

            printf("Sexo: ");
            fgets(lista[i].sexo,30,stdin);
            fprintf(arq,"Sexo: %s",lista[i].sexo);
            
            printf("Data de nascimento(xx/xx/xxxx): ");
            fgets(lista[i].nascimento,30,stdin);
            fprintf(arq,"Data de nascimento: %s\n\n",lista[i].nascimento);
            printf("\n\n");
        }
    }
    fclose(arq);
}

void ler_arquivo(){
    char imprimir[30];
    arq = fopen("Arquivo.txt","r");
    if(arq == NULL){
        printf("Erro ao ler o arquivo!\n\n");
    } else{
        while(fgets(imprimir,30,arq) != NULL){
            printf("%s",imprimir);
        }
        fclose(arq);
    }

}








