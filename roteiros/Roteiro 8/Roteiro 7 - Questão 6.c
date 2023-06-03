#include <stdio.h>
#include <stdlib.h>
#define TAM_X 3
#define TAM_Y 3

void leMatriz(int matriz[TAM_X][TAM_Y]) {
    for(int x = 0; x < TAM_X; x++) {
        for(int y = 0; y < TAM_Y; y++) {
            printf("Informe o elemento [%d][%d]: ", x, y);
            scanf("%d", &matriz[x][y]);
        }
    }
}

void imprimeDiagonalInferiorMatriz(int matriz[TAM_X][TAM_Y]) {
    for(int x = 0; x < TAM_X; x++) {
        for(int y = 0; y <= x; y++) {
            printf("%d ", matriz[x][y]);
        }
        printf("\n");
    }
}

int main() {

    int matrizA[TAM_X][TAM_Y];

    leMatriz(matrizA);
    imprimeDiagonalInferiorMatriz(matrizA);

}