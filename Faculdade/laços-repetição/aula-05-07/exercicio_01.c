#include <stdio.h>
int main (){
    int contador;

    for (contador = 0; contador < 16; contador++){
        printf("%d ", contador);
    }

    printf("O valor do contador apos o laco %d", contador);

    return 0;
}