#include <stdio.h>

int main(void)
{

    /* 
    // Create a string
    char firstName[30];

    // Ask the user to input some text
    printf("Enter your first name: \n");

    // Get and save the text
    scanf("%s", firstName);

    // Output the text
    printf("Hello %s\n", firstName); */

    // nejde kdyz scanf pred fgets

    char fullName[30];

    printf("Type your full name: \n");
    fgets(fullName, sizeof(fullName), stdin);

    printf("Hello %s", fullName);

    // Type your full name: John Doe
    // Hello John Doe

    // fullName << cin;

    // Create an int and a char variable
    int myNum;
    char myChar;

    // Ask the user to type a number AND a character
    printf("Type a number AND a character and press enter: \n");

    // Get and save the number AND character the user types
    scanf("%d %c", &myNum, &myChar);

    // Print the number
    printf("Your number is: %d\n", myNum);

    // Print the character
    printf("Your character is: %c\n", myChar);
    
}