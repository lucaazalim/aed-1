#include <stdio.h>
#include <stdlib.h>

int main()
{

    int voto, votos_1 = 0, votos_2 = 0, votos_3 = 0, votos_4 = 0, votos_nulos = 0, votos_brancos = 0;

    do {

        scanf("%d", &voto);

        switch(voto) {

            case 1: votos_1++; break;
            case 2: votos_2++; break;
            case 3: votos_3++; break;
            case 4: votos_4++; break;
            case 5: votos_nulos++; break;
            case 6: votos_brancos++; break;

        }

    } while(voto != 0);

    printf("%d\n", votos_1);
    printf("%d\n", votos_2);
    printf("%d\n", votos_3);
    printf("%d\n", votos_4);
    printf("%d\n", votos_nulos);
    printf("%d", votos_brancos);

}
