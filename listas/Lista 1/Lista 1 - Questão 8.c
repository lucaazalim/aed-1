#include <stdio.h>
#include <stdlib.h>

int main()
{
    char opcao;
    float salario;
    scanf("%c %f", &opcao, &salario);

    switch(opcao)
    {
    case 'A':
    {
        salario *= 1.08;
        break;
    }
    case 'B':
    {
        salario *= 1.11;
        break;
    }
    case 'C':
    {
        if(salario <= 1000)
        {
            salario += 350;
        }
        else
        {
            salario += 200;
        }
        break;
    }
    }

    printf("%.2f", salario);

}
