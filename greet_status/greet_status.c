#include <stdio.h>

// to show status after program end in cmd, write "echo $?"

int main(int argc, char ** argv)
{
    printf("%i\n", argc);
    for (int i; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    if (argc != 2)
    {
        printf("Use ./greet_status Name\n");
        return 1;
    }
    printf("Hello %s.\n", argv[1]);
    return 0;
}