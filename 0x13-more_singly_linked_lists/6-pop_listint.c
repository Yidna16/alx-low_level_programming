#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint-delet head of list
 * @head:pointer to list
 * Return:the head node’s data (n)
*/
int pop_listint(listint_t **head)
{
int i;
listint_t *p;
p = *head;
i = (*head)->n;
if (*head == NULL)
{
return (0);
}
*head = (*head)->next;
free(p);
return (i);
}
