#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;

    printf("Informe um numero: ");
    scanf("%d", &n);

    printf("O numero %s primo.", eh_primo(n) ? "e" : "nao e");

}

int eh_primo(int n) {

    int i, primo = 1;

    for (i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            primo = 0;
            break;
        }
    }

    return primo;

}