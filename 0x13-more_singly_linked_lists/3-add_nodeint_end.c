#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end-add at the end of list
 * @head:pointer to list
 * @n:argument
 * Return:pointer to new list
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *p;
listint_t *i;
p = *head;
i = malloc(sizeof(listint_t));
if (i == NULL)
{
return (NULL);
}
if (*head == NULL)
{
*head = i;
i->n = n;
i->next = NULL;
return (i);
}
while (p->next != NULL)
{
p = p->next;
}
p->next = i;
i->n = n;
i->next = NULL;
return (i);
}
