#include <stdio.h>
#include <stdlib.h>

int main()
{
    int primeiro_termo, razao;
    scanf("%d %d", &razao, &primeiro_termo);
    printf("%.0f", primeiro_termo * pow(razao, 4));
}
