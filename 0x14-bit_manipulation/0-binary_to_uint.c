#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @binary: Pointer to a string of 0 and 1 chars
 * Return: The converted number
 * or 0 if there is an invalid character
 * or if binary is NULL.
 */
unsigned int binary_to_uint(const char *binary)
{
unsigned int result = 0;
int index = 0;
if (binary == NULL)
return (0);
while (binary[index] != '\0')
{
if (binary[index] == '0')
result <<= 1;
else if (binary[index] == '1')
result = (result << 1) | 1;
else
return (0);
index++;
}
return (result);
}
