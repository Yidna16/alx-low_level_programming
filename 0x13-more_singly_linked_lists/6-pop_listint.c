#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint-delets the head and return the head node data
 * @head:head of the list
 * Return: 0
*/
int pop_listint(listint_t **head)
{
int p = 0;
listint_t *y;
y = *head;
if (*head == NULL)
{
return (0);
}
p = (*head)->n;
*head = y->next;
free(y);
return (p);
}