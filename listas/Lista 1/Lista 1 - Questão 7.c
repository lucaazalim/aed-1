#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, resultado;
    scanf("%f", &x);

    if(x <= 1) {
        resultado = 1;
    } else if(x > 1 && x <= 2) {
        resultado = 2;
    } else if(x > 2 && x <= 3) {
        resultado = x * x;
    } else if(x > 3) {
        resultado = x * x * x;
    }

    printf("%.2f", resultado);

}
