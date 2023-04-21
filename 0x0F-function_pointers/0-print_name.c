#include <stddef.h>
/**
 * print_name-print name
 * @name:name input
 * @f:function pointer
*/
void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
{
f(name);
}
}
