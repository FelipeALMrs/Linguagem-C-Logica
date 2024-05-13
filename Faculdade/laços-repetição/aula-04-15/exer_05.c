#include <stdio.h>
int main()
{
    int num1 = 0, num2 = 0, soma, sim_nao=1;
    while(sim_nao == 1)
    {
        printf("Informe um numero:");
        scanf("%d", &num1);
        printf("Informe um numero:");
        scanf("%d", &num2);
        soma = num1 + num2;
        printf("A soma dos dois valores e:%d\n", soma);
        printf("Deseja realizar a soma novamente, se sim, 1 para sim e 2 para nao");
        scanf("%d", &sim_nao);
    }
    printf("A operacao foi finalizada");
    return 0;
}