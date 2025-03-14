#include <stdio.h>

int main()
{
    int numero;
    printf("Escolha 0 para verdadeiro ou 1 para falso: \n");
    scanf("%i", &numero);

    // Estrutura condicional switch case
    switch (numero) {
        case 0:
            printf("Você escolheu verdadeiro \n");
            break;
        case 1:
            printf("Você escolheu falso \n");
            break;
        default:
            printf("Opção inválida \n");
            break;    
    }

    return 0;
}