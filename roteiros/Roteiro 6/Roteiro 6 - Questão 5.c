#include <stdio.h>
#include <stdlib.h>

int main() {

    int dia, mes, ano;

    printf("Informe um dia: ");
    scanf("%d", &dia);
    printf("Informe um mes: ");
    scanf("%d", &mes);
    printf("Informe um ano: ");
    scanf("%d", &ano);

    printf("Dias entre 01/01/1900 e %d/%d/%d: %d",
           dia, mes, ano,
           dias_entre_datas(dia, mes, ano)
          );

}

int dias_entre_datas(int d, int m, int a) {

    int dias = 0;

    for (int i = 1900; i < a; i++) {
        dias += eh_bissexto(i) ? 366 : 365;
    }

    for (int i = 1; i < m; i++) {
        dias += dias_no_mes(i, a);
    }

    dias += d - 1;
    return dias;

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