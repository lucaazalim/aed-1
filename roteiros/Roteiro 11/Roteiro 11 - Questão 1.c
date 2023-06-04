#include <stdio.h>

void reverseArray(int array[], int start, int end)
{

    if(start >= end) {
        return;
    }

    int temp = array[start];
    array[start] = array[end];
    array[end] = temp;

    reverseArray(array, start + 1, end - 1);

}

int main()
{

    int array[] = {1, 2, 3, 4, 5};
    int arraySize = sizeof(array) / sizeof(array[0]);

    printf("Original array: ");

    for (int i = 0; i < arraySize; i++)
    {
        printf("%d ", array[i]);
    }

    reverseArray(array, 0, arraySize - 1);

    printf("\nReversed array: ");

    for (int i = 0; i < arraySize; i++)
    {
        printf("%d ", array[i]);
    }
}