#include "main.h"
/**
 * flip_bits - Returns the number of bits
 * needed to flip to get from one number to another.
 * @number1: The first number.
 * @number2: The second number.
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int number1, unsigned long int number2)
{
unsigned long int bitDifference = number1 ^ number2;
unsigned int flipCount = 0;
while (bitDifference > 0)
{
if (bitDifference & 1)
flipCount++;
bitDifference >>= 1;
}
return (flipCount);
}
