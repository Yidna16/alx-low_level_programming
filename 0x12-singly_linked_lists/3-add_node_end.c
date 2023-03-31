#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strlen-calculate length of s
 * @s:pointer to first char
 * Return:int value
*/
int _strlen(const char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
/**
 * add_node_end-add node at the end of the list
 * @head:head of the list
 * @str:string that will be dubilcate
 * Return:list_t type
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new = malloc(sizeof(list_t));
list_t *head1 = *head;

if (new == NULL)
{
return (NULL);
}
new->str = strdup(str);
new->len = _strlen(str);
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
while (head1->next != NULL)
{
head1 = head1->next;
}
head1->next = new;
return (new);
}
