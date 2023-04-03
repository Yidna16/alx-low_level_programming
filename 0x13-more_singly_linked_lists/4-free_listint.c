#include "lists.h"
#include <stdlib.h>
/**
 * free_listint-free the list
 * @head:head of the list
 * Return: void
*/
void free_listint(listint_t *head)
{
listint_t *p;
listint_t *i;
p = head;
while (p != NULL)
{
i = p->next;
free(p);
p = i;
}
}
