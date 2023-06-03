#include <stdio.h>
#include <stdlib.h>

int main() {

    int h, m, s;

    printf("Informe um valor de hora: ");
    scanf("%d", &h);
    printf("Informe um valor de minuto: ");
    scanf("%d", &m);
    printf("Informe um valor de segundo: ");
    scanf("%d", &s);

    printf("Total de segundos: %d", para_segundos(h, m, s));

}

int para_segundos(int h, int m, int s) {
    return h * 60 * 60 + m * 60 + s;
}