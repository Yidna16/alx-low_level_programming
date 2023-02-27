#include "main.h"
#include <stddef.h>
/**
* swap_int-swap two integer
* @a: input
* @b: input
* Return: void
*/
void swap_int(int *a, int *b)
{
*a = *a ^ *b;
*b = *a ^ *b;
*a = *b ^ *a;
}
