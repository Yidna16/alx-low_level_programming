#include <stddef.h>
/**
 * array_iterator-executes a function on each element of an array
 * @array:array
 * @size:size of the array
 * @action:funtion pointer
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (size > 0 && (action != NULL && array != NULL))
{
for (i = 0; array[i] < array[size]; i++)
{
action(array[i]);
}
}

}
