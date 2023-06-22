#include "function_pointers.h"
/**
 * int_index - searches for an integer in an array
 * @array: Pointer to array
 * @size: Number of elements in array
 * @cmp: Pointer to comparison function
 * Return: index of the first element
 * for which the cmp function does not return 0,
 * -1 if no element matches or if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int x;
if (array != NULL && cmp != NULL && size > 0)
{
for (x = 0; x < size; x++)
{
if (cmp(array[x]) != 0)
return (x);
}
}
return (-1);
}
