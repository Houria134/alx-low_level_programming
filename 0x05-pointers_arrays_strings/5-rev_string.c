#include "main.h"

/**
*rev_string - Reverses a string
*@str: Input string
*Return: String in reverse
*/
void rev_string(char *str)
{
char temp = str[0];
int length = 0;
int i;
while (str[length] != '\0')
length++;
for (i = 0; i < length; i++)
{
length--;
temp = str[i];
str[i] = str[length];
str[length] = temp;
}
}
