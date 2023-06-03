#include <stdio.h>
#include <stdlib.h>

void de_segundos(int segundos, int *h, int *m, int *s) {

    *h = segundos / 3600;
    *m = (segundos - *h * 3600) / 60;
    *s = segundos - *h * 3600 - *m * 60;

}

int main() {

    int segundos, h, m, s;

    printf("Informe o total de segundos: ");
    scanf("%d", &segundos);

    de_segundos(segundos, &h, &m, &s);

    printf("%d:%d:%d", h, m, s);

}