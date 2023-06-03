#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a;
    printf("Informe um numero: ");
    scanf("%d", &a);

    if(a < 1) {
        printf("Informe um numero positivo.");
    } else {
        printf("Divisores de %d: ", a);
        for(int i = 1; i <= a; i++) {
            if(a % i == 0) {
                printf("%d ", i);
            }
        }
    }

}