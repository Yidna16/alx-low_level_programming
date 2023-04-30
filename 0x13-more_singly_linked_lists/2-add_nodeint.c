#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint-add node at the beginning
 * @head:pointer to list
 * @n:argument
 * Return:pointer to a new list
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *p;
p = malloc(sizeof(listint_t));
if (p == NULL)
{
return (NULL);
}
if (*head == NULL)
{
*head = p;
p->next = NULL;
p->n = n;
return (p);
}
p->next = *head;
*head = p;
p->n = n;
return (p);
}
