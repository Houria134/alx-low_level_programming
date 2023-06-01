#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 * Return: always 0
 */
char *_strcat(char *dest, char *src)
{
int h;
int k;
h = 0;
while (dest[h] != '\0')
{
h++;
}
k = 0;
while (src[k] != '\0')
{
dest[h] = src[k];
h++;
k++;
}
dest[h] = '\0';
return (dest);
}
