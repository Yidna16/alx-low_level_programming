#include "main.h"
/**
 * get_bit-returns the value of a bit at a given index
 * @n:input
 * @index:bit located
 * Return:0 or 1
*/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int i = 0;
if (i > index)
return (-1);
n = n >> index;
return (n & 1);
}
