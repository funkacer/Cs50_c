#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    // Largest negative (32bit) value : -2147483648 (1 << 31)
    // Largest positive (32bit) value : 2147483647 ~(1 << 31)
    // 100...000 je nejmensi cislo -2147483648, * 2 vznikne 0 (jedna se posune na 33 pozici)
    //int dollars = (1 << 31);
    // 0 a 31 x 1 je nejvetsi mozne cislo 2147483647, *2 vznike 111...110, coz je -2
    /*int dollars = (1 << 30) + (1 << 29) + (1 << 28) + (1 << 27) + (1 << 26) + (1 << 25)
     + (1 << 24) + (1 << 23) + (1 << 22) + (1 << 21) + (1 << 20) + (1 << 19) + (1 << 18) + (1 << 17)
      + (1 << 16) + (1 << 15) + (1 << 14) + (1 << 13) + (1 << 12) + (1 << 11) + (1 << 10) + (1 << 9)
       + (1 << 8) + (1 << 7) + (1 << 6) + (1 << 5) + (1 << 4) + (1 << 3) + (1 << 2) + (1 << 1) + (1 << 0);*/
    //int dollars = ~(1 << 31);
    // toto je 111...111 = -1
    /*int dollars = (1 << 31) + (1 << 30) + (1 << 29) + (1 << 28) + (1 << 27) + (1 << 26) + (1 << 25)
     + (1 << 24) + (1 << 23) + (1 << 22) + (1 << 21) + (1 << 20) + (1 << 19) + (1 << 18) + (1 << 17)
      + (1 << 16) + (1 << 15) + (1 << 14) + (1 << 13) + (1 << 12) + (1 << 11) + (1 << 10) + (1 << 9)
       + (1 << 8) + (1 << 7) + (1 << 6) + (1 << 5) + (1 << 4) + (1 << 3) + (1 << 2) + (1 << 1) + (1 << 0);*/
    //int dollars = ~(1 << 31) + (1 << 31);
    //int dollars = ~0;

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
    printf("Here's $%i.\n", dollars);
}
