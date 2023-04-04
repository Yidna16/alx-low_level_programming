#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2-frees and set head to NULL
 * @head:head of the list
 * Return: void
*/
void free_listint2(listint_t **head)
{
listint_t *p;
listint_t *i;
p = *head;
while (p != NULL)
{
i = p->next;
if (p != *head)
{
*head = NULL;
}
free(p);
p = i;
}
}
