#include <stdio.h>
#include <stdbool.h>

// Floating-Point Imprecision

int main(void)
{
    int x;
    int y;
    printf("x: ");
    // jde i %i, %f for float, %u
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);
    // (float) = casting a value
    // default is .5 if omitted
    printf("%.30f\n", (float) x / y);
}