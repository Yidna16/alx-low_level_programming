#include <unistd.h>
/**
 * _putchar:print out
 * @c:input
 * Return:int value
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
