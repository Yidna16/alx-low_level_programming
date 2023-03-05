#include "main.h"
/**
 * reverse_array-print array elements in revers
 * @a:number of array elements
 * @n:number will be given to swap
 * Return: void
*/
void reverse_array(int *a, int n)
{
int i = 0;
int j = n - 1;
int s;
while (i < j)
{
s = a[i];
a[i] = a[j];
a[j] = s;
i++;
j--;
}
}
