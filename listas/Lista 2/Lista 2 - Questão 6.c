#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float s = 0;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        float termo = 1.0 / i;
        //printf("%f", termo);
        s += termo;
    }

    printf("%.2f", s);

}
