#include <stdio.h>

//O(n^2 nebo n)

//int numbers[] = {7, 2, 5, 4, 1, 6, 0, 3};
int numbers[] = {7, 0, 5, 4, 1, 6, 2, 3};

int main(void)
{
    int pom1 = 1;
    int i = sizeof(numbers)/4 - 1;
    while (i > 0 && pom1 == 1)
    {
        printf("I=%d:\n", i);
        for (int i = 0; i < sizeof(numbers)/4; i++)
        {
            printf("%d", numbers[i]);
        }
        printf("\n");
        pom1 = 0;
        for (int j = 0; j < i; j++)
        {
            if (numbers[j] > numbers[j+1])
            {
                int pom0 = numbers[j+1];
                numbers[j+1] = numbers[j];
                numbers[j] = pom0;
                pom1 = 1;
            }
        }
        i -= 1;
    }
    printf("Final:\n");
    for (int i = 0; i < sizeof(numbers)/4; i++)
        {
            printf("%d", numbers[i]);
        }
    printf("\n");
}