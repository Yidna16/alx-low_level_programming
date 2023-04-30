#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index-get indexed node
 * @head:pointer to a list
 * @index:where the node located
 * Return:pointer to node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0, j = 0;
listint_t *p;
listint_t *h;
h = head;
p = malloc(sizeof(listint_t));
if (p == NULL)
{
return (NULL);
}
while (h->next != NULL)
{
h = h->next;
j++;
}
if (j >= index)
{
h = head;
for (; i < index; i++)
{
h = h->next;
}
p->next = h;
p->n = h->n;
return (p);
}
return (NULL);
}
