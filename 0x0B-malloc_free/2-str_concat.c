#include <stdlib.h>
/**
 * str_concat-return concatenat one
 * @s1:destination
 * @s2:source
 * Return:s1 value
*/
char *str_concat(char *s1, char *s2)
{
char *duplicate_str;
int i = 0, len = 0, j = 0, k = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (*(s1 + j))
i++, j++;
while (*(s2 + k))
len++, k++;
len++;
duplicate_str = malloc(sizeof(char) * (i + len));

if (duplicate_str == NULL)
return (NULL);

j = 0, k = 0;
while (j < i)
{
*(duplicate_str + j) = *(s1 + j);
j++;
}
while (k < len)
{
*(duplicate_str + j) = *(s2 + k);
j++;
k++;
}
return (duplicate_str);
}
