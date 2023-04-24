#include <stdio.h>
/**
 * main-print its name
 * @argv:array of arguments
 * @argc:number of arguments
 * Return:0
*/
int main(int argc, char *argv[])
{
(void)*argv;
if (argc > 1)
{
printf("%d\n", argc - 1);
}
else
{
printf("0\n");
}
return (0);
}
