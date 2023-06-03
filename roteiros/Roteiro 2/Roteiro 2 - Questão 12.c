#include <stdio.h>
#include <stdlib.h>

int main() {

    float horas_trabalhadas, salario_hora, salario_bruto, salario_liquido;

    printf("Informe as horas trabalhadas: ");
    scanf("%f", &horas_trabalhadas);
    printf("Informe o salario/hora: ");
    scanf("%f", &salario_hora);

    salario_bruto = horas_trabalhadas * salario_hora;

    if(salario_bruto < 350) {
        salario_liquido = salario_bruto;
    } else if(salario_bruto >= 350 && salario_bruto < 1000) {
        salario_liquido = salario_bruto * 0.9;
    } else {
        salario_liquido = salario_bruto * 0.8;
    }

    printf("O salario liquido e: R$ %.2f", salario_liquido);

}