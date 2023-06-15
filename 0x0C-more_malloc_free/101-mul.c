#include <stdio.h>
#include <stdlib.h>

int _isdigit(char *s);
void _mul(char *num1, char *num2);

/**
 * main - multiply two positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
char *num1, *num2;
if (argc != 3)
{
printf("Error\n");
return (98);
}
if (!_isdigit(argv[1]) || !_isdigit(argv[2]))
{
printf("Error\n");
return (98);
}
num1 = argv[1];
num2 = argv[2];
if (*num1 == '0' || *num2 == '0')
{
printf("0\n");
return (0);
}
_mul(num1, num2);
return (0);
}
/**
 * _mul - multiply two numbers
 * @num1: first number
 * @num2: second number
 */
void _mul(char *num1, char *num2)
{
int len1 = 0, len2 = 0, i, j, k, carry, n1, n2, sum;
int *result;
while (num1[len1])
len1++;
while (num2[len2])
len2++;
result = calloc(len1 + len2, sizeof(int));
for (i = len1 - 1; i >= 0; i--)
{
carry = 0;
n1 = num1[i] - '0';
for (j = len2 - 1; j >= 0; j--)
{
n2 = num2[j] - '0';
sum = n1 *n2 + result[i + j + 1] + carry;
carry = sum / 10;
result[i + j + 1] = sum % 10;
}
if (carry)
result[i + j + 1] = carry;
}
for (k = 0; k < len1 + len2; k++)
if (result[k])
break;
for (; k < len1 + len2; k++)
printf("%d", result[k]);
printf("\n");
free(result);
}
/**
 * _isdigit - check if string is a number
 * @s: string to check
 * Return: 1 if true, 0 if false
 */
int _isdigit(char *s)
{
while (*s)
{
if (*s < '0' || *s > '9')
return (0);
s++;
}
return (1);
}
