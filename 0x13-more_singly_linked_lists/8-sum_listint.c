#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint-returns the sum of all the data(n) of a listint_t linked list
 * @head:pointer to a list
 * Return:sum
*/
int sum_listint(listint_t *head)
{
int i = 0;
listint_t *p;
p = head;
if (head == NULL)
{
return (0);
}
while (p != NULL)
{
i += p->n;
p = p->next;
}
return (i);
}
