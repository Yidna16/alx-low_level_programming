#include <stdlib.h>
#include "dog.h"
/**
 * _strlen-length of a string
 * @c:pointer to first char
 * Return:length
*/
int _strlen(char *c)
{
int i;
while (c[i] != '\0')
{
i++;
}
return (i);
}
/**
 * _strcpy-copy string
 * @to:destination point
 * @from:source point
 * Return:pointer to new string
*/
char *_strcpy(char *to, char *from)
{
int i;
while (from[i] != NULL)
{
to[i] = from[i];
i++;
}
return (to);
}
/**
 * new_dog-function
 * @name:name
 * @age:age
 * @owner:owner
 * Return:pointer
*/
dog_t *new_dog(char *name, float age, char *owner)
{
if (name == NULL || age < 0 || owner == NULL)
{
return (NULL);
}
dog_t *p = malloc(sizeof(dog_t));
if (p == NULL)
{
return (NULL);
}
p->name = malloc(sizeof(char) * _strlen(name) + 1);
if (p->name == NULL)
{
free(name);
free(p);
return (NULL);
}
p->owner = malloc(sizeof(char) * _strlen(owner) + 1);
if (p->owner == NULL)
{
free(owner);
free(p);
return (NULL);
}
p->name = _strcpy(p->name, name);
p->age = age;
p->owner = _strcpy(p->owner, owner);
return (p);
}
