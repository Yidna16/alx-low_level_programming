/**
 * factorial-return factorial of n
 * @n:given number
 * Return:factorial value
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 1)
{
return (1);
}
return (n * factorial(n - 1));
}
