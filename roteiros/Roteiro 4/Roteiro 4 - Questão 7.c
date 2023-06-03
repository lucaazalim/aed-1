#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int n = 1;
    float max, soma = 0;

    printf("Informe um numero: ");
    scanf("%f", &max);

    while(n <= max) {
        soma += (n / pow(n, 2.0)) * (n++ % 2 == 0 ? -1 : 1);
    }

    printf("L = %f", soma);

}