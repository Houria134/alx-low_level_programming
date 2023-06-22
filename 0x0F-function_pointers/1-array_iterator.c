#include "function_pointers.h"
/**
 * array_iterator - executes a function on each element of an array
 * @array: pointer to array
 * @size: size of array
 * @action: pointer to the function to be executed
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t x;
if (array != NULL && action != NULL)
{
for (x = 0; x < size; x++)
action(array[x]);
}
}
