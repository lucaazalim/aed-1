#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n;
    printf("Informe um numero real: ");
    scanf("%f", &n);
    printf("O numero e %s.", n == 0 ? "nulo" : (n > 0 ? "positivo" : "negativo"));
}