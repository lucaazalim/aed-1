#include <stdio.h>
#include <stdlib.h>

float fatorial(int n) {

    int fatorial = 1;

    for(int i = 1; i <= n; i++) {
        fatorial *= i;
    }

    return fatorial;

}


int main()
{
    int n;
    float e = 1;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        e += 1 / fatorial(i);
    }

    printf("%.2f", e);

}
