#include <stddef.h>
#include <stdlib.h>
/**
 * array_iterator-executes a function on each element of an array
 * @array:array
 * @size:size of the array
 * @action:funtion pointer
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (action != NULL && array != NULL && size > 0)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}

}
