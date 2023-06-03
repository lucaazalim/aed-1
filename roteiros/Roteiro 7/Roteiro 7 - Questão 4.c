#include <stdio.h>
#include <stdlib.h>
#define TAM 120

int main() {

    char frase[TAM];

    printf("Informe uma frase de ate %d caracteres:\n", TAM);
    fgets(frase, TAM, stdin);

    int brancos = 0, letrasP = 0;

    for(int i = 0; i < TAM; i++) {

        if(frase[i] == ' ') {
            brancos++;
        }

        if(frase[i] == 'p' || frase[i] == 'P') {
            letrasP++;
        }

    }

    printf("Quantidade de brancos: %d\n", brancos);
    printf("Quantidade de letras P: %d\n", letrasP);

    char letra;
    int index = -1;

    printf("Informe uma letra: ");
    scanf(" %c", &letra);

    for(int i = 0; i < TAM; i++) {
        if(frase[i] == letra) {
            index = i;
            break;
        }
    }

    if(index == -1) {
        printf("A letra '%c' nao aparece na frase.", letra);
    } else {
        printf("A letra '%c' aparece pela primeira vez na posicao %d.", letra, index);
    }

}