#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Informe um numero: ");
    scanf("%d", &n);
    printf("E divisivel por 2 e por 7 ao mesmo tempo? %s.", n % 2 == 0 && n % 7 == 0 ? "Sim" : "Nao");
}