#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: Name to be printed
 * @f: Function pointer to specify the print format
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
