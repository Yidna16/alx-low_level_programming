#include <unistd.h>
/**
 * _putchar-returns int value of the parameter value
 * @c:aregument
 * Return:integer value
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
