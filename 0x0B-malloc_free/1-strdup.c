#include <stdlib.h>
/**
 * _strdup-malloc depulecate of the parameter
 * @str:input
 * Return:pointer to the depulecated
*/
char *_strdup(char *str)
{
char *duplicate_str;
int i = 0, len = 0;

if (str == NULL)
return (NULL);

while (*(str + i))
len++, i++;
len++;

duplicate_str = malloc(sizeof(char) * len);

if (duplicate_str == NULL)
return (NULL);

i = 0;
while (i < len)
{
*(duplicate_str + i) = *(str + i);
i++;
}

return (duplicate_str);
}
