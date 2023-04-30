#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2-frees a list
 * @head:pointer to a list
*/
void free_listint2(listint_t **head)
{
listint_t *p;
p = *head;
if (*head != NULL)
{
while (p->next != NULL)
{
p = p->next;
free(*head);
*head = p;
}
free(p);
*head = NULL;
}
else exit(1);
}
