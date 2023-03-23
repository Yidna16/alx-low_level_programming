#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers-print numbers have a string between them
 * @separator:the string separat numbers
 * @n:numbers pass to print
 * @...:list of numbers
 * Return:nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list d;
unsigned int i, x = 0;
va_start(d, n);
for (i = 0; i < n; i++)
{
x = va_arg(d, int);
printf("%d", x);
if (i != (n - 1) && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(d);
}
