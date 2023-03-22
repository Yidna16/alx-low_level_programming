#include <stdlib.h>
/**
 * int_index-search an integer
 * @array:array
 * @size:size of the array
 * @cmp:function pointer
 * Return:int value
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0, k = 0;
if (size <= 0)
{
return (-1);
}
if (array != NULL && cmp != NULL)
{
while (i < size)
{
if (cmp(array[i]))
{
return (i);
}
i++;
}
}
return (k);
}
