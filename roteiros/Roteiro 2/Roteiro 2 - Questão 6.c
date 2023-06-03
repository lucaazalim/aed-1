#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int numeros[3], menor = INT_MAX, maior = INT_MIN;
    for(int i = 0; i < 3; i++) {
        printf("Informe o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
        menor = numeros[i] < menor ? numeros[i] : menor;
        maior = numeros[i] > maior ? numeros[i] : maior;
    }
    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d", menor);
}