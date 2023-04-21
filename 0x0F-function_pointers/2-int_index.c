#include <stddef.h>
/**
 * int_index-a function that searches for an integer
 * @array:array
 * @size:size of the array
 * @cmp:function pointer
 * Return:int value
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size > 0 && array != NULL && cmp != NULL)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) == 0)
continue;
return (i);
}
}
return (-1);
}
