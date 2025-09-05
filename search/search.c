#include <stdio.h>
#include <string.h>

int main(void)
{
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};
    int n;

    /*
    // nejde scanf pred fgets
    printf("Guess number: ");
    scanf("%i", &n);
    printf("Your number is: %i\n", n);
    */

    int found = 0;
    for (int i = 0; i < sizeof(numbers)/sizeof(1); i++)
    {
        printf("%i", numbers[i]);
        if (numbers[i] == n)
        {
            printf(" EQUALS to your number.\n");
            found = i+1;
            break;
            //return 0;
        } else
        {
            printf(" DOES NOT EQUAL to your number.\n");
        }
    }
    if (found > 0)
    {
        printf("Found in %i step(s).\n", found);
    } else
    {
        printf("Not found at all.\n");
    }
    //return 1;

    //nepomuze
    //fflush(stdin);

    char *strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};
    char s[40];
    printf("Guess string: ");
    fgets(s, sizeof(s), stdin);

    // ostranim 10, ale pridam '\0'
    char string[strlen(s)];
    for (int i = 0, n = strlen(s); i < n; i++) {
        if (s[i] == 10) {
            printf(" %c", s[i]);
            printf(" %i,", s[i]);
            printf(" (znak ENTER konec) na pozici %i (počítáno od 1, tj. strlen +1, po 10=ENTER)\n", i+1);
        } else
        {
            printf(" %c", s[i]);
            printf(" %i,", s[i]);
            string[i] = s[i];
        }
    }
    string[strlen(s)] = '\0';

    printf("Your string: %s\n", string);

    for (int i = 0, n = strlen(string); i <= n; i++) {
        if (string[i] == '\0') {
            printf(" %c", string[i]);
            printf(" %i,", string[i]);
            printf(" (znak \\0 konec) na pozici %i (počítáno od 1, tj. strlen +1)\n", i+1);
        } else
        {
            printf(" %c", string[i]);
            printf(" %i,", string[i]);
            string[i] = string[i];
        }
    }

    found = 0;
    for (int i = 0; i < 6; i++)
    {
        printf("%s", strings[i]);
        if (strings[i] == string)
        {
            printf(" EQUALS to your string.\n");
            found = i+1;
            break;
            //return 0;
        } else
        {
            printf(" DOES NOT EQUAL to your string.\n");
        }
    }
    if (found > 0)
    {
        printf("Found in %i step(s).\n", found);
    } else
    {
        printf("Not found at all.\n");
    }
    //return 1;

    /*
    Funkce strcmp (string compare) bere jako argumenty dva řetězce a vrací celočíselnou hodnotu, 
    která udává, zda jsou řetězce stejné, 
    nebo který z nich je „větší“ či „menší“ v lexikografickém (abecedním) pořadí.

    Návratové hodnoty:
    0: Řetězce jsou stejné.
    Záporné číslo: První řetězec je lexikograficky menší než druhý.
    Kladné číslo: První řetězec je lexikograficky větší než druhý.

    Lexikografické porovnání se provádí porovnáním znaků řetězců od začátku až do prvního rozdílu. 
    Využívá se k tomu ASCII hodnota jednotlivých znaků. 
    Například 'a' má nižší ASCII hodnotu než 'b', proto je "ahoj" menší než "bude".
    */

    found = 0;
    for (int i = 0; i < 6; i++)
    {
        printf("%s", strings[i]);
        if (strcmp(strings[i], string) == 0)
        {
            printf(" EQUALS to your string.\n");
            found = i+1;
            break;
            //return 0;
        } else
        {
            printf(" DOES NOT EQUAL to your string.\n");
        }
    }
    if (found > 0)
    {
        printf("Found in %i step(s).\n", found);
    } else
    {
        printf("Not found at all.\n");
    }
    //return 1;

}