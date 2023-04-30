#include <stdio.h>
#include "lists.h"
/**
 * print_listint-prints all the elements of a listint_t list
 * @h:pointer to head of the list
 * Return:number of elements
*/
size_t print_listint(const listint_t *h)
{
size_t i = 0;
const listint_t *p;
p = h;
while (p != NULL)
{
printf("%d\n", p->n);
i++;
p = p->next;
}
return (i);
}
