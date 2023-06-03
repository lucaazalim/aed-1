#include <stdio.h>
#include <stdlib.h>

int main() {

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

    printf("%.0f%% POSITIVOS\n%.0f%% NEGATIVOS\n%.0f%% ZEROS",
           positivos * 1.0 / total * 100,
           negativos * 1.0 / total * 100,
           zeros * 1.0 / total * 100
          );

}
