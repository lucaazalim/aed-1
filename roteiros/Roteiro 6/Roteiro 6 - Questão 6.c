#include <stdio.h>
#include <stdlib.h>

int main() {

    int dias, dia, mes, ano;

    printf("Informe a quantidade de dias: ");
    scanf("%d", &dias);

    soma_dias(dias, &dia, &mes, &ano);

    printf("Data 01/01/1900 + %d dias = %d/%d/%d", dias, dia, mes, ano);

}

void soma_dias(int dias, int *dia, int *mes, int *ano) {

    int diasRestantes = dias;

    *ano = 1900;

    while (diasRestantes >= dias_no_ano(*ano)) {
        diasRestantes -= dias_no_ano(*ano);
        (*ano)++;
    }

    *mes = 1;

    while (diasRestantes >= dias_no_mes(*mes, *ano)) {
        diasRestantes -= dias_no_mes(*mes, *ano);
        (*mes)++;
    }

    *dia = diasRestantes + 1;

}

int dias_no_ano(int ano) {
    return eh_bissexto(ano) ? 366 : 365;
}

int eh_bissexto(int ano) {
    return (ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0;
}

int dias_no_mes(int mes, int ano) {
    if (mes == 2) {
        return eh_bissexto(ano) ? 29 : 28;
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        return 30;
    } else {
        return 31;
    }
}