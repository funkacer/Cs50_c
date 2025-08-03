#include <stdio.h>

int main(void)
{

    // Create an int and a char variable
    int x;
    int y;

    // Ask the user to type a number AND a character
    printf("Type a number x AND a number y and press enter: \n");

    // Get and save the number AND character the user types
    scanf("%d %d", &x, &y);

    // Print the number
    printf("Your number x is: %d\n", x);

    // Print the character
    printf("Your number y is: %d\n", y);
    
    if (x < y)
    {
        printf("x is less than y\n");
    } else if (x > y)
    {
        printf("x is greater than y\n");
    } else
    {
        printf("x is equal to y\n");
    }
}
