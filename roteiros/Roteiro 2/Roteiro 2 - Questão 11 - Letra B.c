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

    switch(opcao) {
        case 1:
            printf("Possui a maior variacao de temperatura no sistema solar.");
            break;
        case 2:
            printf("E o planeta mais quente do sistema solar.");
            break;
        case 3:
            printf("E o unico planeta conhecido por abrigar vida.");
            break;
        case 4:
            printf("Tem a maior montanha do sistema solar, Olympus Mons.");
            break;
        case 5:
            printf("Tem um sistema de anéis, embora nao sejam visiveis da Terra.");
            break;
        case 6:
            printf("Possui o sistema de anéis mais visivel e espetacular.");
            break;
        case 7:
            printf("Seu eixo esta inclinado em um angulo de 98 graus.");
            break;
        case 8:
            printf("E o planeta mais ventoso do sistema solar.");
            break;
        default:
            printf("Opcao invalida!");
    }

}