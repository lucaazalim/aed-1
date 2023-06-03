#include <stdio.h>
#include <stdlib.h>

int ehPositivo(int n) {
    return n > 0;
}

int main()
{
    int n, v;
    scanf("%d", &n);
    for(; n > 0; n--) {
        scanf("%d", &v);
        printf("%s", ehPositivo(v) ? "SIM\n" : "NAO\n");
    }
}
