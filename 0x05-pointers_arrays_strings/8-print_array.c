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
while (a[n++])
{
c++;
}
for (n = 0;  a[n] < c-1; n++)
{
if (a[n] != c-1)
{
printf("%d", a[n]);
printf(",");
printf(" ");
}
}
printf("\n");
}
