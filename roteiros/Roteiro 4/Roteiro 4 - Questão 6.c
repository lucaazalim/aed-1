#include <stdio.h>
#include <stdlib.h>

int main() {

    float n = 21, d = 250, soma = 0;

    while(n <= 250 && d >= 21) {
        soma += n++ / d--;
    }

    printf("J = %f", soma);

}