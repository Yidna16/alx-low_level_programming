#include "main.h"
/**
* print_last_digit-display last number
* Return: 0
* @i: input
*/
int print_last_digit(int i)
{
int n = i % 10;
if (i < 0)
{
n = n * -1;
}
_putchar(n + '0');
return (n);
}
