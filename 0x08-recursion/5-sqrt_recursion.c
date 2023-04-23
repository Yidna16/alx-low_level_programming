#include "main.h"
/**
 *_sqrt_recursion-square root of n
 * @n:input
 * Return:int
*/

int _sqrt_recursion(int n)
{
return (sqroot(n, 1));
}

/**
 * sqroot-square root
 * @n:input
 * @i:input
 * Return:int
 */
int sqroot(int n, int i)
{
if (n < 0)
{
return (-1);
}
if ((i * i) > n)
{
return (-1);
}
if (i * i == n)
{
return (i);
}
return (sqroot(n, i + 1));
}
