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
char *s;
va_list d;
va_start(d, n);
for (i = 0; i < n; i++)
{
s = va_arg(d, char *);
if (s != NULL)
{
printf("%s", s);
if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
else
{
printf("nil");
}
}
va_end(d);
printf("\n");
}
