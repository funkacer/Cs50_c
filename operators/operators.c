#include <stdio.h>

int main(void)
{

    // Create an int and a char variable
    int x;

    // Ask the user to type a number AND a character
    printf("Type a number x and press enter: \n");

    // Get and save the number AND character the user types
    scanf("%d", &x);

    // Print the number
    printf("Your number x is: %d\n", x);

    x++;

    // Print the character
    printf("Your number x++ is: %d\n", x);

    x += 1;

    // Print the character
    printf("Your number x += 1 is: %d\n", x);
    
}
