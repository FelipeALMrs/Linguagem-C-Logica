#include <stdio.h>
int main (){
    int tempo = 0;
    float massa_I = 0, massa_F= 0, tempo_h = 0, tempo_m = 0, tempo_s = 0;

    printf("Informe a massa do material radiotivo em grama:");
    scanf("%f", &massa_I);

    massa_F = massa_I;
    
    while (massa_F > 0.5){
        massa_F/= 2;
        tempo+= 50;
    }

    tempo_h = tempo / 3600;
    tempo %= 3600;

    tempo_m = tempo / 60;
    tempo %= 60;

    tempo_s = tempo;

    printf("A massa inicial foi %.2f\nA massa final foi %.2f\nTempo necessario para a massa ficar menor ou igual a 0,5 e %.0f:%.0f:%.0f", massa_I, massa_F, tempo_h, tempo_m, tempo_s);
    return 0;
}