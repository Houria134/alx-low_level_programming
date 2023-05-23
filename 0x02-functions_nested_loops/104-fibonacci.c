#include <stdio.h>

/**
 * main - Fibonacci sequence
 * Purpose - Print Fibonacci sequence up to a certain limit
 * Return: 0 (Success)
*/
int main(void)
{
unsigned long int i;
unsigned long int prev = 0;
unsigned long int curr = 1;
unsigned long int limit = 1000000000;
unsigned long int prev1;
unsigned long int prev2;
unsigned long int curr1;
unsigned long int curr2;
printf("%lu", prev);

for (i = 1; i < 91; i++)
{
printf(", %lu", curr);
curr += prev;
prev = curr - prev;
}
prev1 = (prev / limit);
prev2 = (prev % limit);
curr1 = (curr / limit);
curr2 = (curr % limit);
for (i = 92; i < 99; ++i)
{
printf(", %lu", curr1 + (curr2 / limit));
printf("%lu", curr2 % limit);
curr1 = curr1 + prev1;
prev1 = curr1 - prev1;
curr2 = curr2 + prev2;
prev2 = curr2 - prev2;
}
printf("\n");
return 0;
}
