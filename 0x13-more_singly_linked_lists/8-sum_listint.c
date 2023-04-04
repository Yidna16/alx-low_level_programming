#include "lists.h"
/**
 * sum_listint-return the sum of data(n) in the list
 * @head:head of the list
 * Return:sum
*/
int sum_listint(listint_t *head)
{
int i = 0;
listint_t *p;
p = head;
while (p->next != NULL)
{
p = p->next;
i += p->n;
}
return (i);
}
