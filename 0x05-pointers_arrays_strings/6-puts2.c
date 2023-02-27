#include "main.h"
/**
* puts2-print out numbers have 0 when % 2
* @str: input
* Return: void
*/
void puts2(char *str)
{
int c = 0;
int d;
while (str[c] != '\0')
{
c++;
}
for (d = 0; d < c; d += 2)
{
_putchar(str[d]);
}
_putchar('\n');
}
