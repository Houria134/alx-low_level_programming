#include "main.h"
#include <stdlib.h>
/**
 * array_range - generates an array of integers
 * @min: the minimum value for the array
 * @max: the maximum value for the array
 * Return: a pointer to the newly created integer array
 */
int *array_range(int min, int max)
{
int *ptr;
int j, s;
if (min > max)
return (NULL);
s = max - min + 1;
ptr = malloc(sizeof(int) * s);
if (ptr == NULL)
return (NULL);
for (j = 0; min <= max; j++)
ptr[j] = min++;
return (ptr);
}

