#include <stdio.h>

int main(void)
{
    char c;

    // Ask the user to type a character
    printf("Do you agree? ");

    // Get and save the character
    scanf("%c", &c);

    // Use single quotes for char, use && for and
    if (c == 'y' || c == 'Y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Not agreed.\n");
    }
    
}