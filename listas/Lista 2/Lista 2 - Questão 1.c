#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int n;
    int total, positivos = 0, negativos = 0, zeros = 0;

    scanf("%d", &total);

    for(int i = 0; i < total; i++) {

        scanf("%lld", &n);

        if(n > 0) {
            positivos++;
        } else if(n < 0) {
            negativos++;
        } else {
            zeros++;
        }
    }

    printf("%d POSITIVOS\n%d NEGATIVOS\n%d ZEROS", positivos, negativos, zeros);

}
