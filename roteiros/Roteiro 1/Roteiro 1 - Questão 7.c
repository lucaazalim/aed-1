#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    float raio, comprimento_circulo, area_circulo, volume_esfera;

    printf("Informe o raio: ");
    scanf("%f", &raio);

    comprimento_circulo = 2 * M_PI * raio;
    area_circulo = M_PI * pow(raio, 2);
    volume_esfera = 4 * M_PI * pow(raio, 3) / 3;

    printf("Comprimento do círculo: %.2f\n", comprimento_circulo);
    printf("Área do círculo: %.2f\n", area_circulo);
    printf("Volume da esfera: %.2f\n", volume_esfera);

}