#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hora, minuto;
    scanf("%d %d", &hora, &minuto);
    printf("%d", hora * 60 + minuto);
}
