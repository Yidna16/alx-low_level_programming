#include <stdlib.h>
#include "dog.h"
/**
 * free_dog-free memory
 * @d:pass in argument
*/
void free_dog(dog_t *d)
{
free(d);
}
