#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    12
    */
    /*
    Perimetro: 75.36
    Area: 452.16
    */
    int raio;
    scanf("%d", &raio);
    printf("Perimetro: %.2f\n", 2 * 3.14 * raio);
    printf("Area: %.2f", 3.14 * pow(raio, 2));
}
