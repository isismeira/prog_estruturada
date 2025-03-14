#include <stdio.h>

int main() 
{
    int num1 = 20;
    int num2 = 10;
    int subtracao;

    // Operador condicional "? :"

    num1 < num2 ? printf("O primeiro numero eh o menor \n") : printf("O segundo numero eh o menor \n");

    subtracao = (num1 < num2) ? -10 : 10;

    printf("%i - %i = %i", num1, num2, subtracao);
    return 0;
}    