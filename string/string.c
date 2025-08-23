#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h> // pro malloc a free

char * get_upper(char s[]);

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

    for (int i = 0, n = strlen(s); i <= n; i++)
    {   
        if (s[i] == '\0') {
            printf(" %c", s[i]);
            printf(" %i,", s[i]);
            printf(" (znak \\0 konec) na pozici %i (počítáno od 1, tj. strlen +1, po 10=ENTER)\n", i+1);
        } else if (s[i] >= 'a' && s[i] <= 'z') {
            printf(" %c", s[i]);
            printf(" %i,", s[i]);
            printf(" %c,", s[i]-32);
            printf(" %i,", s[i]-32);
        } else
        {
            printf(" %c", s[i]);
            printf(" %i,", s[i]);
        }
        
    }

    char *returned_str = get_upper(s);


    printf("%s", returned_str);

    free(returned_str);
    
}

char * get_upper(char s[])
{

    //char *uppers = s;
    char *uppers = malloc(strlen(s));
    for (int i = 0, n = strlen(s); i <= n; i++)
    {
        uppers[i] = toupper(s[i]);
    }
    return uppers;
}