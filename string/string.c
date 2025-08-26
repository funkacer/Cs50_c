#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h> // pro malloc a free

char * get_uppers(char s[]);

int main(void)
{
    // bez inicializace se musí uvést délka
    char s[30];
    fgets(s, sizeof(s), stdin);
    printf("String: %s", s);
    // vrací 30
    printf("sizeof: %lu\n", sizeof(s));
    // vrací n+1 ('je tam i enter')
    printf("strlen: %lu\n", strlen(s));

    // vč '\0'
    for (int i = 0, n = strlen(s); i <= n; i++)
    {
        printf(" %c", s[i]);
        printf(" %i,", s[i]);
        if (s[i] == '\0') {
            printf(" (znak \\0 konec) na pozici %i (počítáno od 1, tj. strlen +1, po 10=ENTER)\n", i+1);
        } else {
            //printf("%i", s[i]);
        }
    }

    // vč '\0'
    for (int i = 0, n = strlen(s); i <= n; i++)
    {   
        if (s[i] == '\0') {
            printf(" %c", s[i]);
            printf(" %i,", s[i]);
            printf(" (znak \\0 konec) na pozici %i (počítáno od 1, tj. strlen +1, po 10=ENTER)\n", i+1);
        } else if (s[i] >= 'a' && s[i] <= 'z') {
            printf(" %c", s[i]);
            printf(" %i,", s[i]);
            // velké znaky jsou v ASCII o 32 znaků níž
            printf(" %c,", s[i]-32);
            printf(" %i,", s[i]-32);
        } else
        {
            printf(" %c", s[i]);
            printf(" %i,", s[i]);
        }   
    }

    /*
    Dereference ukazatele: 
    Když je hvězdička použita před jménem již deklarovaného ukazatele, 
    jde o operátor dereference. Tento operátor přistupuje k hodnotě, 
    která je uložena na adrese, na kterou ukazatel ukazuje. 
    Například, *ukazatel_na_cislo = 5; změní hodnotu proměnné, 
    na kterou ukazatel_na_cislo ukazuje, na 5.
    */
    char *returned_str = get_uppers(s);
    printf("%s", returned_str);

    // vč '\0'
    for (int i = 0, n = strlen(returned_str); i <= n; i++)
    {   
        if (returned_str[i] == '\0') {
            printf(" %c", returned_str[i]);
            printf(" %i,", returned_str[i]);
            printf(" (znak \\0 konec) na pozici %i (počítáno od 1, tj. strlen +1, po 10=ENTER)\n", i+1);
        } else
        {
            printf(" %c", returned_str[i]);
            printf(" %i,", returned_str[i]);
        }   
    }

    // DŮLEŽITÉ JINAK HROZÍ MEMORY LEAK!!!
    free(returned_str);

}

char * get_uppers(char s[])
{
    /*
    Funkce malloc() (memory allocation) alokuje blok paměti v paměti haldy.
    Její argument určuje, kolik bajtů paměti má být alokováno.
    V tomto případě alokuje strlen(s) + 1 bajtů.
    Pokud je alokace úspěšná, malloc() vrátí ukazatel (adresu) na začátek alokovaného bloku.
    Pokud alokace selže (např. není k dispozici dostatek paměti), vrátí NULL.
    char *uppers - Tato část deklaruje ukazatel na znak s názvem uppers.
    Pamatujte, že po použití alokované paměti byste ji měli uvolnit pomocí funkce free(uppers),
    abyste předešli úniku paměti.
    */
    char *uppers = malloc(strlen(s) + 1);  // +1 pro '\0'
    if (uppers == NULL) return NULL;      // kontrola alokace

    // AI verze: for (int i = 0; s[i] != '\0'; i++)
    // BEZ '\0' (i < n); řetězec se ukončí následně (doporučeno AI jako bezpečnější řešení)
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        uppers[i] = toupper(s[i]);
    }
    uppers[strlen(s)] = '\0';  // ukončení řetězce

    return uppers;
}
