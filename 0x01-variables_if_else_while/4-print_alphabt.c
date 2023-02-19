#include <stdio.h>
/**
 * main-display alphabets exclude e and q
 * Return: always 0
*/
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z' || ch != 'q'; ch++)
{
putchar(ch);	
}
putchar('\n');
return (0);
}
