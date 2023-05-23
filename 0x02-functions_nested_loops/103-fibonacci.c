#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
unsigned long int b, k, next, sum;
b = 1;
k = 2;
sum = 0;
for (a = 1; a <= 33; ++a)
{
if (b < 4000000 && (b % 2) == 0)
{
sum = sum + b;
}
next = b + k;
b = k;
k = next;
}
printf("%lu\n", sum);
return (0);
}
