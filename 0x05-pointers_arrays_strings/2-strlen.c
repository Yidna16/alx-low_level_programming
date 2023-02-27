#include "main.h"
/**
* _strlen-count number of a string
* @s: input
* Return: 0
*/
 int _strlen(char *s)
{
int m = 0;
while (*s++)
m++;
return (m);
}
