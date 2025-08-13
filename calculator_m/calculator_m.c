#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int dollars = 1;
    char line[256];

    while(true)
    {
        printf("Here's $%i. Double it and give it to the next person? ", dollars);
        char c = fgets(line, sizeof(line), stdin)[0];
        if ((c == 'y' || c == 'Y') && dollars != 0)
        {
            dollars *= 2;
        }
        else
        {
            break;
        }
    }
}
