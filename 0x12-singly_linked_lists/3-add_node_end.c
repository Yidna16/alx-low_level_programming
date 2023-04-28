#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node_end-adds a new node at the end of a list_t list
 * @head:pointer to head
 * @str:string argument
 * Return:pointer to new list
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *p;
list_t *j;
p = *head;
j = malloc(sizeof(list_t));
if (j == NULL)
{
return (NULL);
}
j->str = strdup(str);
j->len = strlen(str);
j->next = NULL;
if (*head == NULL)
{
*head = j;
return (j);
}
while (p->next != NULL)
{
p = p->next;
}
p->next = j;
return (j);
}
