#include "main.h"
/**
 * pal-palindrome
 * @s:pointer to char
 * @i:position
 * Return:int
 */
int pal(char *s, int i)
{
if (i < 1)
{
return (1);
}

if (*s == *(s + i))
{
return (pal(s + 1, i - 2));
}
return (0);
}
/**
 * _strlen_recursion - size
 * @s: pointer to string params
 * Return: recursion
 */

int _strlen_recursion(char *s)
{
if (!*s)
{
return (0);
}
return (1 + _strlen_recursion(++s));
}
/**
 * is_palindrome-palindrome
 * @s:pointer to char
 * Return:int
 */
int is_palindrome(char *s)
{
int j = _strlen_recursion(s);

return (pal(s, j - 1));
}
