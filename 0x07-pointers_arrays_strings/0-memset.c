/**
 * _memset-changes some value with a given one
 * @s:memory addres where the value will be put
 * @b:given value
 * @n:size of elements will gone change
 * Return: char value
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
