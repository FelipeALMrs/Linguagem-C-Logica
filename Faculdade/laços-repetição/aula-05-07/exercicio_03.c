#include <stdio.h>
int main (){
    int contador, impar;
    for(contador = 1;contador < 101;contador++){

        impar = contador % 2;
        if (impar != 0)
        {
            printf("%d ", contador);
        }
        
    }
    return 0;
}