#include <stdlib.h>
#include "dog.h"
/**
 * new_dog-function
 * @name:name
 * @age:age
 * @owner:owner
 * Return:pointer
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *p = malloc(sizeof(dog_t));
if (p == NULL)
{
return (NULL);
}
p->name = name;
p->age = age;
p->owner = owner;
return (p);
free(p);
}
