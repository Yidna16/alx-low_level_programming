#include "main.h"
/**
* puts2-print out numbers have 0 when % 2
* @str: input
* Return: void
*/
void puts2(char *str)
{
int c = 0;
while (str[c] % 2 == 0)
{
_putchar(str[c]);
c += 2;
}
_putchar('\n');
}
