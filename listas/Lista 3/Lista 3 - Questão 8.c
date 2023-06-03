#include <stdlib.h>
#include <stdio.h>

float calcularS(int n) {

    float s;

    for(int i = 1; i <= n; i++) {
        s += (float) (i * i + 1) / (i + 3);
    }

    return s;

}

int main() {

    int n;
    scanf("%d", &n);

    printf("%f", calcularS(n));

}
