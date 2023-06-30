#include "lists.h"
#include <stdio.h>
/**
 * print_list - Prints all the elements of a list_t list.
 * @head: Pointer to the head of the list
 * Return: Number of nodes in the list
 */
size_t print_list(const list_t *head)
{
const list_t *current = head;
size_t count = 0;
while (current != NULL)
{
if (current->str == NULL)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", current->len, current->str);
current = current->next;
count++;
}
return (count);
}
