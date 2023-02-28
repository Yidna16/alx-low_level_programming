#include "main.h"
#include <stdio.h>
/**
 * _strcpy-copy from src to dest including '\0'
 * @dest: parameter pointer
 * @src: parameter pointer
 * Return: coped string
*/
char *_strcpy(char *dest, char *src)
{
int n;
for (n = 0; src[n] != '\0'; n++)
{
dest[n] = src[n];
}
dest[n++] = '\0';
return (dest);
}
