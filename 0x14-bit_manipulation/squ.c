#include "main.h"
/**
 * squ:return x power of y
 * @x:input
 * @y:input
 * Return:powered value
*/
int squ(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * squ(x, y - 1));
}
