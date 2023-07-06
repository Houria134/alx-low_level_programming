#include "main.h"
/**
 * get_endianness - Checks the endianness of the system.
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
unsigned int testNumber = 1;
char *bytePointer = (char *)&testNumber;
if (*bytePointer)
return (1);
else
return (0);
}
