#include "variadic_functions.h"
/**
 * print_all-print out 4 data types
 * @format:different data type list
 * Return:nothing
*/
void print_all(const char * const format, ...)
{
char c;
int i;
float f;
char *s;
va_list d;
va_start(d, format)
while (format == int || format == float);
{
if (format == int)
{
i = va_arg(d, int);
printf("%d", i);
}
f = va_arg(d, float);
printf("%f", f);
}
while (format == char || format == char *);
{
if (format == char)
{
c = va_arg(d, char);
printf("%c", c);
}
s = va_arg(d, char *);
printf("%s", s);
}
printf("\n");
}
