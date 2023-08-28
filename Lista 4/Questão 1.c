/* 1. Crie um programa que controla um empilhamento de caixas em um supermercado. Cada caixa tem
algumas informações importantes: número de série, descrição do produto e fornecedor. Defina o
número máximo de caixas para o empilhamento. O programa tem três funções básicas: empilhar,
desempilhar e mostrar conteúdo da pilha.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef _WIN32 //condicao que verifica se o sistema eh windows
#define CLEAR_SCREEN "cls"
#else //se nao for entao:
#define CLEAR_SCREEN "clear" //system(clear) eh utilizados em sistemas baseados em UNIX como o linux
#endif //fecha a condicao

#define tam 3

struct caixas {
    char nSerie[40];
    char descricao[40];
    char fornecedor[40];
};

struct pilhaCaixas {
    struct caixas dados[tam];
    int inicio;
    int fim;
};

struct pilhaCaixas pilha;
int controle = 0;

void empilhar();
void desempilhar();
void imprimirPilha();
int pausarTela();

int main()
{

    do {
        printf("- Programa de empilhamento de caixas -\nDigite 0 - Para parar o programa\nDigite 1 - Para empilhar\nDigite 2 - Para desempilhar\nDigite 3 - Para exibir o conteudo da pilha\n\n");
        printf("Informe o comando: ");
        scanf("%d", &controle);
        printf("\n");
        
        switch (controle) {
            case 0:
                break;
            case 1:
                empilhar();
                break;
            case 2:
                desempilhar();
                break;
            case 3:
                imprimirPilha();
                break;
            default:
                printf("Comando invalido!\n\n");
                getchar();
                pausarTela();
                break;
        }
        system(CLEAR_SCREEN);
        
    } while (controle != 0);
    printf("- Programa encerrado -\n");
    return 0;
}

void empilhar()
{
    getchar();
    if (pilha.fim == tam) {
        printf("A pilha esta cheia!\n");
        pausarTela();
    } else {
        printf("Informe o numero de serie da caixa: ");
        fgets(pilha.dados[pilha.fim].nSerie, 40, stdin);
        printf("Informe a descricao do produto: ");
        fgets(pilha.dados[pilha.fim].descricao, 40, stdin);
        printf("Informe o nome do fornecedor: ");
        fgets(pilha.dados[pilha.fim].fornecedor, 40, stdin);
        pilha.fim++;
    }
    
}

void desempilhar()
{
    getchar();
    if (pilha.fim == 0) {
        printf("A pilha esta vazia!\n");
        pausarTela();
    } else {
        pilha.fim--;
        strcpy(pilha.dados[pilha.fim].nSerie, "");
        strcpy(pilha.dados[pilha.fim].descricao, "");
        strcpy(pilha.dados[pilha.fim].fornecedor, "");
    }
}

void imprimirPilha()
{
    getchar();
    if (pilha.fim == 0) {
        printf("A pilha esta vazia!\n");
    } else {
        int i;
        printf("Caixas empilhadas: \n\n");
        for (i = 0; i < pilha.fim; i++) {
            printf("- %d caixa -\n", i + 1);
            printf("Numero de serie: %s", pilha.dados[i].nSerie);
            printf("Descricao do produto: %s", pilha.dados[i].descricao);
            printf("Fornecedor: %s\n\n", pilha.dados[i].fornecedor);
        }
    }
    pausarTela();
}

int pausarTela(){
    if (strcmp(CLEAR_SCREEN,"cls") == 0){ //condicao para pausar a tela no windows
        system("pause");
        return 0;
    } else if (strcmp(CLEAR_SCREEN,"clear") == 0){ //em sistemas baseados em UNIX(ex: Linux)
        printf("Pressione Enter para continuar...");
        getchar();
    }
}





