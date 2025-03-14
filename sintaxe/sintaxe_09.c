#include <stdio.h>
#include <stdbool.h> // Biblioteca que permite lidar com variáveis booleanas

int main()
{
    // Tipos de variáveis (Revisão)

    // Char - Para caractere
    char variavelChar = 'a';    
    printf("%c\n", variavelChar);
    scanf("%c", &variavelChar);

    // Bool - para true ou false
    bool variavelBool = true; 
    printf("%i\n", variavelBool); // vai imprimir 0 se for true ou 1 se for false

    // Long Int - Para lidar com números de grandezas maiores)
    long int variavelLongInt = 324328454725452854654258; // (obs. se não for um número longo, não usar o long int para não ocupar mais espaço na memoria em vão)
    printf("%i\n", variavelLongInt);

    // Const (Modificador) - Para lidar com com valores que não vão mudar
    const int constante = 10;
    printf("%i\n", constante); // (obs. se você tentar mudar esse valor depois (por exemplo com scanf) vai dar erro de compilação do programa!)

    // Float - Ponto flutuante
    float variavelFloat = 10.10;
    printf("%f\n", variavelFloat);

    // Double - Tem mais precisão das casas decimais! mais útil no meio científico
    double variavelDouble = 10.10; 
    printf("%f\n", variavelFloat);


    // Unsigned (Modificador) - Indica que uma variável inteira só pode armazenar valores positivos ou zero, ou seja, não pode representar valores negativos

    return 0;
}