#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*
    6
    9
    */
    /*
    Perimetro: 30.00
    Area: 54.00
    Diagonal: 10.82
    */
    int base, altura;
    scanf("%d %d", &base, &altura);
    printf("Perimetro: %.2f\n", 2.0 * (base + altura));
    printf("Area: %.2f\n", base * altura * 1.0);
    printf("Diagonal: %.2f", sqrt(pow(base, 2) + pow(altura, 2)));
}
