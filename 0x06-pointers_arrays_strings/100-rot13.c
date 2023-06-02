#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: pointer to string params
 * Return: *s
 */
char *rot13(char *s)
{
int h;
int k;
char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (h = 0; s[h] != '\0'; h++)
{
for (k = 0; k < 52; k++)
{
if (s[h] == data1[k])
{
s[h] = datarot[k];
break;		
}
}
}
return (s);
}
