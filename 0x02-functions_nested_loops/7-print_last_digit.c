#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @x: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int x)
{
int s;
if (x < 0)
x = -x;
s = x % 10;
if (s < 0)
s = -s;
_putchar(s + '0');
return (s);
}
