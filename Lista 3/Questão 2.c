#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float media(float nota1,float nota2,float nota3,char letra){
    float mediaAritmetica;
    float mediaPonderada;
    if (letra == 'A' || letra == 'a'){
        mediaAritmetica = (nota1 + nota2 + nota3) / 3;
        return mediaAritmetica;
    }
    else if(letra == 'P' || letra == 'p'){
        mediaPonderada = ((nota1*5) + (nota2*3) + (nota3*2)) / 10;
        return mediaPonderada;
    }
}

int main()
{
    float n1,n2,n3, resultado;
    char l;
    printf("Informe 3 notas, em seguida informe a letra 'A' para calcular a media aritmetica ou 'P' para calcular a media ponderada com os pesos 5, 3 e 2 respectivamente. \n");
    printf("Informe a letra: \n");
    scanf("%c",&l);
    printf("Informe a primeira nota: \n");
    scanf("%f",&n1);
    printf("Informe a segunda nota: \n");
    scanf("%f",&n2);
    printf("Informe a terceira nota: \n");
    scanf("%f",&n3);
    resultado = media(n1,n2,n3,l);
    printf("A media foi: %.2f",resultado);
    return 0;
}


