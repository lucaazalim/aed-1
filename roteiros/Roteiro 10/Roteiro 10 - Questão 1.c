#include <stdio.h>

#define TAMANHO_NOME 32
#define TAMANHO_CURSO 32

typedef struct {

    int matricula;
    char nome[TAMANHO_NOME];
    char curso[TAMANHO_CURSO];
    float notaProva1, notaProva2, notaProvaFinal;

} Aluno;

int main() {
    
    Aluno aluno;

    printf("Informe a matrícula do aluno: ");
    scanf("%d", &aluno.matricula);
    getchar();

    printf("Informe o nome do aluno: ");
    fgets(aluno.nome, TAMANHO_NOME, stdin);

    printf("Informe o curso do aluno: ");
    fgets(aluno.curso, TAMANHO_CURSO, stdin);

    printf("Informe a nota da prova 1: ");
    scanf("%f", &aluno.notaProva1);

    printf("Informe a nota da prova 2: ");
    scanf("%f", &aluno.notaProva2);

    printf("Informe a nota da prova final: ");
    scanf("%f", &aluno.notaProvaFinal);

    FILE *arquivo = fopen("ALUNOS.DAT", "wb");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!");
        return 1;
    }

    fwrite(&aluno, sizeof(Aluno), 1, arquivo);
    fclose(arquivo);

    printf("Dados do aluno gravados com sucesso!");

}