#include <unistd.h>
/**
 * _putchar-wirte to stdout unsigned input char
 * @c:input char
 * Return:int value of input char
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
