#include <stdio.h>

int main(void)
{
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};
    int n;

    printf("Guess number: ");
    scanf("%i", &n);
    printf("Your number is: %i\n", n);

    int found = 0;
    for (int i = 0; i < sizeof(numbers)/sizeof(1); i++)
    {
        printf("%i", numbers[i]);
        if (numbers[i] == n)
        {
            printf(" EQUALS to your number.\n");
            found = i+1;
            break;
            //return 0;
        } else
        {
            printf(" DOES NOT EQUAL to your number.\n");
        }
    }
    if (found > 0)
    {
        printf("Found in %i step(s).\n", found);
    } else
    {
        printf("Not found at all.\n");
    }
    //return 1;

}