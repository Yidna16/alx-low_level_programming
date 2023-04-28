#include <stddef.h>
#include "lists.h"
/**
 * list_len-return number of elements
 * @h:pointer to head
 * Return:number of elements
*/
size_t list_len(const list_t *h)
{
size_t i = 0;
while (h != NULL)
{
i++;
h = h->next;
}
return (i);
}
