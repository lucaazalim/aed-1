#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    printf("Informe o numero X: ");
    scanf("%d", &x);
    printf("Informe o numero Y: ");
    scanf("%d", &y);

    if(x > y) {
        printf("O numero X deve ser menor ou igual ao numero Y.");
    } else {
        for(int i = x; i <= y; i++) {
            printf("%d ", i);
        }
    }

}