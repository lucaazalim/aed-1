#include <stdio.h>
#include <stdlib.h>

int main()
{

    float minimum_wage, salary, amount;

    printf("Informe o salário mínimo: ");
    scanf("%f", &minimum_wage);

    printf("Informe o salário do funcionário: ");
    scanf("%f", &salary);

    amount = salary / minimum_wage;
    printf("O funcionário recebe %.1f salários mínimos.", amount);

}
