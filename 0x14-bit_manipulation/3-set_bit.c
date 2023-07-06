#include "main.h"
/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @numberPtr: Pointer to the number to set the bit in.
 * @bitIndex: The index of the bit to set, starting from 0.
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *numberPtr, unsigned int bitIndex)
{
unsigned long int bitMask = 1UL << bitIndex;
if (bitIndex >= (sizeof(unsigned long int) * 8))
return (-1);
*numberPtr |= bitMask;
return (1);
}
