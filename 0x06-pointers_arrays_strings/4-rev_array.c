#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array of integers
 * @n: number of elements of array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
int h;
int t;
for (h = 0; h < n--; h++)
{
t = a[h];
a[h] = a[n];
a[n] = t;
}
}
