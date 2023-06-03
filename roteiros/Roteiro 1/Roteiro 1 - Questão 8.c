#include <stdio.h>
#include <stdlib.h>

int main()
{

    int first_angle, second_angle, thrid_angle;

    printf("Informe um dos ângulos do triângulo: ");
    scanf("%d", &first_angle);

    printf("Informe outro ângulo do triângulo: ");
    scanf("%d", &second_angle);

    thrid_angle = 180 - first_angle - second_angle;
    printf("O terceiro ângulo do triângulo é: %d", thrid_angle);

}
