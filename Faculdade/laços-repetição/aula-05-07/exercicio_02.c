#include <stdio.h>
int main (){
    int n_aluno, contador;
    float media, notas, soma_notas = 0;
    printf("Informe quantos alunos se tem na sala");
    scanf("%d", &n_aluno);
    for(contador = 0;contador < n_aluno; contador++){
        printf("Informe a nota do aluno:");
        scanf("%f", &notas);
        soma_notas+= notas;
    }
    media = soma_notas / n_aluno;
    printf("A media dos aluno e %.2f", media);
    return 0;
}