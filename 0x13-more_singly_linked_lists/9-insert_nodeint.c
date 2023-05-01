#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index-insert node at index
 * @head:pointer to a list
 * @idx:index where node should be add
 * @n:argument
 * Return:new pointer
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = 0;
listint_t *p;
listint_t *h;
h = malloc(sizeof(listint_t));
if (h == NULL)
{
return (NULL);
}
if (idx == 0)
{
h->next = head->next;
*head = h;
h->n = n;
return (h);
}
p = *head;
while (i < idx - 1)
{
p = p->next;
i++;
}
if (p->next == NULL)
{
p->next = h;
h->next = NULL;
h->n = n;
return (h);
}
h->next = p->next;
p->next = h;
h->n = n;
return (h);
}
