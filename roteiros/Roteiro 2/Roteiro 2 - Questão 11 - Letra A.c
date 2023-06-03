#include <stdio.h>
#include <stdlib.h>

int main() {

    int opcao;
    char opcoes[8][16] = {"Mercurio", "Venus", "Terra", "Marte", "Jupiter", "Saturno", "Urano", "Netuno"};

    for(int i = 0; i < sizeof(opcoes) / sizeof(opcoes[0]); i++) {
        printf("  %d. %s\n", i + 1, opcoes[i]);
    }

    printf("De qual planeta voce gostaria de saber uma curiosidade? ");
    scanf("%d", &opcao);

    if(opcao == 1) {
        printf("Possui a maior variacao de temperatura no sistema solar.");
    } else if(opcao == 2) {
        printf("E o planeta mais quente do sistema solar.");
    } else if(opcao == 3) {
        printf("E o unico planeta conhecido por abrigar vida.");
    } else if(opcao == 4) {
        printf("Tem a maior montanha do sistema solar, Olympus Mons.");
    } else if(opcao == 5) {
        printf("Tem um sistema de anéis, embora não sejam visiveis da Terra.");
    } else if(opcao == 6) {
        printf("Possui o sistema de anéis mais visivel e espetacular.");
    } else if(opcao == 7) {
        printf("Seu eixo esta inclinado em um angulo de 98 graus.");
    } else if(opcao == 8) {
        printf("E o planeta mais ventoso do sistema solar.");
    } else {
        printf("Opcao invalida!");
    }
}