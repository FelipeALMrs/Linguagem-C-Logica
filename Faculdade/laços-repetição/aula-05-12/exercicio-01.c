#include <stdio.h>
int main (){
    float media_idade = 0;
    int idade = 0, i, num_idades = 0;

    printf("Informe quantas idades voce ira digitar:");
    scanf("%d", &num_idades);
    printf("Informe um idade:");
    for(i = 0; i < num_idades; i++){
        scanf("%d", &idade);
        media_idade+=idade;
    }
    media_idade/= num_idades;
    printf("A media das idades e: %.2f", media_idade);
    return 0;
}