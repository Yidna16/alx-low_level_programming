#include <stdlib.h>
/**
 * print_name-prints a name
 * @name:the name that willbe print out
 * @f:function pointer
 * Return:nothing
*/
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
f(name);
}
}