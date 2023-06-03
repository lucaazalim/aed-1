#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, c, d, u;
    scanf("%d", &numero);
    c = numero / 100;
    u = numero % 10;
    d = (numero % 100 - u) / 10;
    printf("%d%d%d", u, d, c);
}
