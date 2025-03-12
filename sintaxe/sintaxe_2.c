#include <stdio.h> 

int main() 
{
    int base; // Declaro somente as variáveis sem atribuir a elas nenhum valor
    int altura;
    int area;

    printf("Digite o valor da base: ");
    scanf("%i", &base); //Recebo um valor do tipo inteiro e o armazeno na variável "base"

    printf("Digite o valor da altura: ");
    scanf("%i", &altura); //Idem

    area = base * altura; //Calculo a área do retângulo

    printf("A area do retangulo eh %i\n", area);

    return 0;
}