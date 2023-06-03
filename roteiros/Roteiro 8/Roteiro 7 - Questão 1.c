#include <stdio.h>
#include <stdlib.h>
#define TAM_X 4
#define TAM_Y 4

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

    int matriz[TAM_X][TAM_Y];

    leMatriz(matriz);
    imprimeMatriz(matriz);

}