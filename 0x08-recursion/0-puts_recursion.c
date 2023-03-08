#include "main.h"
#include <stddef.h>
/**
 * _puts_recursion-recursively writes given input to stdout
 * @s:pointer to first character
 * Return: void
*/
void _puts_recursion(char *s)
{
_putchar(*s);
s++;
if (*s != '\0')
{
_puts_recursion(s);
}
else if (s != NULL)
{
_putchar('\n');
}
}
