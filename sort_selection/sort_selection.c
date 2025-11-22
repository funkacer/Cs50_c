#include <stdio.h>

//O(n^2)

//int numbers[] = {7, 2, 5, 4, 1, 6, 0, 3};
int numbers[] = {7, 0, 5, 4, 1, 6, 2, 3};

int main(void)
{
    for (int i = 0; i < sizeof(numbers)/4; i++)
    {
        printf("I=%d:\n", i);
        for (int i = 0; i < sizeof(numbers)/4; i++)
        {
            printf("%d", numbers[i]);
        }
        printf("\n");
        int min = i;
        for (int j = i + 1; j < sizeof(numbers)/4; j++)
        {
            if (numbers[j] < numbers[min])
            {
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
    printf("Final:\n");
    for (int i = 0; i < sizeof(numbers)/4; i++)
        {
            printf("%d", numbers[i]);
        }
    printf("\n");
}