#include "function_pointers.h"
/**
 * array_iterator-print each elements of the array
 * @array:array
 * @size:size of the array
 * @action:function pointer
 * Return:nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array != NULL && action != NULL && size > 0)
{
for (i = 0; array[i] < array[size]; i++)
{
action(array[i]);
}
}
}
