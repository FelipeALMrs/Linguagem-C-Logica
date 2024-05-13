#include <stdio.h>
int main (){

    float num = 0;
    int i, dentro_intervalo = 0, fora_intervalo ;

    printf("Informe 10 numeros:"); 
    
    for(i = 0; i < 10; i ++){
        scanf("%f", &num);
        if (num >= 10 && num <= 20)
        {
            dentro_intervalo++;
        }
        else{
            fora_intervalo++;
        }
    }
    printf("A quantidade de numeros que nao esta dentro dos valores 10 - 20, sao: %d", fora_intervalo);
    return 0;
}