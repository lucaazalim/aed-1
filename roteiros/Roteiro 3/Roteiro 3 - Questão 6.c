#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a, fatorial = 1;
    printf("Informe um numero: ");
    scanf("%d", &a);

    for(; a > 1; a--) {
        fatorial *= a;
    }

    printf("Fatorial calculado: %d", fatorial);

}