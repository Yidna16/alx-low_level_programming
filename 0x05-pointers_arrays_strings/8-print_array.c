#include <stdio.h>
/**
 * print_array-print array elements
 * @a:input
 * @n: number of elements
 * return: void
*/
void print_array(int *a, int n)
{
for (n = 0;  a[n] != '\0'; n++)
{
printf("%d", a[n]);
printf(",");
printf(" ");
}
printf("\n");
}
