#include "main.h"
/**
* puts_half-print second half
* @str: input
* return: void
*/
void puts_half(char *str)
{
int c = 0;
int n;
while (str[c] != '\0')
{
c++;
}
if (c  % 2 != 0)
{
n = c - 1 / 2;
}
else
{
n = c / 2;
}
for (; n < c; n++)
{
_putchar(str[n]);
}
_putchar('\n');
}
