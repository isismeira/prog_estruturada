#include <stdio.h> // Inclui a bibliotea padrão de entrada e saída
 
int main() { // Função principal

    int idade = 19; // Declaração de variável inteira
    int idadePai = 50;
    int idadeMae = 49;  

    printf("Hello World!!!\n");

    printf("Minha idade eh %i anos\n", idade); // Exibindo conteúdo da variável

    printf("A idade do meu pai eh %i anos e a idade da minha mae eh %i anos\n",
            idadePai, idadeMae); //Exibindo conteúdo de mais de uma variável
     
    return 0;  // Retorna 0 para o sistema operacional
}