/**
 * _strspn-return bytes which only from accept
 * @s:initial segement
 * @accept:compare to
 * Return:int value
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int n, i, b;
n = 0;
for (i = 0; s[i] != '\0' && s[i] != 44; i++)
{
for (b = 0; accept[b] != '\0'; b++)
{
if (s[i] == accept[b])
{
n++;
}
}
}
return (n);
}
