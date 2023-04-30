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
p = head;
p = malloc(sizeof(listint_t));
if (p == NULL)
{
return (NULL);
}
while (p != NULL)
{
p = p->next;
j++;
}
p = head;
if (j <= index)
{
for (; i < index; i++)
{
p = p->next;
}
return (p);
}
return (NULL);
}
