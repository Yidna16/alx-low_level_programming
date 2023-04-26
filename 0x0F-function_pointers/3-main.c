#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main-prints result
 * @argc:number of argument passed in
 * @argv:array that hold argumnets
 * Return:int value
*/

int main(int argc, char *argv[])
{
int i, j;
char *op;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
op = argv[2];
i = atoi(argv[1]);
j = atoi(argv[3]);
if (get_op_func(op) == NULL || op[1] != '\0')
{
printf("Error\n");
exit(99);
}
if ((*op == '/' && j == 0) || (*op == '%' && j == 0))
{
printf("Error\n");
exit(100);
}
printf("%d\n", get_op_func(op)(i, j));
return (0);
}
