#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - adds positive numbers
 * @argc: the number of arguments passed to the function
 * @argv: array of pointers to the arguments
 * Return: 0 if the addition is successful, 1 if an error occurred
 */
int main(int argc, char **argv)
{
int index, result = 0;
if (argc < 2)
{
printf("0\n");
return (0);
}
for (index = 1; index < argc; index++)
{
int inner_index;
for (inner_index = 0; argv[index][inner_index] != '\0'; inner_index++)
{
if (argv[index][inner_index] < '0' || argv[index][inner_index] > '9')
{
printf("Error\n");
return (1);
}
}
result += atoi(argv[index]);
}
printf("%d\n", result);
return (0);
}

