#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    float first_cathetus, second_cathetus, hypotenuse;

    printf("Informe o primeiro cateto: ");
    scanf("%f", &first_cathetus);

    printf("Informe o segundo cateto: ");
    scanf("%f", &second_cathetus);

    hypotenuse = sqrt(pow(first_cathetus, 2) + pow(second_cathetus, 2));
    printf("A hipotenusa é: %.2f", hypotenuse);

}