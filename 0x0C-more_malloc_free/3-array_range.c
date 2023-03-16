#include <stdlib.h>
/**
 * array_range-hold the value from min to max
 * @min:min value
 * @max:max value
 * Return:pointer to the new array
*/
int *array_range(int min, int max)
{
int *p, i = 0;
if (min > max)
{
return (NULL);
}
p = malloc((max - min + 1) * sizeof(int));
if (p == NULL)
{
return (NULL);
}
for (; min <= max; min++)
{
p[i] = min;
i++;
}
return (p);
}
