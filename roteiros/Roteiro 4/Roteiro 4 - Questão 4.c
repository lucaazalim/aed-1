#include <stdio.h>
#include <stdlib.h>

int main() {

    float n, soma = 0;

    printf("Informe um numero: ");
    scanf("%f", &n);

    while(n > 0) {
        soma += 1 / n;
        n--;
    }

    printf("H = %f", soma);

}