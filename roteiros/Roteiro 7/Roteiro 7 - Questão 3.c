#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void lerVetor(float vetor[], int tam) {
    for (int i = 0; i < tam; i++ ) {

        printf("Insira a temperatura do dia %d: ", i + 1);
        scanf("%d", &vetor[i]);

    }

}

int main() {

    int temperaturas[TAM];

    lerVetor(temperaturas, TAM);

    int menorTemperatura = 40, maiorTemperatura = 15, soma = 0;

    for(int i = 0; i < TAM; i++) {

        if(temperaturas[i] < menorTemperatura) {
            menorTemperatura = temperaturas[i];
        }

        if(temperaturas[i] > maiorTemperatura) {
            maiorTemperatura = temperaturas[i];
        }

        soma += temperaturas[i];

    }

    printf("Menor temperatura: %d\n", menorTemperatura);
    printf("Maior temperatura: %d\n", maiorTemperatura);

    float media = (float) soma / TAM;

    printf("Temperatura media: %.1f\n", media);
    printf("A temperatura foi menor do que a media nos dias: ");

    for(int i = 0; i < TAM; i++) {

        if(temperaturas[i] < media) {
            printf("%d ", i + 1);
        }

    }

}