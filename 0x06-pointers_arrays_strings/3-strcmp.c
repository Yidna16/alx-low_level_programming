#include "main.h"
/**
 * _strcmp-compares two strings
 * @s1:input
 * @s2:input
 * Return:an int value
*/
int _strcmp(char *s1, char *s2)
{
int i;
if (*s1 == *s2)
{
i = 0;
}
else if (*s1 > *s2)
{
i = 15;
}
else
{
i = -15;
}
return (i);
}
