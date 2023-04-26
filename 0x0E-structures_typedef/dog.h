#ifndef DOG_H
#define DOG_H
/**
 * struct dog-is new data type
 * @name:name secrtion
 * @age:age section
 * @owner:owner section
*/
struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif/*DOG_H*/
