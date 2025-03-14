#include <stdio.h>

int main()
{
    // Explicação a estrutura de repetição "do while"

    int i = 0;

    while (i != 0) {
        printf("Este texto não será exibido\n");

    }

    do {
        printf("Este texto será exibido\n");
    } while (i != 0);
    

    return 0;
}