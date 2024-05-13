#include <stdio.h>
int main (){
    int contador,soma = 0;
    for (contador = 1; contador <= 50; contador+=2){
        printf("%d ", contador);
        soma+= contador;
    }
    printf("\nO resultado das somas dos numero primos entre 1 - 50 e: %d", soma);
    return 0;
}