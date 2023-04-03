#include "lists.h"
#include <stdio.h>
/**
 * print_listint-print elements of the node
 * @h:pointer to the head of the list
 * Return:number of nodes in the list
*/
size_t print_listint(const listint_t *h)
{
int i = 0;
while (h != NULL)
{
printf("%i\n", h->n);
h = h->next;
i++;
}

return (i);
}
