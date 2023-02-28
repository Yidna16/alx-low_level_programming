#include <stdio.h>
/**
 * print_array-print array elements
 * @a:input
 * @n: number of elements
 * return: void
*/
void print_array(int *a, int n)
{
int c;
for (c = 0; c < n; c++)
{
printf("%d", a[c]);
if (c != n - 1)
{
printf(",");
printf(" ");
}
}
printf("\n");
}
