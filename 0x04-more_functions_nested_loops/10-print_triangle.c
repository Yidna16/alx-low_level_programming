#include "main.h"
/**
* print_triangel-print triangel using #
* Return: 0
* @size: input
*/
void print_triangle(int size)
{
int i;
int j;
int k;
for (i = 1; i <= size; i++)
{
for (j = i; j < size; j++)
{
_putchar(32);
}
for (k = 1; k <= i; k++)
{
_putchar(35);
}
_putchar('\n');
}
_putchar('\n');
}
