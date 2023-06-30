#include <stdlib.h>
#include "lists.h"
/**
 * free_list - Frees a list_t list
 * @list: Pointer to the head of the list
 */
void free_list(list_t *list)
{
list_t *current;
while (list != NULL)
{
current = list;
list = list->next;
free(current->str);
free(current);
}
}
