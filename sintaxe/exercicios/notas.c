#include <stdio.h>

int main()
{
    float notas[5];
    float media = 0.0;

    for (int i = 0; i < 5; ++i) {
        float nota;
        printf("Digite aqui uma nota: ");
        scanf("%f", &nota);
        notas[i] = nota;
    }

    for (int i = 0; i < 5; ++i) {
        media = media + notas[i];
    }

    printf("A media do aluno eh %f ", (media/5));

    return 0;
}