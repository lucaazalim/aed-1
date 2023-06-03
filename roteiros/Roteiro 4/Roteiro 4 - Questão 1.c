#include <stdio.h>
#include <stdlib.h>

int main() {

    int numero, soma = 0;

    do {
        printf("Informe um numero: ");
        scanf("%d", &numero);
        soma += numero;
    } while(numero != 0);

    printf("Soma: %d", soma);

}