#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index-will add new node at index
 * @head:pointer to the head pointer
 * @idx:where the node will be added
 * @n:will be the value of new node data(n)
 * Return:the address of the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int j;
listint_t *p;
listint_t *i = malloc(sizeof(listint_t));
p = *head;
if ((*head)->next == NULL)
{
*head = i;
i->n = n;
i->next = NULL;
return (i);
}
for (j = 0; j < idx-1; j++)
{
p = p->next;
}
if (p->next == NULL)
{
p->next = i;
i->n = n;
i->next = NULL;
return (i);
}
i->n = n;
i->next = p->next;
p->next = i;
return (i);
}
