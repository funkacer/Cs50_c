#include <iostream>
#include <string.h>

using namespace std;


int main(){

// s[5] nejde, protože se používá poslední char '\0' (NUL z ASCII - bity 00000000)
char s[6] = "David";
char* bs = &s[0];
void* bss = &s[0];

int a;
int* ba = &a;

cout << bs << endl << ba << endl << bss << endl;

printf("%s\n", bs); //David
// nejde: printf("%s\n", bss);

char* p = s; // The pointer p initially points to the first character of s
// Loop continues as long as the character at pointer p is not the null terminator
while (*p != '\0') {
    std::cout << *p; // Dereference the pointer to print the character
    p++;             // Increment the pointer to move to the next character
}
std::cout << std::endl;

int i = 0;
// dokud není poslední bit tak počítej znaky
while (s[i] != '\0') {
i++;
}
printf("Delka je: %i\n", i);

// Initialize the pointer, set the loop condition, and increment the pointer
for (char* p = s; *p != '\0'; p++) {
    std::cout << *p; // Dereference the pointer to print the character
    // override vrati to same (znaky): std::cout << p;
}
std::cout << std::endl;

// char* p = s; // Initialize a pointer to the start of the string
p = s;
// Loop until the null terminator is reached
while (*p != '\0') {
    std::cout << "Address: " << static_cast<void*>(p) << " - Character: " << *p << std::endl;
    p++; // Move to the next memory address (the next character)
}
std::cout << "Address: " << static_cast<void*>(p) << " - Character: " << *p << std::endl;

// Initialize, condition, and increment all in one line
for (char* p = s; *p != '\0'; p++) {
    std::cout << "Address: " << static_cast<void*>(p) << " - Character: " << *p << std::endl;
}

return 0;

}