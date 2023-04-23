#include "main.h"
/**
 * is_prime_number-prime
 * @n:input
 * Return:int
 */
int is_prime_number(int n)
{
if ((!(n % 2) && n != 2) || n < 2)
{
return (0);
}
else
{
return (prime(3, n));
}
}
/**
 * prime-number is prime?
 * @n:input
 * @i:input
 * Return:int
 */
int prime(int n, int i)
{
if (i % n == 0)
{
return (0);
}
else if (i / 2 > n)
{
return (prime(n + 2, i));
}
else
{
return (1);
}
}
