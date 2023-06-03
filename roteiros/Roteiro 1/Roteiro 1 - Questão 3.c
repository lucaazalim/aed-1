#include <stdio.h>
#include <stdlib.h>

int main()
{

    float price;

    printf("Informe o preço:\n");
    scanf("%f", &price);

    price *= 0.9;
    printf("O preço com desconto de 10% é: %.1f\n", price);

}
