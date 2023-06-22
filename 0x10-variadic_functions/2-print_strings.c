#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Prints strings, followed by a new line
 * @separator: String to be printed between the strings
 * @n: Number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int x;
char *str;
va_start(args, n);
for (x = 0; x < n; x++)
{
str = va_arg(args, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if (separator != NULL && x != n - 1)
printf("%s", separator);
}
va_end(args);
printf("\n");
}
