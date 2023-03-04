#include <unistd.h>
/**
 * _putchar-outcast integer value of char
 * Return: int value
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
