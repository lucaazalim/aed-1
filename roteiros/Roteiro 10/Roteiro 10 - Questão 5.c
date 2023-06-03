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

    Aluno aluno;
    int matricula, encontrado = 0;
    FILE *arquivo = fopen("alunos.dat", "r+");

    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    printf("Informe a matrícula a ser pesquisada: ");
    scanf("%d", &matricula);

    while(fread(&aluno, sizeof(Aluno), 1, arquivo) == 1) {

        if(aluno.matricula == matricula) {
            encontrado = 1;
        }

    }

    if(!encontrado) {
        printf("Aluno não encontrado.\n");
        return 1;
    }

    printf("Informe a nova nota da prova final: ");
    scanf("%f", &aluno.notaProvaFinal);

    fseek(arquivo, -sizeof(Aluno), SEEK_CUR);
    fwrite(&aluno, sizeof(Aluno), 1, arquivo);
    fclose(arquivo);

    printf("A nota da prova final do aluno foi atualizada.");

}