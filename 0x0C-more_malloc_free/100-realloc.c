#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _realloc - reallocates memory using malloc and free
 * @ptr: pointer to the previously allocated memory with malloc
 * @old_size: size in bytes of the memory block allocated for ptr
 * @new_size: new size in bytes of the newly allocated memory block
 * Return: Pointer to the new memory block
 * or NULL if new_size == 0 and ptr != NULL,or NULL on failure.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *new_ptr;
unsigned int j;
if (new_size == old_size)
return (ptr);
if (ptr == NULL)
{
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
return (new_ptr);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
for (j = 0; j < old_size && j < new_size; j++)
new_ptr[j] = ((char *)ptr)[j];
free(ptr);
return (new_ptr);
}
