#include <stdio.h>

int main()
{
    // Assim declaramos um vetor, com seus elementos do tipo int e com espaço para 5 elementos
    int vetor[5] = {1, 2, 3, 4, 5}; 

    for (int i = 0; i < 5; ++i) {
        printf("%i\n", vetor[i]);
    } 
    
}