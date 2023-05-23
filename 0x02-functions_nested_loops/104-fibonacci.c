#include <stdio.h>
/**
 * main - Fibonacci sequence
 * Purpose: Print Fibonacci sequence up to a certain limit
 * Return: 0 (Success)
 */
int main(void)
{
unsigned long int i;
unsigned long int prev = 1;
unsigned long int curr = 2;
unsigned long int limit = 1000000000;
unsigned long int prev1;
unsigned long int prev2;
unsigned long int curr1;
unsigned long int curr2;
printf("%lu, %lu", prev, curr);
for (i = 3; i < 99; i++)
{
unsigned long int next = prev + curr;
prev = curr;
curr = next;
prev1 = prev / limit;
prev2 = prev % limit;
curr1 = curr / limit;
curr2 = curr % limit;
printf(", %lu", curr1 + (curr2 / limit));
printf("%lu", curr2 % limit);
}
printf("\n");
return (0);
}
