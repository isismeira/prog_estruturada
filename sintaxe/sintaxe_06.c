#include <stdio.h>

int main() 
{
    int idade;

    printf("Favor informar sua idade: \n");
    scanf("%i", &idade);

    // Estrutura condicional if else
    if (idade >= 18) {
        printf("Você é maior de idade\n");
    } else {
        printf("Você é menor de idade}\n");
    }

    // Utilizando else if
    if (idade <= 5) {
        printf("Você é um bebê");
    } else if (idade > 5 && idade <= 12){
        printf("Você é uma criança");
    } else if (idade > 12 && idade <= 18) {
        printf("Você é um adolescente");
    } else if (idade > 18 && idade <= 60) {
        printf("Você é um adulto");
    } else {
        printf("Você é um idoso");
    }

    return 0;
}