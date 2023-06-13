#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - Allocates char array of size and initializes each element
 * @size: the size of the array to create
 * @c: the char to initialize the array with
 * Return: Returns a pointer to array if successful allocation,NULL otherwise
 */
char *create_array(unsigned int size, char c)
{
char *char_array;
unsigned int i;
if (size == 0)
return (NULL);
char_array = malloc(sizeof(char) * size);
if (char_array == NULL)
return (NULL);
for (i = 0; i < size; i++)
char_array[i] = c;
return (char_array);
}
