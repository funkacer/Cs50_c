#include <stdio.h>

int main(void)
{
    char x;

    // Ask the user to type a character
    printf("Type a character and press enter: \n");

    // Get and save the character
    scanf("%c", &x);

    // Print the character
    printf("Your character is: %c\n", x);

    // Use single quotes for char, use && for and
    if (x == 'y' || x == 'Y')
    {
        printf("You agree.\n");
    }
    else if (x == 'n' || x == 'N')
    {
        printf("You don't agree.\n");
    }
    
}