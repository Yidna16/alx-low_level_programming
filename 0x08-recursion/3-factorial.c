/**
 * factorial-print out factorial of n
 * @n:input
 * Return:int value
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n <= 1)
{
return (1);
}
return (n * factorial(n - 1));
}
