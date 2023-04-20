#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers-prints the parameters
 * @separator:which separates the numbers
 * @n:number of inputs
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list d;
va_start(d, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(d, const unsigned int));
if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(d);
}
