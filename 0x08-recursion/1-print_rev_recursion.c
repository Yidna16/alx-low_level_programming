#include "main.h"
/**
 * _print_rev_recursion-print recursively in reverse
 * @s:pointer to first char
 * Return:void
*/
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
s++;
_print_rev_recursion(s);
s--;
_putchar(*s);
}
