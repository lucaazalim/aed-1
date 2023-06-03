#include <stdio.h>
#include <stdlib.h>

int main() {

    int dia, mes;

    dia = solicitar_intervalo(1, 31);
    mes = solicitar_intervalo(1, 12);

    printf("Data: %d/%d", dia, mes);

}

int solicitar_intervalo(int de, int ate) {

    int n;

    printf("Informe um número entre %d e %d:\n", de, ate);
    scanf("%d", &n);

    if(n < de || n > ate) {
        printf("Número fora do intervalo!\n");
        return solicitar_intervalo(de, ate);
    }

    return n;

}