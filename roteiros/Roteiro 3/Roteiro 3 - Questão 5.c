#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a;
    printf("Informe um numero: ");
    scanf("%d", &a);

    for(int i = a; i > 0; i--) {
        if(i % 2 != 0) {
            printf("%d ", i);
        }
    }

}