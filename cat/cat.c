#include <stdio.h>

int main()
{
    int i = 0;

    while (i < 3)
    {
        printf("meow 1:%d\n", i);
        i++;
    }

    for (int i = 0; i < 3; i++)
    {
        printf("meow 2:%d\n", i);
    }
}