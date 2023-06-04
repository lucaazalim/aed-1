#include <stdio.h>

void decimalToBinary(int number)
{
    if (number > 0)
    {
        decimalToBinary(number / 2);
        printf("%d", number % 2);
    }
}

int main()
{
    int decimalNumber = 42;

    printf("%d em binário: ", decimalNumber);
    decimalToBinary(decimalNumber);
}