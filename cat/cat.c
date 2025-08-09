#include <stdio.h>

void meow(int n);
int get_positive_int(void);

int main(void)
{
    int n = get_positive_int();
    meow(n);
}

int get_positive_int(void)
{
    int n;
    do
    {
        printf("Number: ");
        scanf("%d", &n);
    } while (n < 1);

    return n;
}

void meow(int n)
{
    int i = 0;

    while (i < n)
    {
        printf("meow 1:%d\n", i);
        i++;
    }

    for (int i = 0; i < n; i++)
    {
        printf("meow 2:%d\n", i);
    }
}