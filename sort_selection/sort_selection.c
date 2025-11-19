#include <stdio.h>

//O(n^2)

int main(void)
{
    int numbers[] = {7, 2, 5, 4, 1, 6, 0, 3};
    //printf("%lu\n", sizeof(numbers));
    for (int i = 0; i < sizeof(numbers)/4; i++)
    {
        int min = i;
        for (int j = i + 1; j < sizeof(numbers)/4; j++)
        {
            if (numbers[j] < numbers[min])
            {
                min = numbers[j];
                min = j;
            }
        }
        if (min > i)
        {
            int temp = numbers[i];
            numbers[i] = numbers[min];
            numbers[min] = temp;
        }
    }
    for (int i = 0; i < sizeof(numbers)/4; i++)
    {
        printf("%d\n", numbers[i]);
    }
}