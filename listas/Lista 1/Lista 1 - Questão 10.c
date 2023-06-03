#include <stdio.h>
#include <stdlib.h>

int main()
{
    int velocidade_maxima, velocidade, ultrapassou, multa;

    scanf("%d %d", &velocidade_maxima, &velocidade);

    if(velocidade > velocidade_maxima)
    {

        ultrapassou = velocidade - velocidade_maxima;

        if(ultrapassou <= 10)
        {
            multa = 50;
        }
        else if(ultrapassou > 10 && ultrapassou <= 30)
        {
            multa = 100;
        }
        else
        {
            multa = 200;
        }

        printf("Multa de %d reais", multa);

    }
    else
    {
        printf("Motorista respeitou a lei");
    }

}
