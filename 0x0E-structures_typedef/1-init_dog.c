#include "dog.h"
#include <stddef.h>
/**
*init_dog - Initializes a struct dog with the given parameters
*@d: Pointer to struct dog to initialize
*@name: Pointer to name string
*@age: Age of dog
*@owner: Pointer to owner string
*Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
