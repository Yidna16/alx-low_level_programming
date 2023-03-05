#include "main.h"
/**
 * _strcmp-compares two strings
 * @s1:input
 * @s2:input
 * Return:an int value
*/
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] == s2[i] && s1[i] != '\0')
{
i++;
}
return (s1[i] - s2[i]);
}
