#include <stdio.h>

int main()
{
    int contador;
    int numero = 1;

    // Estrutura de repetição for
    for (contador = 1; contador <= 10; contador++)
    {
        printf("Contando... %i\n", numero);
        numero++;
    }


    printf("Fim da contagem progressiva\n");
    printf("Inicio da contagem regressiva\n");

     // Estrutura de repetição while
    while (contador>=2)
    {
        numero--;
        printf("Contando... %i\n", numero);
        contador--;
    }

    return 0;
}