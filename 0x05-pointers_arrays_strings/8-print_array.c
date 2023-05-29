#include "main.h"
#include <stdio.h>
/**
*print_array - prints n elements of an array of integers
*@arr: the array of integers
*@size: the number of elements to print
*/
void print_array(int *arr, int size)
{
int i;
for (i = 0; i < size; i++)
{
printf("%d", arr[i]);
if (i != size - 1)
printf(", ");
}
printf("\n");
}
