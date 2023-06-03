#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, media;
    scanf("%d", &n);

    for(; n > 0; n--) {
        scanf("%d", &media);
        calcularConceito(media);
    }

}

void calcularConceito(int media) {

    if(media < 40) {
        printf("F\n");
    } else if(media < 60) {
        printf("E\n");
    } else if(media < 70) {
        printf("D\n");
    } else if(media < 80) {
        printf("C\n");
    } else if(media < 90) {
        printf("B\n");
    } else {
        printf("A\n");
    }

}
