#include <stdio.h>
#include <stdlib.h>

void lerVetor(float vetor[], int tam) {
    for (int i = 0; i < tam; i++ ) {

        printf("Insira o numero [%d]: ", i + 1);
        scanf("%d", &vetor[i]);

    }

}

int main() {

    int tam;

    printf("Insira a quantidade de numeros: ");
    scanf("%d", &tam);

    int vetor[tam], positivos = 0, negativos = 0;

    lerVetor(&vetor, tam);

    for(int i = 0; i < tam; i++) {
        if(vetor[i] < 0) {
            negativos++;
        }

        if(vetor[i] > 0) {
            positivos++;
        }
    }

    printf("Numeros positivos: %d\nSao eles: ", positivos);

    for(int i = 0; i < tam; i++) {
        if(vetor[i] > 0) {
            printf("%d ", vetor[i]);
        }
    }

    printf("\nNumeros negativos: %d\nSao eles: ", negativos);

    for(int i = 0; i < tam; i++) {
        if(vetor[i] < 0) {
            printf("%d ", vetor[i]);
        }
    }

}