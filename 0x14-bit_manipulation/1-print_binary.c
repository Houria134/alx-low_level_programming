#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @number: The number to print in binary.
 */
void print_binary(unsigned long int number)
{
unsigned long int bitMask = 0;
int numBits = sizeof(number) * 8;
int i;
for (i = numBits - 1; i >= 0; i--)
{
bitMask = 1UL << i;
if (number & bitMask)
break;
}
for (; i >= 0; i--)
{
bitMask = 1UL << i;
if (number & bitMask)
_putchar('1');
else
_putchar('0');
}
}
