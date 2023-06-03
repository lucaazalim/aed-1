#include <stdio.h>
#include <stdlib.h>

int main() {

    float a, b, resultado;
    char operacao;

    printf("Informe o primeiro numero: ");
    scanf("%f", &a);
    printf("Informe o segundo numero: ");
    scanf("%f", &b);
    printf("Informe a operacao a ser realizada (+, -, * ou /): ");
    scanf("%s", &operacao);

    switch(operacao) {
        case '+':
            resultado = a + b;
            break;
        case '-':
            resultado = a - b;
            break;
        case '*':
            resultado = a * b;
            break;
        case '/':
            resultado = a / b;
            break;
        default:
            printf("Operacao invalida.");
            return;
    }

    printf("Resultado da opercao: %.2f", resultado);

}