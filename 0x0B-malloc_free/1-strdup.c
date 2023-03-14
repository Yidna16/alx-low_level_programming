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
if (str == 0x00)
{
return (0x00);
}
i = malloc(sizeof(char) * j);
if (i == 0x00)
{
return (0x00);
}
k = 0;
while (k <= j)
{
i[k] = str[k];
k++;
}
return (i);
}
