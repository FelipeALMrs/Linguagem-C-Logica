#include <stdio.h>
int main (){

    int num = 0, num_anterior = 0, resultado = 0,num_atual = 0, i;
    printf("Informe ate aonde quer que a serie de fibonacci termine.");
    scanf("%d", &num);
    for(i= 0; i < num; i++){

        if (i == 1)
        {
            num_atual++;
        }
        num_anterior = num_atual;
        num_atual = resultado;
        resultado = num_anterior + num_atual;

        printf("%d ", resultado);
    }

    return 0;
}