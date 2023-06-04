#include <stdio.h>

int countDigits(int number, int digit)
{
    if (number < 10)
    {
        if (number == digit)
        {
            return 1;
        }

        return 0;
    }

    int lastDigit = number % 10;
    int remaining = number / 10;

    if (lastDigit == digit)
    {
        return 1 + countDigits(remaining, digit);
    }

    return countDigits(remaining, digit);
}

int main()
{
    int number = 234324223;
    int digit = 3;

    int occurrences = countDigits(number, digit);

    printf("O número %d aparece %d vezes no número %d.", digit, occurrences, number);
}