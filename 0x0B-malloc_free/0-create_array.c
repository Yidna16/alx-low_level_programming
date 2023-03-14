#include <stdlib.h>
/**
 * create_array-assign and creat array
 * @size:the size on array
 * @c:assigned element
 * Return:pointer if success ,NULL if failed
*/
char *create_array(unsigned int size, char c)
{
unsigned int j = 0;
char *i;
if (size == 0)
{
return (0x00);
}
i = (char *) malloc(sizeof(char) * size);
while (j < size)
{
*(i + j) = c;
j++;
}
return (i);
free (i);
}
