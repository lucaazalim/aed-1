#include <stdio.h>
#include <stdlib.h>

int main()
{

    float first_grade, second_grade, average_weighted;

    printf("Informe a primeira nota que terá peso 2:\n");
    scanf("%f", &first_grade);

    printf("Informe a segunda nota que terá peso 3:\n");
    scanf("%f", &second_grade);

    average_weighted = first_grade * 2 + second_grade * 3 / 2;
    printf("A média ponderada é: %f\n", average_weighted);

}
