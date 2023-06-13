#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Prints minimum coins needed to make change for given amount
 * amount of money using US currency denominations
 * @argc: The number of command line arguments
 * @argv: An array of pointers to the command line arguments
 * Return: 0 if successful, 1 if an error occurred
 */
int main(int argc, char *argv[])
{
int amount, j, num_coins;
int denominations[] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error: expected a single argument specifying the amount of money\n");
return (1);
}
amount = atoi(argv[1]);
num_coins = 0;
if (amount < 0)
{
printf("0\n");
return (0);
}
for (j = 0; j < 5 && amount >= 0; j++)
{
while (amount >= denominations[j])
{
num_coins++;
amount -= denominations[j];
}
}
printf("%d\n", num_coins);
return (0);
}
