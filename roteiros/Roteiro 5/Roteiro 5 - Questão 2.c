#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    printf("%5s %10s %10s %10s\n", "graus", "radianos", "seno", "cosseno");

    for(int graus = 0; graus <= 360; graus += 15) {

        float radianos = graus * M_PI / 180.0;
        printf("%5d %10f %10f %10f\n", graus, radianos, sin(radianos), cos(radianos));

    }

}