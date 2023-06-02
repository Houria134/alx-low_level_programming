#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
int h, j;
char s1[] = "aAeEoOtTlL";
char s2[] = "4433007711";
for (h = 0; n[h] != '\0'; h++)
{
for (j = 0; j < 10; j++)
{
if (n[h] == s1[j])
{
n[h] = s2[j];
}
}
}
return (n);
}
