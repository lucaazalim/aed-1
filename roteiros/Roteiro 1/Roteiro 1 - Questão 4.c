#include <stdio.h>
#include <stdlib.h>

int main()
{
    float larger_base, smaller_base, heigth, area;

    printf("Informe a base maior: ");
    scanf("%f", &larger_base);

    printf("Informe a base menor: ");
    scanf("%f", &smaller_base);

    printf("Informe a altura: ");
    scanf("%f", &heigth);

    area = (larger_base + smaller_base) * heigth / 2;
    printf("A área do trapésio é: %.2f", area);

}
