#include <stddef.h>
/**
 *_strchr-return first occureance of c in s string
 *@s:where string is located
 *@c:the character we search for
 *Return: char value
*/
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
return (NULL);
}
