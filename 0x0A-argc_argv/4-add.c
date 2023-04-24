#include <stdio.h>
#include <stdlib.h>
/**
 * main-print its name
 * @argv:array of arguments
 * @argc:number of arguments
 * Return:0
*/
int main(int argc, char *argv[])
{
int m, n, i, j, k;

m = 0;

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] > '9' || argv[i][j] < '0')
{
printf("Error\n");
return (1);
}
}
}

for (k = 1; k < argc; k++)
{
n = atoi(argv[k]);
if (n >= 0)
{
m += n;
}
}

printf("%d\n", m);
return (0);
}
