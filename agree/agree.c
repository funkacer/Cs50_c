#include <stdio.h>

int main(void)
{
    char c;

    // Ask the user to type a character
    printf("Type a character and press enter: \n");

    // Get and save the character
    scanf("%c", &c);

    // Print the character
    printf("Your character is: %c\n", c);

    // Use single quotes for char, use && for and
    if (c == 'y' || c == 'Y')
    {
        printf("You agree.\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("You don't agree.\n");
    }
    
}