#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    for(int cm = 0; cm <= 100; cm += 2) {

        printf("%d cm\t%.1f pol\n", cm, cm / 2.5);

    }

}