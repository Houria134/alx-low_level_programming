#include "main.h"
/**
 * get_bit - Returns the value of a bit at a given index.
 * @number: The number to get the bit from.
 * @bitIndex: The index of the bit to retrieve, starting from 0.
 * Return: The value of the bit at the given index
 * or -1 if an error occurred.
 */
int get_bit(unsigned long int number, unsigned int bitIndex)
{
unsigned long int bitMask = 1UL << bitIndex;
if (bitIndex >= (sizeof(unsigned long int) * 8))
return (-1);
if ((number & bitMask) != 0)
return (1);
else
return (0);
}
