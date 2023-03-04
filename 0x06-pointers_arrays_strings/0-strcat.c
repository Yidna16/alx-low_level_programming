#include "main.h"
/**
 * _strcat-concatenates two strings
 * @dest:append to
 * @src:append from
 * Return: char value of dest
*/
char *_strcat(char *dest, char *src)
{
int c = 0, n = 0;
while (dest[c] != '\0')
{
c++;
}
while (src[n] != '\0')
{
dest[c] = src[n];
c++;
n++;
}
dest[c] = '\0';
return (dest);
}
