#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: pointer to an int
 * @b: pointer to an int
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}
