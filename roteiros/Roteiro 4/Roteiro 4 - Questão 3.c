#include <stdio.h>
#include <stdlib.h>

int main() {

    while(1) {

        int numero, soma = 0, contador = 0;

        do {
            printf("Informe um numero: ");
            scanf("%d", &numero);
            soma += numero;
            contador++;
        } while(numero != 0);

        printf("Soma: %d, Total de numeros: %d\n", soma, contador);

    }

}