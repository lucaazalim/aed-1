#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a + b >= 10 ? a + b + 5 : a + b + 7);
}
