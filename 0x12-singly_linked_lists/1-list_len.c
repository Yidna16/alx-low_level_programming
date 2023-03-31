#include "lists.h"
/**
 * list_len-return number of elements
 * @h:pointer to list_t data type
 * Return:number of elements
 */
size_t list_len(const list_t *h)
{
size_t i = 0;
const list_t *tmp;
tmp = h;
while (tmp)
{
tmp = tmp->next;
i++;
}
return (i);
}
