#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota;
    scanf("%d", &nota);
    if(nota >= 8 && nota <= 10) {
        printf("Otimo");
    } else if(nota >= 7 && nota < 8) {
        printf("Bom");
    } else if(nota >= 5 && nota < 7) {
        printf("Regular");
    } else if(nota < 5) {
        printf("Insatisfatorio");
    }
}
