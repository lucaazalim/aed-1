#include <stdio.h>

#define TAMANHO_NOME 32
#define TAMANHO_CURSO 32

typedef struct
{

    int matricula;
    char nome[TAMANHO_NOME];
    char curso[TAMANHO_CURSO];
    float notaProva1, notaProva2, notaProvaFinal;

} Aluno;

int main()
{

    FILE *arquivo = fopen("ALUNOS.DAT", "rb");

    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo!");
        return 1;
    }

    Aluno aluno;

    fread(&aluno, sizeof(Aluno), 1, arquivo);
    fclose(arquivo);

    printf("Matrícula: %d\n", aluno.matricula);
    printf("Nome: %s\n", aluno.nome);
    printf("Curso: %s\n", aluno.curso);
    printf("Nota prova 1: %.2f\n", aluno.notaProva1);
    printf("Nota prova 2: %.2f\n", aluno.notaProva2);
    printf("Nota prova final: %.2f\n", aluno.notaProvaFinal);
    
}