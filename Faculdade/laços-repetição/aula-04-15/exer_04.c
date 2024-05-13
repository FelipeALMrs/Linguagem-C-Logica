#include <stdio.h>
int main (){
    int num_usuario=0, i=0;
    printf("Informe um numero:");
    scanf("%d", &num_usuario);

    do{
       printf("%d ", i);
       i+=3;
    } while (i <= num_usuario);
    return 0;
}