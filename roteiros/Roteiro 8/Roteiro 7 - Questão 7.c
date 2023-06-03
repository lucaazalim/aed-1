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

void imprimeDiagonalSuperiorMatriz(int matriz[TAM_X][TAM_Y]) {
    for(int x = 0; x < TAM_X; x++) {
        for(int y = 0; y < TAM_Y; y++) {
            if(y >= x) {
                printf("%d ", matriz[x][y]);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

int main() {

    int matrizA[TAM_X][TAM_Y];

    leMatriz(matrizA);
    imprimeDiagonalSuperiorMatriz(matrizA);

}