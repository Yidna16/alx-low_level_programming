/**
 *_strncpy-coping only n number of elements
 *@dest:destination
 *@src:source
 *@n:input
 *Return:char value
*/
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
