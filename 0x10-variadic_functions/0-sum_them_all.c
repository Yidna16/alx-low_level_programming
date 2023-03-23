#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all-sum up all it's arguments
 * @n:first unchanged argument
 *
 * Return:the sum value
*/
int sum_them_all(const unsigned int n, ...)
{
va_list d;
unsigned int i;
int x = 0;
if (n == 0)
{
return (0);
}
va_start(d, n);
for (i = 0; i < n; i++)
{
x += va_arg(d, int);
}
va_end(d);
return (x);
}
