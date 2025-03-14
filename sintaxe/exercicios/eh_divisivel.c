#include <stdio.h>

int main()
{
    int valor_1;
    int valor_2;

    printf("Digite o primeiro numero: ");
    scanf("%i", &valor_1);

    printf("Digite o segundo numero: ");
    scanf("%i", &valor_2);

    if (valor_2 == 0){
        printf("Divisao por 0 nao permitida ");
    } else {
        if ( valor_1 % valor_2 == 0) {
            printf("%i eh divisivel por %i.", valor_1, valor_2);
        } else {
            printf("%i nao eh divisivel por %i.", valor_1, valor_2);
        }      
    }

    return 0;
}