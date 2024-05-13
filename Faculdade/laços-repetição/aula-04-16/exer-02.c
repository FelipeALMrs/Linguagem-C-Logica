#include <stdio.h>
int main (){
    int i=0;

    do
    {
        printf("Informe um numero:\n");
        scanf("%d", &i);
    } while (i > 1);
    printf("NUmero valido");
    return 0;
}