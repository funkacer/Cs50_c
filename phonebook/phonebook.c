#include <stdio.h>
#include <string.h>

typedef struct
{
    char *name;
    char *number;
} person;


int main(void)
{
    person people[3];

    people[0].name = "Jirka";
    people[0].number = "123-123-123";

    people[1].name = "Lucka";
    people[1].number = "223-123-123";

    people[2].name = "Vojta";
    people[2].number = "323-123-123";

    char s[30];
    printf("Name: ");
    fgets(s, sizeof(s), stdin);

    // strcmp nefunguje primo, protoze s obsahuje znak ASCII 10 (ENTER)

    // ostranim 10, ale pridam '\0'
    char name[strlen(s)];
    for (int i = 0, n = strlen(s); i < n; i++) {
        if (s[i] == 10) {
            printf(" %c", s[i]);
            printf(" %i,", s[i]);
            printf(" (znak ENTER konec) na pozici %i (počítáno od 1, tj. strlen +1, po 10=ENTER)\n", i+1);
        } else
        {
            printf(" %c", s[i]);
            printf(" %i,", s[i]);
            name[i] = s[i];
        }
    }
    name[strlen(s)] = '\0';

    printf("String: %s", name);
    printf("Sizeof people: %lu\n", sizeof(people));

    int found = 0;
    for (int i = 0; i < 3; i++)
    {
        printf("Name: %s (number: %s)", people[i].name, people[i].number);
        if (strcmp(people[i].name, name) == 0)
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
        printf("Phone of %s is %s.\n", people[found-1].name, people[found-1].number);
    } else
    {
        printf("Not found at all.\n");
    }
    //return 1;
    
}