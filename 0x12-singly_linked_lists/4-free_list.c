#include <stdlib.h>
#include "lists.h"
/**
 * free_list-free a list
 * @head:pointer to head
*/
void free_list(list_t *head)
{
list_t *i;
while (head != NULL)
{
i = head;
head = head->next;
free(i->str);
free(i);
}
}
