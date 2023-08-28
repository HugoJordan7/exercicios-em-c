#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef _WIN32 //condicao que verifica se o sistema eh windows
#define CLEAR_SCREEN "cls"
#else //se nao for entao:
#define CLEAR_SCREEN "clear" //system(clear) ->  eh utilizados em sistemas baseados em UNIX como o linux
#endif //fim da condicao

#define tam 100

struct aluno {
    char nome[40];
    char matricula[40];
    char ano[40];
};

struct filaAlunos {
    struct aluno dados[tam];
    int inicio;
    int fim;
};

struct filaAlunos fila;
int quant = 0;
int controle = 0;

void enfileirar();
void desenfileirar();
void imprimirFila();
int pausarTela();

int main()
{
    printf("- Fila da merenda -\n\nInforme a quantidade maxima de alunos para a fila do lanche do dia: ");
    scanf("%d",&quant);
    system(CLEAR_SCREEN);

    do {
        printf("- Fila da merenda -\nDigite 0 - Para parar o programa\nDigite 1 - Para adicionar um aluno na fila\nDigite 2 - Para retirar um aluno da fila\nDigite 3 - Para exibir o conteudo da fila\n\n");
        printf("Informe o comando: ");
        scanf("%d", &controle);
        printf("\n");
        
        switch (controle) {
            case 0:
                break;
            case 1:
                enfileirar();
                break;
            case 2:
                desenfileirar();
                break;
            case 3:
                imprimirFila();
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

void enfileirar()
{
    getchar();
    if (fila.fim == quant) {
        printf("A fila está cheia!\n");
        pausarTela();
    } else {
        printf("Informe o nome do aluno: ");
        fgets(fila.dados[fila.fim].nome, 40, stdin);
        printf("Informe a matricula do aluno: ");
        fgets(fila.dados[fila.fim].matricula, 40, stdin);
        printf("Informe o ano escolar do aluno: ");
        fgets(fila.dados[fila.fim].ano, 40, stdin);
        fila.fim++;
    } 
}

void desenfileirar()
{
    getchar();
    if (fila.fim == 0) {
        printf("A fila esta vazia!\n");
        pausarTela();
    } else {
        fila.fim--;
        //Movendo o conteudo do fim para o indice anterior em todos os elementos da fila
        int i;
        for (i = 0; i < fila.fim; i++){
            strcpy(fila.dados[i].nome, fila.dados[i+1].nome);
            strcpy(fila.dados[i].matricula, fila.dados[i+1].matricula);
            strcpy(fila.dados[i].ano, fila.dados[i+1].ano);
        }
        //Limpando a antiga posicao do ultimo
        strcpy(fila.dados[fila.fim].nome, "");
        strcpy(fila.dados[fila.fim].matricula, "");
        strcpy(fila.dados[fila.fim].ano, "");
    }
}

void imprimirFila()
{
    getchar();
    if (fila.fim == 0) {
        printf("A fila esta vazia!\n");
    } else {
        int i;
        printf("Ordem dos alunos na fila: \n\n");
        for (i = 0; i < fila.fim; i++) {
            printf("- %d aluno -\n", i + 1);
            printf("Nome: %s", fila.dados[i].nome);
            printf("Matricula: %s", fila.dados[i].matricula);
            printf("Ano: %s\n\n", fila.dados[i].ano);
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





