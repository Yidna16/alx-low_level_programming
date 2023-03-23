#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all-sum up all it's arguments
 * @n:first unchanged argument
 * @...:variabel argument 
 * return:the sum value
*/
int sum_them_all(const unsigned int n, ...)
{
unsigned int i, x = 0;
va_list d;
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
