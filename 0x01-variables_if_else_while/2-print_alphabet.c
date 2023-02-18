#include <stdio.h>
/**
* main-display alphabet
* Return: always 0
*/
int main(void)
{
char s[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '\0'};
int i = 0;
while (s[i] != '\n' && s[i] != '\0')
{
putchar(s[i]);
i++;
}
putchar('\n');
return (0);


}
