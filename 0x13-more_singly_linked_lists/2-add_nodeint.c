#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint-prepend a new node
 * @head:pointer to a pointer
 * @n:a numbers insert to n section of listint_t
 * Return:the new address of element
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *i;
i = malloc(sizeof(listint_t));
if (i == NULL)
{
return (0);
}
i->n = n;
i->next = NULL;
i->next = *head;
*head = i;
return (i);
}
