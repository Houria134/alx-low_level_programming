#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes a character to stdout
 * This function writes the character 'c' to standard output. If successful,
 * it returns the number of characters written (1). If an error occurs, it
 * returns -1 and sets the appropriate error code in errno.
 * @c: The character to be written
 * Return: On success, the number of characters written (1).
 * On error, -1 is returned and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

