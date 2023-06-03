#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Informe um numero: ");
    scanf("%d", &n);
    printf("O valor absoluto do numero e: %d", n < 0 ? n * -1 : n);
}