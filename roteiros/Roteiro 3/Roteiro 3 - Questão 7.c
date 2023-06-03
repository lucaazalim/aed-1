#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, soma = 0;

    for(int i = 0; i < 10; i++) {
        printf("Informe o numero %d: ", i + 1);
        scanf("%d", &n);
        soma += n;
    }

    printf("Soma dos numeros: %d", soma);

}