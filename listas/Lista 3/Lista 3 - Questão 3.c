#include <stdio.h>
#include <stdlib.h>

void ordenarEExibir(int a, int b, int c) {

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    if (b > c) {
        int temp = b;
        b = c;
        c = temp;
    }
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    printf("%d %d %d\n", a, b, c);

}

int main() {

    int n, a, b, c;
    scanf("%d", &n);

    for (; n > 0; n--) {
        scanf("%d %d %d", &a, &b, &c);
        ordenarEExibir(a, b, c);
    }

}
