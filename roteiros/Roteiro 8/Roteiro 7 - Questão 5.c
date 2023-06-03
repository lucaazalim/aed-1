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

void imprimeMatriz(int matriz[TAM_X][TAM_Y]) {
    for(int x = 0; x < TAM_X; x++) {
        for(int y = 0; y < TAM_Y; y++) {
            printf("[%d][%d]: %d\n", x, y, matriz[x][y]);
        }
    }
}

int main() {

    int matrizA[TAM_X][TAM_Y];
    int matrizB[TAM_X][TAM_Y];
    int matrizE[TAM_X][TAM_Y];

    leMatriz(matrizA);
    leMatriz(matrizB);

    for(int x = 0; x < TAM_X; x++) {
        for(int y = 0; y < TAM_Y; y++) {
            matrizE[x][y] = matrizA[x][y] > matrizB[x][y] ? matrizA[x][y] : matrizB[x][y];
        }
    }

    imprimeMatriz(matrizE);

}