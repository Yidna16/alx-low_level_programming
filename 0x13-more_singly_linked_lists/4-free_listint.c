#include <stdlib.h>
#include "lists.h"
/**
 * free_listint-frees a list
 * @head:pointer to head of the list
*/
void free_listint(listint_t *head)
{
listint_t *p;
p = head;
if (head != NULL)
{
while (p->next != NULL)
{
p = p->next;
free(head);
head = p;
}
free(p);
}
else exit(1);
}
