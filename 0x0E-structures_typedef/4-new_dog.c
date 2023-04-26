#include <stdlib.h>
#include "dog.h"
/**
 * _strlen-length of a string
 * @c:pointer to first char
 * Return:length
*/
int _strlen(char *c)
{
int i = 0;
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
int i = 0;
while (from[i] != '\0')
{
to[i] = from[i];
i++;
}
to[i] = '\0';
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
dog_t *p;
if (name == NULL || age < 0 || owner == NULL)
{
return (NULL);
}
p = malloc(sizeof(dog_t));
if (p == NULL)
{
return (NULL);
}
p->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (p->name == NULL)
{
free(p);
return (NULL);
}
p->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (p->owner == NULL)
{
free(p->name);
free(p);
return (NULL);
}
p->name = _strcpy(p->name, name);
p->age = age;
p->owner = _strcpy(p->owner, owner);
return (p);
}
