#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    // bez inicializace se musí uvést délka
    const int N = 2;
    char s[N][30];
    fgets(s[0], sizeof(s), stdin);
    fgets(s[1], sizeof(s), stdin);
    for (int si = 0; si < N; si++)
    {
        printf("String: %s", s[si]);
        // vrací 30
        printf("sizeof: %lu\n", sizeof(s[si]));
        // vrací n+1 ('je tam i enter')
        printf("strlen: %lu\n", strlen(s[si]));

        for (int i = 0, n = strlen(s[si]); i <= n; i++)
        {
            printf(" %c", s[si][i]);
            printf(" %i,", s[si][i]);
            if (s[si][i] == '\0') {
                printf(" (znak \\0 konec) na pozici %i (počítáno od 1, tj. strlen +1, po 10=ENTER)\n", i+1);
            } else {
                //printf("%i", s[si][i]);
            }
        }
    }
}