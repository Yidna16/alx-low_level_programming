#include "main.h"
/**
 * _puts_recursion-recursively writes given input to stdout
 * @s:pointer to first character
 * Return: void
*/
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
s++;
_puts_recursion(s);
}
