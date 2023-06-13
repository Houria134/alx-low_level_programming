#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * @argc: Number of arguments passed to the program
 * @argv: Array of pointers to strings containing the arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
int operand1, operand2, product;
if (argc != 3)
{
printf("Error\n");
return (1);
}
operand1 = atoi(argv[1]);
operand2 = atoi(argv[2]);
product = operand1 *operand2;
printf("%d\n", product);
return (0);
}

