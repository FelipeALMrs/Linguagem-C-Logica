#include <stdio.h>
int main (){
    int num_usuario=0, i=0;
    printf("Informe um numero:");
    scanf("%d", &num_usuario);

    while ( i <= num_usuario)
    {
       printf("%d ", i);
       i+=2;
    }
    
    return 0;
}