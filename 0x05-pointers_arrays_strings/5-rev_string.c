#include "main.h"
/**
 * rev_string-revers input string
 * @s: input
 * Return: void
*/
void rev_string(char *s)
{
int c = 0, d = 0;
char b;
while (s[c++])
d++;
for (c = d - 1; c >= d / 2; c--)
{
b = s[c];
s[c] = s[d - c - 1];
s[d - c - 1] = b;
}
}
