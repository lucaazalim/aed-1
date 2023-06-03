#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void lerVetor(float vetor[], int tam)
{
    for (int i = 0; i < tam; i++ ) {

        printf("Insira a nota do aluno %d: ", i + 1);
        scanf("%d", &vetor[i]);

    }

}

int main() {

    int a[TAM], b[TAM], c[TAM];

    lerVetor(a, TAM);
    lerVetor(b, TAM);

    for(int i = 0; i < TAM; i++) {
        c[i] = a[i] < b[i] ? a[i] : b[i];
        printf("%d ", c[i]);
    }

}