#include <stdio.h>
#include <stdlib.h>

int main() {

    float nota, media = 0;

    for(int i = 0; i < 4; i++) {
        printf("Informe a nota %c: ", 'A' + i);
        scanf("%f", &nota);
        media += nota;
    }

    media = media / 4.0;
    printf("O aluno foi %s com media %.1f.", media >= 60 ? "aprovado" : "reprovado", media);

}