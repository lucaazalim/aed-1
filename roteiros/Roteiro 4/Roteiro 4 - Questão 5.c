#include <stdio.h>
#include <stdlib.h>

int main() {

    float n = 1, d = 1, soma = 0;

    while(n <= 50 && d <= 99) {
        soma += n / d++;
        n += 2;
    }

    printf("G = %f", soma);

}