#include <stdio.h>

int main(void)
{
int dollars = 1;
while(1==1)
{
printf("Here's $%i. Double it and give it to the next person? ", dollars);
char c;
scanf("%c ", &c);
if ((c == 'y' || c == 'Y') && dollars != 0)
{
dollars *= 2;
}
else
{
break;
}
}
}
