#include <unistd.h>
/**
 * _putchar-print char
 * @c:char that will be printed
 * Return:int value
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
