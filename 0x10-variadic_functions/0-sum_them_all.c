#include <stdarg.h>
/**
 * sum_them_all-add its parameter
 * @n:number of parameters
 * Return:sum value
*/
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int k = 0;
va_list d;
va_start(d, n);
for (i = 0; i < n; i++)
{
k += va_arg(d, const unsigned int);
}
return (k);
va_end(d);
}
