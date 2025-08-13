#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

int main(void)
{
    long long dollars = 1;
    char line[256];

    while(true)
    {
        printf("Tady je $%lli. Zdvojnásobit a dát to dalšímu člověku? (y/n) ", dollars);

        if (fgets(line, sizeof(line), stdin) == NULL)
        {
            // Chyba při čtení vstupu, ukončíme program
            break;
        }

        char user_answer = line[0];

        if ((user_answer == 'y' || user_answer == 'Y'))
        {
            // Ochrana proti přetečení
            if (dollars > LLONG_MAX / 2)
            {
                printf("Oops! Dosáhli jsme maximální hodnoty. Končíme.\n");
                break;
            }
            dollars *= 2;
        }
        else
        {
            break;
        }
    }
    printf("Tak dobře, končíme. Měl jsi $%lli.\n", dollars);
    return 0;
}