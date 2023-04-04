#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index-delet node at index
 * @head:pointer to the head pointer
 * @index:where the node will be indexed
 * Return:1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int j;
listint_t *p;
listint_t *i;
listint_t *o;
p = *head;
if (*head != NULL)
{
if (index < 2)
{
*head = (*head)->next;

free(p);
return (1);
}

for (j = 0; j < index - 1; j++)
{
p = p->next;
}
i = p->next->next;
o = p->next;
p->next = i;
free(o);
return (1);
}
return (-1);
}
