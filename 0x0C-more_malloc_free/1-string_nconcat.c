#include <stdlib.h>
/**
 * string_nconcat-concatenat only n amount char
 * @s1:destination
 * @s2:source
 * @n:number of elements will be concatnate
 * Return:pointer to new string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0, j = 0, l;
char *p;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i] != '\0')
i++;
while (s2[j] != '\0')
j++;
if (n >= j)
p = malloc(sizeof(char) * (i + j) +1);
else
p = malloc(sizeof(char) * (i + n) + 1);
if (p == NULL)
return (NULL);
l = 0;
while (i > l)
{
p[l] = s1[l];
l++;
}
while ((i + n) > l)
{
p[l] = s2[l - i];
l++;
}
p[l] = '\0';
return (p);
}
