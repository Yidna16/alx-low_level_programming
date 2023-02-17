#include<stdio.h>

int main(void)
{
char r;
int t;
long int y;
long long int u;
float i;
printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(r));
printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(t));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(y));
printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(u));
printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(i));
return (0);
}
