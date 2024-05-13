#include <stdio.h>
int main (){
    int num1 = 1;

    printf("Digite um numero entre 12 a 20:");
    scanf("%d", &num1);

    while (num1 < 12 || num1 >20)
    {
        printf("Entrada invalida\n");
        printf("Digite um numero entre 12 e 20:");
        scanf("%d", &num1);
    }

    printf("Numero informado foi: %d", num1);
    return 0;
}