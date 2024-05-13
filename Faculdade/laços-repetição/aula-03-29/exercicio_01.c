#include <stdio.h>

int main() {
    int jair = 0, carlos = 0, neves = 0, escolha = 0, total_votos = 0;
    float nulo = 0.0, branco = 0.0;
    
    printf("1 - Jair Rodrigues\n2 - Carlos Luz\n3 - Neves Rocha\n4 - Nulo\n5 - Branco\n\nEscolha a opcao de acordo com o numero que prescede ela ou 6 para encerrar a votacao\n");
    do {
        scanf("%d", &escolha);

        switch (escolha) {
        case 1:
            jair++;
            total_votos++;
            break;
        case 2:
            carlos++;
            total_votos++;
            break;
        case 3:
            neves++;
            total_votos++;
            break;
        case 4:
            nulo++;
            total_votos++;
            break;
        case 5:
            branco++;
            total_votos++;
            break;
        case 6:
            break;
        default:
            printf("Voto invalido, informe um voto valido, sendo:\n1 - Jair Rodrigues\n2 - Carlos Luz\n3 - Neves Rocha\n4 - Nulo\n5 - Branco\n6 - Encerrar Votacao\n");
            break;
        }
    } while (escolha != 6);

    nulo = 100 * (nulo / total_votos);
    branco = 100 * (branco / total_votos);

    printf("\nJair Rodrigues: %d votos\nCarlos Luz: %d votos\nNeves Rocha: %d votos\nPorcentagem de votos Brancos: %.2f%%\nPorcentagem de votos Nulos: %.2f%% \n", jair, carlos, neves, branco, nulo);

    if (jair > carlos && jair > neves) {
        printf("O vencedor foi o Jair Rodrigues");
    }
    else if (carlos > jair && carlos > neves) {
        printf("O vencedor foi o Carlos Luz");
    }
    else if (neves > carlos && neves > jair) {
        printf("O vencedor o Neves Rocha");
    }
    else {
        printf("Empate, nao houve vencedor");
    }

    return 0;
}