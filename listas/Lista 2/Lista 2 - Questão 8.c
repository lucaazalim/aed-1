#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, i, fib1 = 1, fib2 = 1, proximo = 0;

    scanf("%d", &n);

    printf("%d %d ", fib1, fib2);
    proximo = fib1 + fib2;

    while (proximo <= n) {
        printf("%d ", proximo);
        fib1 = fib2;
        fib2 = proximo;
        proximo = fib1 + fib2;
    }

}
