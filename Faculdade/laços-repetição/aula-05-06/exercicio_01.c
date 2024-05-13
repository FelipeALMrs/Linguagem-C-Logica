#include <stdio.h>
int main()
{
    int idade = 0, n_pessoa = 0, soma_idade = 0, maior_idade = 0, menor_idade = 0;
    float media_idade = 0;
    do
    {
        printf("Informe a idade da pessoa. Para encerrar o programa basta inserir 0:");
        scanf("%d", &idade);
        if (n_pessoa == 1)
        {
            menor_idade = idade;
        }
        if (idade > maior_idade)
        {
            maior_idade = idade;
        }
        if (idade < menor_idade && idade !=0)
        {
            menor_idade = idade;
        }

        n_pessoa++;
        soma_idade += idade;
    } while (idade != 0);
    n_pessoa--;
    media_idade = soma_idade / n_pessoa;

    printf("A quantidade de idades informadas foi: %d\nA idade medio do grupo: %.2f\nA maior idade e: %d\nA menor idade e: %d", n_pessoa, media_idade, maior_idade, menor_idade);

    return 0;
}