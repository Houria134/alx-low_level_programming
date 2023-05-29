#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: the string to get length of
 * Return: length of string
 */
int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
s++;
len++;
}
return (len);
}
