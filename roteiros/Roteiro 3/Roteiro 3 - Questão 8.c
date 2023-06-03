#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, tentativas = 0, soma = 0;

    while(soma < 21) {

        if(tentativas > 0) {
            printf("Ainda nao acabou! (%d)\n", tentativas);
        }

        printf("Informe um numero: ");
        scanf("%d", &n);

        if(n >= 13) {
            printf("Informe um numero menor que 13.\n");
            continue;
        }

        soma += n;
        tentativas++;

    }

    if(soma == 21) {
        printf("Acabado, soma = %d", soma);
    } else {
        printf("Acabou! (%d)", tentativas);
    }

}