#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first_number, second_number, subtraction;

    printf("Informe o primeiro número:\n");
    scanf("%d", &first_number);

    printf("Informe o segundo número:\n");
    scanf("%d", &second_number);

    subtraction = first_number - second_number;
    printf("A subtração de %d por %d é %d.\n", first_number, second_number, subtraction);

}
