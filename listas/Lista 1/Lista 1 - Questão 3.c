#include <stdio.h>
#include <stdlib.h>

int main() {

    int ano;
    char aniversario;

    scanf("%d %c", &ano, &aniversario);

    int idade = 2023 - ano;

    if(aniversario == 'N') {
        idade--;
    }

    printf("%d\n", idade);

    if(idade > 18) {
        printf("Pode dirigir");
    } else {
        printf("Não pode dirigir");
    }

}
