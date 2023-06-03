#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Informe um numero inteiro: ");
    scanf("%d", &n);
    printf("O numero e %s.", n % 2 == 0 ? "par" : "impar");
}