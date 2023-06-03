#include <stdio.h>
#include <stdlib.h>

int main()
{
    calculaMedia();
}

void calculaMedia() {

    float salario, soma = 0, total = 0;
    int filhos;

    while(1) {
        scanf("%f %d", &salario, &filhos);

        if(salario == -1) {
            break;
        }

        soma += salario;
        total++;
    }

    printf("%.2f", soma / total);

}
