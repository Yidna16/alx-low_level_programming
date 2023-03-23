#include "variadic_functions.h"
/**
 * print_strings-print strings separatelly
 * @separator:separator string
 * @n:number of strings
 * @...:variabel argument
 * Return:nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
char *x;
va_list d;
va_start(d, n);
for (; i < n; i++)
{
x = va_arg(d, char *);
if (x != NULL)
{
printf("%s", x);
}
else
{
printf("(nil)");
}
if (i != (n - 1) && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(d);
}
