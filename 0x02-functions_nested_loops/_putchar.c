#include <unistd.h>
/**
 * _putchar-display a character
 * Return: 0
 * &c: print the character &c
*/

int _putchar(char c)
{
return (write(1, &c, 1));
}
