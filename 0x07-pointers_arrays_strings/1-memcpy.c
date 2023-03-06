/**
 * _memcpy-copy n from src to des
 * @dest:destination address
 * @src:source address
 * @n:number of elements tobe copyed
 * Return:char value
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
while (dest[n] != '\0')
{
dest[i] = '\0';
}
return (dest);
}
