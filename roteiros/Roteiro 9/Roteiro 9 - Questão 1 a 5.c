#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int cod;
    char nome[20];
    int idade;
    char sexo;
    float salario;
} Registro;

void leRegistro(Registro *registro) {
    printf("\tInforme o codigo: ");
    scanf("%d", &registro->cod);
    printf("\tInforme o nome: ");
    scanf("%s", registro->nome);
    printf("\tInforme a idade: ");
    scanf("%d", &registro->idade);
    printf("\tInforme o sexo: ");
    scanf(" %c", &registro->sexo);
    printf("\tInforme o salario: ");
    scanf("%f", &registro->salario);
}

void imprimeRegistro(Registro *registro) {
    printf("%d\t", registro->cod);
    printf("%s\t", registro->nome);
    printf("%d\t", registro->idade);
    printf("%c\t", registro->sexo);
    printf("%.2f\n", registro->salario);
}

int main() {

    Registro registros[30];
    int i, qtd, somaIdades = 0;
    float somaSalarios = 0, mediaIdades, mediaSalarios;

    printf("Informe a quantidade de registros: ");
    scanf("%d", &qtd);

    for(i = 0; i < qtd; i++) {
        printf("Registro %d:\n", i + 1);
        leRegistro(&registros[i]);

        somaIdades += registros[i].idade;
        somaSalarios += registros[i].salario;
    }

    mediaIdades = (float) somaIdades / qtd;
    mediaSalarios = (float) somaSalarios / qtd;

    printf("Media das idades: %.1f\n", mediaIdades);
    printf("Media dos salarios: %.2f\n", mediaSalarios);
    printf("Codigo\tNome\tIdade\tSexo\tSalario\n");

    for(i = 0; i < qtd; i++) {

        if(registros[i].salario > mediaSalarios && registros[i].idade < mediaIdades) {
            imprimeRegistro(&registros[i]);
        }

    }

}