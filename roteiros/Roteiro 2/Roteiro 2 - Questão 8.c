#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, j, a, n = 4;
    int numeros[n];

    for(i = 0; i < n; i++) {
        printf("Informe o numero %c: ", 'A' + i);
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < n; ++i) {
        for (j = i + 1; j < n; ++j) {
            if (numeros[i] < numeros[j]) {
                a = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = a;
            }
        }
    }

    printf("Numeros em ordem decrescente: ");

    for (i = 0; i < n; ++i) {
        printf("%d ", numeros[i]);
    }

}