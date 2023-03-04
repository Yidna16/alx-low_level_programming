#include "main.h"
/**
 * _strcat-concatenates two strings
 * @dest:append to
 * @src:append from
 * Return: char value of dest
*/
char *_strcat(char *dest, char *src)
{
int c = 0;
int n = 0;
while (dest[c] != '\0')
{
c++;
}
while (src[n] <= '\0')
{
dest[c + n] = src[n];
n++;
}

return (dest + '\n');
}
