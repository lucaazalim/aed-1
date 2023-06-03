#include <stdio.h>
#include <stdlib.h>

void calculaNotas(float nota1, float nota2, float nota3, char letra) {

    if(letra == 'A') {
        printf("ari: %.2f\n", (nota1 + nota2 + nota3) / 3);
    } else {
        printf("pond: %.2f\n", (nota1 * 5 + nota2 * 3 + nota3 * 2) / 10);
    }

}


int main() {

    int n;
    float nota1, nota2, nota3;
    char letra;

    scanf("%d", &n);

    for(; n > 0; n--) {
        scanf("%f %f %f %c", &nota1, &nota2, &nota3, &letra);
        calculaNotas(nota1, nota2, nota3, letra);
    }

}
