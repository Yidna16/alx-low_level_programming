#include "main.h"
/**
 * set_bit-sets the value of a bit to 1 at a given index
 * @n:pointer
 * @index:where bit located
 * Return:1 if it worked, or -1 if an error occurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
int i;
if (index > 63)
return (-1);
i = 1 << index;
*n = *n | i;
return (1);
}
