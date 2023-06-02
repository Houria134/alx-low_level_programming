#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int h;
int k;
h = 0;
while (dest[h] != '\0')
{
h++;
}
k = 0;
while (k < n && src[k] != '\0')
{
dest[h] = src[k];
h++;
k++;
}
dest[h] = '\0';
return (dest);
}
