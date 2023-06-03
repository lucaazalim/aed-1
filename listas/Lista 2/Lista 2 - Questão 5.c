#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    float salario, total_salario, maior_salario = INT_MIN;
    int filhos, total_filhos = 0, n = 0, salario_ate_100 = 0;

    while(1) {

        scanf("%f %d", &salario, &filhos);

        if(salario < 0) {
            break;
        }

        if(salario > maior_salario) {
            maior_salario = salario;
        }

        if(salario <= 100) {
            salario_ate_100++;
        }

        total_salario += salario;
        total_filhos += filhos;
        n++;

    }

    printf("%.2f\n", total_salario / n);
    printf("%d\n", total_filhos / n);
    printf("%.2f\n", maior_salario);
    printf("%.2f\n", (float) salario_ate_100 / n * 100);

}

/*
1811.00 5
4176.00 5
31907.00 3
8408.00 8
105.00 1
40836.00 8
293.00 0
6323.00 4
3023.00 9
782.00 0
410.00 1
4477.00 4
7184.00 5
48.00 3
888.00 3
419.00 1
98.00 8
60.00 0
426.00 5
388.00 7
4200.00 2
52.00 1
8456.00 1
3494.00 9
10857.00 4
5043.00 5
774.00 2
554.00 1
33514.00 6
242.00 3
3011.00 2
35134.00 0
37.00 3
29.00 7
120.00 8
965.00 3
2002.00 5
26.00 0
8.00 3
4026.00 6
12.00 7
5874.00 3
647.00 7
162.00 5
219.00 0
560.00 1
2603.00 7
1050.00 0
2462.00 7
17.00 8
-1 -1
*/
