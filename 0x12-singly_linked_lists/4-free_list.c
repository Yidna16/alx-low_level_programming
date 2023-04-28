#include <stdlib.h>
#include "lists.h"
/**
 * free_list-free a list
 * @head:pointer to head
*/
void free_list(list_t *head)
{
list_t *i;
list_t *j;
i = head;
while (i->next != NULL)
{
j = i->next;
free(i);
i = j;
}
free(j);
}
