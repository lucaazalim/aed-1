#include <stdio.h>
#include <stdlib.h>

float calcularS(int n) {

    float s = 1.0, fatorial = 1.0;

    for (int i = 1; i <= n; i++) {
        fatorial *= i;
        s += 1.0 / fatorial;
    }

    return s;

}

int main() {

    int n;

    scanf("%d", &n);
    printf("%f", calcularS(n));

}
