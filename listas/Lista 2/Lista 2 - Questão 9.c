#include <stdio.h>
#include <stdlib.h>

int main()
{

    float compra, venda, lucro, total_compra = 0, total_venda = 0, lucro_total = 0;
    int alpha = 0, beta = 0, gamma = 0;

    while(1) {

        scanf("%f %f", &compra, &venda);

        if(compra == 0) {
            break;
        }

        lucro = (venda - compra) / compra * 100;

        if(lucro < 10) {
            alpha++;
        } else if(lucro <= 20) {
            beta++;
        } else {
            gamma++;
        }

        total_compra += compra;
        total_venda += venda;
        lucro_total += lucro;

    }

    printf("%d\n", alpha);
    printf("%d\n", beta);
    printf("%d\n", gamma);
    printf("%.2f\n", total_compra);
    printf("%.2f\n", total_venda);
    printf("%.2f", lucro_total);

}

/*
32.00 33.00
95.00 103.00
62.00 62.00
143.00 239.00
93.00 100.00
205.00 234.00
27.00 70.00
243.00 713.00
549.00 717.00
172.00 841.00
195.00 251.00
695.00 748.00
601.00 728.00
227.00 253.00
169.00 542.00
507.00 964.00
230.00 239.00
33.00 306.00
76.00 80.00
530.00 646.00
71.00 86.00
173.00 280.00
111.00 186.00
398.00 675.00
501.00 902.00
276.00 325.00
91.00 103.00
19.00 90.00
74.00 108.00
225.00 243.00
88.00 103.00
99.00 100.00
288.00 433.00
14.00 35.00
167.00 458.00
126.00 234.00
13.00 51.00
577.00 962.00
647.00 685.00
836.00 861.00
85.00 433.00
42.00 63.00
574.00 869.00
11.00 13.00
172.00 405.00
70.00 426.00
381.00 501.00
139.00 415.00
8.00 39.00
36.00 51.00
0 0
*/
