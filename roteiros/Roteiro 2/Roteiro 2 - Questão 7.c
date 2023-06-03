#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, soma;
    printf("Informe tres numeros: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a < b && a < c) {
        soma = b + c;
    } else if(b < a && b < c) {
        soma = a + c;
    } else {
        soma = a + b;
    }

    printf("A soma dos maiores e: %d", soma);

}