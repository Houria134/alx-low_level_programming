#include "main.h"
/**
 * _sqrt_helper - finds the square root of n recursively
 * @n: the number to find the square root of
 * @i: the current integer being checked
 * Return: n, or -1 if n does not have a natural square root
 */
int _sqrt_helper(int n, int i)
{
if (n < 0)
return (-1);
if (n == 0 || n == 1)
return (n);
if (i * i == n)
return (i);
if (i * i > n)
return (-1);
return (_sqrt_helper(n, i + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 * Return: n, or -1 if n does not have a natural square root
*/
int _sqrt_recursion(int n)
{
return (_sqrt_helper(n, 1));
}

