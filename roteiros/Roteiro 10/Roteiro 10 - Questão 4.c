#include <stdio.h>

int main()
{

    char nomeArquivo[50];
    char texto[1000];

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    FILE *arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    fgets(texto, 1000, arquivo);

    printf("Conteúdo do arquivo: \n");
    printf("%s", texto);

    fclose(arquivo);

}