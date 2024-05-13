#include <stdio.h>
int main (){
    int num1 = 0, soma_total=0;

    do
    {
        printf("Informe um numero igual a 0:");
        scanf("%d", &num1);
        soma_total += num1; 

    } while (num1 != 0);
    
    if (soma_total > 0)
    {
        printf("A soma dos numero informado e: %d" , soma_total);
    }
    else{
        printf("Nao foram digitados numeros para somar");
    }

    return 0;
}