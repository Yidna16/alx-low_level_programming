#include <stdio.h>
/**
* main-display fizz & buzz for 3 & 5 multipels
* Return: 0
*/
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 15 == 0)
{
printf("fizzbuzz");
}
else if (i % 5 == 0)
{
printf("buzz");
}
else if (i % 3 == 0)
{
printf("fizz");
}
else
{
printf("%d", i);
}
if (i != 100)
{
printf(" ");
}
}
printf("\n");
return (0);
}
