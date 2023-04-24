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
int i, j;
if (argc < 3)
{
printf("Error\n");
return (1);
}
i = atoi(argv[1]);
j = atoi(argv[2]);
printf("%d\n", i *j);
return (0);
}
