#include <stdio.h>

int main()
{
    
    char poema[1000];

    printf("Digite o poema: \n");
    fgets(poema, sizeof(poema), stdin);

    FILE *arquivo = fopen("POEMA.TXT", "w");

    if(arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    fputs(poema, arquivo);
    fclose(arquivo);

    printf("Texto gravado com sucesso.");

}