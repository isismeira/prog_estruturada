#include <stdio.h>

int main()
{
    int fatorial = 1;
    int numero;

    printf("Digite um número para calcular o fatorial: ");
    scanf("%i", &numero);

    while (numero > 0)
    {
        fatorial = fatorial * numero;
        numero--;
    }

    printf("O fatorial eh %i\n", fatorial);

    return 0;
}
