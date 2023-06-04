#include <stdio.h>

int sum(int n)
{

    if (n == 1)
    {
        return n;
    }

    return n + sum(n - 1);
}

int main()
{

    int n;

    printf("Informe um número: ");
    scanf("%d", &n);

    printf("Soma: %d", sum(n));
}