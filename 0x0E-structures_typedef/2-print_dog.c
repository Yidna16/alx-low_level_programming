#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog-print each struct elements
 * @d:variabel
 * Return:void
*/
void print_dog(struct dog *d)
{
if (d == NULL)
exit(0);
if ((*d).name == NULL)
{
printf("(nil)\n");
}
else
printf("Name: %s\n", d->name);
if ((*d).age < 0)
{
printf("(nil)\n");
}
else
printf("Age: %f\n", d->age);
if ((*d).owner == NULL)
{
printf("(nil)\n");
}
else
printf("Owner: %s\n", d->owner);
}
