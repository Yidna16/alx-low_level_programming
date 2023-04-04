#include "lists.h"
/**
 * get_nodeint_at_index-return the given index node
 * @head:head of the list
 * @index:the node located at
 * Return:the index node address
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
listint_t *p;
p = head;
if (head == NULL)
{
return (NULL);
}
for (i = 0; i < index; i++)
{
p = p->next;
}
return (p);
}
