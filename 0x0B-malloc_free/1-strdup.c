#include <stdlib.h>
/**
 * _strdup-malloc depulecate of the parameter
 * @str:input
 * Return:pointer to the depulecated
*/
char *_strdup(char *str)
{
char *i;
int j = 0, k = 0;
while (*(str + j))
j++, k++;
if (str == NULL)
{
return (NULL);
}
i = malloc(sizeof(char) * k);
if (i == NULL)
{
return (NULL);
}
j = 0;
while (k >= j)
{
i[j] = str[j];
j++;
}
return (i);
}
