#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index-delet node at index
 * @head:pointer to a list
 * @index:where the node located
 * Return:1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i = 0;
listint_t *p;
listint_t *h;
h = *head;
if (*head != NULL)
{
if (index < 2)
{
*head = h->next;
free(h);
return (1);
}
while (i < index - 1)
{
h = h->next;
i++;
}
p = h->next->next;
free(h->next);
h->next = p;
return (1);
}
return (-1);
}
