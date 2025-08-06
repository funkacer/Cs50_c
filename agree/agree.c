#include <stdio.h>

int main(void)
{
    char myChar;

    // Ask the user to type a number AND a character
    printf("Type a character and press enter: \n");

    // Get and save the number AND character the user types
    scanf("%c", &myChar);

    // Print the character
    printf("Your character is: %c\n", myChar);
    
}