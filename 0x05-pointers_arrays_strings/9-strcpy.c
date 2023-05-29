#include "main.h"
/**
*_strcpy - a function that copies the string pointed to by src
*@dest: copy to
*@src: copy from
*Return: string
*/
char *_strcpy(char *dest, char *src)
{
int length = 0;
int index = 0;
while (*(src + length) != '\0')
{
length++;
}
for (; index < length; index++)
{
dest[index] = src[index];
}
dest[length] = '\0';
return (dest);
}
