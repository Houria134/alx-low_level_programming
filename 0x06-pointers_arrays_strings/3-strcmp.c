#include "main.h"
/**
 * _strcmp - compare string values
 * @s1: input value
 * @s2: input value
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
int h;
h = 0;
while (s1[h] != '\0' && s2[h] != '\0')
{
if (s1[h] != s2[h])
{
return (s1[h] - s2[h]);
}
h++;
}
return (0);
}
