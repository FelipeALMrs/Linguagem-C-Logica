#include <stdio.h>
int main()
{

    int n_partida = 0, i, jogador1 = 0, jogador2 = 0, escolha1 = 0, escolha2 = 0, empate = 0;

    printf("Informe quantas partidas tera a disputa de pedra, papel e tesoura:");
    scanf("%d", &n_partida);

    for (i = 0; i < n_partida; i++)
    {

        printf("0 - Pedra, 1 - Papel, 3 - Tesoura\nJogador 1 informe valor:\nJogador 2 informe um valor:\n");
        scanf("%d%d", &escolha1, &escolha2);
        while (escolha1 < 0 || escolha1 > 2)
        {
            printf("Informe um valor valido para o jogador 1:");
            scanf("%d", &escolha1);
        }
        while (escolha2 < 0 || escolha2 > 2)
        {
            printf("Informe um valor valido para o jogador 2:");
            scanf("%d", &escolha2);
        }

        // pedra = 0, papel = 1, tesoura = 2
        if ((escolha1 == 1 && escolha2 == 0) || (escolha1 == 0 && escolha2 == 2) || (escolha1 == 2 && escolha2 == 1))
        {
            jogador1++;
        }
        else if ((escolha2 == 1 && escolha1 == 0) || (escolha2 == 0 && escolha1 == 2) || (escolha2 == 2 && escolha1 == 1))
        {
            jogador2++;
        }
        else
        {
            empate++;
        }
    }

    printf("O numero de rodadas ganhas do jogador 1 foi: %d\nO numero de rodadas ganhas pelo jogador 2 foi: %d\nO numero de empates foi: %d\n", jogador1, jogador2, empate);

    if (jogador1 > jogador2)
    {
        printf("Jogador 1 foi o vencedor");
    }
    else if (jogador2 > jogador1)
    {
        printf("Jogador 2 foi o vencedor");
    }
    else
    {
        printf("Houve empate");
    }

    return 0;
}