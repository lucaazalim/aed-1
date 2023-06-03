#include <stdio.h>
#include <stdlib.h>

char identificarCategoria(int idade) {

    if(idade > 18) {
        return 'A';
    } else if(idade >= 16) {
        return 'B';
    } else if(idade >= 14) {
        return 'C';
    } else if(idade >= 11) {
        return 'D';
    } else if(idade >= 8) {
        return 'E';
    } else if(idade >= 5) {
        return 'F';
    } else {
        return '?';
    }

}

int main() {
    int n, idade;
    scanf("%d", &n);

    for(; n > 0; n--) {
        scanf("%d", &idade);
        printf("%c\n", identificarCategoria(idade));
    }
}
