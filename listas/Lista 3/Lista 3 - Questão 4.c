#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x, y, z;

    while(1) {

        scanf("%d %d %d", &x, &y, &z);

        if(x == -1) {
            break;
        }

        identificarTriangulo(x, y, z);

    }

}

void identificarTriangulo(int x, int y, int z) {

    if(x < y + z && y < x + z && z < x + y) {

        if(x == y && y == z) {
            printf("TRIANGULO EQUILATERO\n");
        } else if(x == y || x == z || y == z) {
            printf("TRIANGULO ISOSCELES\n");
        } else {
            printf("TRIANGULO ESCALENO\n");
        }

    } else {
        printf("NÃO TRIANGULO\n");
    }

}
