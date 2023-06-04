#include <stdio.h>

int countDigits(int number)
{
    if (number < 10)
    {
        return 1;
    }

    return 1 + countDigits(number / 10);
}

int main()
{
    int number = 10340295;
    int digitCount = countDigits(number);

    printf("%d tem %d dígitos.", number, digitCount);
}