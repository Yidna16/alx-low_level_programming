#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end-append a new node
 * @head:pointer to a pointer
 * @n:number will insert to the listint_t n section
 * Return:the new element address
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *i;
listint_t *tmp = *head;
i = malloc(sizeof(listint_t));
if (i == NULL)
{
return (0);
}
i->n = n;
i->next = NULL;
if (*head == NULL)
{
*head = i;
return (i);
}
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = i;
return (i);
}
