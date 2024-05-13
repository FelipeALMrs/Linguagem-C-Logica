#include <stdio.h>
int main (){
    int condicao = 0;
    float notas=0, soma=0, media=0;

    printf("Digite tres notas:");
    while (condicao < 3)
    {
        scanf("%f", &notas);
        soma+=notas;
        condicao++;
    }
    media= soma / condicao;

    printf("A media e %.2f", media);
    return 0;
}