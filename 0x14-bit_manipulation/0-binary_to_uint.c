#include "main.h"
/**
 * binary_to_uint-convert binary to decimal
 * @b:pointer to first char
 * Return:converted value
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int i = 0, x = 1;
int k = 0, y = 0;
if (b == NULL)
return (0);
while (b[y] != '\0')
{
y++;
}
for (k = y - 1; k >= 0; k--)
{
if (b[k] != '1' && b[k] != '0')
return (0);
if (b[k] == '1')
i += x;
x *= 2;
}
return (i);
}
