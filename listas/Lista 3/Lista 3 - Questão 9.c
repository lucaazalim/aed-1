#include <stdio.h>
#include <stdlib.h>

float calcularMediaAprovados(int n) {

    float nota, soma = 0, total = 0;

    for(int i = 0; i < n; i++) {

        scanf("%f", &nota);

        if(nota >= 6) {
            soma += nota;
            total++;
        }

    }

    return soma / total;

}


int main()
{
    int n;
    scanf("%d", &n);

    printf("%.1f", calcularMediaAprovados(n));
}
