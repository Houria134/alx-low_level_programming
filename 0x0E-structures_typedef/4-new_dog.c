#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog based on the provided parameters
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *p_dog;
char *p_name_copy, *p_owner_copy;
int name_len, owner_len, name_index, owner_index;
p_dog = malloc(sizeof(dog_t));
if (p_dog == NULL)
return (NULL);
for (name_len = 0; name[name_len] != '\0'; name_len++)
;
for (owner_len = 0; owner[owner_len] != '\0'; owner_len++)
;
p_name_copy = malloc(name_len + 1);
if (p_name_copy == NULL)
{
free(p_dog);
return (NULL);
}
p_owner_copy = malloc(owner_len + 1);
if (p_owner_copy == NULL)
{
free(p_name_copy);
free(p_dog);
return (NULL);
}
for (name_index = 0; name_index <= name_len; name_index++)
p_name_copy[name_index] = name[name_index];
for (owner_index = 0; owner_index <= owner_len; owner_index++)
p_owner_copy[owner_index] = owner[owner_index];
p_dog->name = p_name_copy;
p_dog->age = age;
p_dog->owner = p_owner_copy;
return (p_dog);
}
