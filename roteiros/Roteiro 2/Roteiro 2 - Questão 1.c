#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Informe o primeiro numero: ");
    scanf("%d", &a);
    printf("Informe o segundo numero: ");
    scanf("%d", &b);
    printf("O maior numero e: %d", a > b ? a : b);
}