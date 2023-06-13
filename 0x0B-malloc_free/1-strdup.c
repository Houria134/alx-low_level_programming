#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns ptr to a new memory space with a copy of a given string
 * @str: the string to be duplicated
 * Return: a pointer to the duplicated string or NULL if str is NULL
 */
char *_strdup(char *str)
{
char *dup_str;
unsigned int length = 0, index = 0;
if (str == NULL)
return (NULL);
while (str[length] != '\0')
length++;
dup_str = malloc(sizeof(char) * (length + 1));
if (dup_str == NULL)
return (NULL);
while (index < length)
{
dup_str[index] = str[index];
index++;
}
dup_str[index] = '\0';
return (dup_str);
}
