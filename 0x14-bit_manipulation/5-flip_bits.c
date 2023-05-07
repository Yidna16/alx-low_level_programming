/**
 * flip_bits-returns the number of bits flip change one number to another
 * @n:input
 * @m:input
 * Return:flip count
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i = 0, j;
for (j = n ^ m; j != 0; j = j >> 1)
{
i += j & 1;
}
return (i);
}
