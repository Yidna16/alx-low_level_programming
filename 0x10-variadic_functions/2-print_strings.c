#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings-print strings
 * @separator:separator character
 * @n:number of parameters
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list d;
va_start(d, n);
for (i = 0; i < n; i++)
{
printf("%s", va_arg(d, char *));
if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}
if (separator == NULL)
{
printf("(nil)");
}
}
printf("\n");
va_end(d);
}
