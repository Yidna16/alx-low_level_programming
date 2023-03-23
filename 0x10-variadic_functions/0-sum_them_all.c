#include "variadic_functions.h"
/**
 * sum_them_all-sum up all it's arguments
 * @n:first unchanged argument
 * @...:variabel argument
 * return:the sum value
*/
int sum_them_all(const unsigned int n, ...)
{
va_list d;
unsigned int i, x = 0;
va_start(d, n);
for (i = 0; i < n; i++)
{
x += va_arg(d, const unsigned int);
}
va_end(d);
return (x);
}
