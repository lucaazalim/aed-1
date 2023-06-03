#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Valor promocional: 150.00
    Promocional com 80% ocupado: 9600.00
    Normal com 50% ocupado: 8000.00
    Diferença entre os valores: 1600.00
    */
    float valor_diaria, valor_diaria_promocional, promocional_80, normal_50;
    scanf("%f", &valor_diaria);

    valor_diaria_promocional = valor_diaria * 0.75;
    promocional_80 = 75 * 0.8 * valor_diaria_promocional;
    normal_50 = 75 * 0.5 * valor_diaria;

    printf("Valor promocional: %.2f\n", valor_diaria_promocional);
    printf("Promocional com 80%% ocupado: %.2f\n", promocional_80);
    printf("Normal com 50%% ocupado: %.2f\n", normal_50);
    printf("Diferença entre os valores: %.2f", promocional_80 - normal_50);
}
