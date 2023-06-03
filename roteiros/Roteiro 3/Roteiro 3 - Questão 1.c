#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Informe o primeiro numero: ");
    scanf("%d", &a);
    printf("Informe o segundo numero: ");
    scanf("%d", &b);
    for(int i = a; i <= b; i++) {
        printf("%d ", i);
    }
}