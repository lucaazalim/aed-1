#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Valor do kW: 200.00
    Valor a pagar: 2000.00
    Valor com desconto: 1800.00
    */
    int salario_minimo, kilowatt_gasto;
    scanf("%d %d", &salario_minimo, &kilowatt_gasto);
    float kilowatt = salario_minimo / 7.0;
    printf("Valor do kW: %.2f\n", kilowatt);
    printf("Valor a pagar: %.2f\n", kilowatt_gasto * kilowatt);
    printf("Valor com desconto: %.2f", kilowatt_gasto * kilowatt * 0.9);
}
