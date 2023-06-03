#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, fib1 = 1, fib2 = 1, soma;

    scanf("%d", &n);

    printf("1 1 ");

    for(int i = 3; i <= n; i++) {
        soma = fib1 + fib2;
        fib1 = fib2;
        fib2 = soma;
        printf("%d ", fib2);
    }

}
