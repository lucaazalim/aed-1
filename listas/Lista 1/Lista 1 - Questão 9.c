#include <stdio.h>
#include <stdlib.h>

int main()
{
    char simbolo;
    scanf("%c", &simbolo);

    switch(simbolo)
    {
    case '<':
    {
        printf("SINAL DE MENOR");
        break;
    }
    case '>':
    {
        printf("SINAL DE MAIOR");
        break;
    }
    case '=':
    {
        printf("SINAL DE IGUAL");
        break;
    }
    default:
    {
        printf("OUTRO SINAL");
    }
    }

}
