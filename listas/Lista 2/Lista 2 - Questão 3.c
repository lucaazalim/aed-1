#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /**
    Número não é divisível pelos valores
    Número não é divisível pelos valores
    3 Números são divisíveis por 3 e por 9
    5 Números são divisíveis por 2
    2 Números são divisíveis por 5
    */

    float n;
    int alpha = 0, beta = 0, gama = 0;

    for(int i = 0; i < 10; i++) {

        scanf("%f", &n);
        int nenhum = 1;

        if(fmod(n, 3) == 0 && (int) fmod(n, 9) == 0) {
            alpha++;
            nenhum = 0;
        }

        if(fmod(n, 2) == 0) {
            beta++;
            nenhum = 0;
        }

        if(fmod(n, 5) == 0) {
            gama++;
            nenhum = 0;
        }

        if(nenhum) {
            printf("Número não é divisível pelos valores\n");
        }

    }

    printf("%d Números são divisíveis por 3 e por 9\n", alpha);
    printf("%d Números são divisíveis por 2\n", beta);
    printf("%d Números são divisíveis por 5", gama);

}
