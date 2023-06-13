#include <stdlib.h>
#include "main.h"
/**
 * str_concat - joins two strings together
 * @s1: first string
 * @s2: second string
 * Return: new string of s1 followed by s2, or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
char *result;
int len_s1 = 0, len_s2 = 0, idx1, idx2;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len_s1])
len_s1++;
while (s2[len_s2])
len_s2++;
result = malloc((len_s1 + len_s2 + 1) * sizeof(char));
if (result == NULL)
return (NULL);
for (idx1 = 0; idx1 < len_s1; idx1++)
result[idx1] = s1[idx1];
for (idx2 = 0; idx2 < len_s2; idx2++)
result[len_s1 + idx2] = s2[idx2];
result[len_s1 + len_s2] = '\0';
return (result);
}
