#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*
    9
    2
    */
    /*
    Hipotenusa: 9.22
    */
    int cateto_1, cateto_2;
    scanf("%d %d", &cateto_1, &cateto_2);
    printf("Hipotenusa: %.2f", sqrt(pow(cateto_1, 2) + pow(cateto_2, 2)));
}
