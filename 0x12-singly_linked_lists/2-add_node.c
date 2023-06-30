#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @h: Pointer to a pointer to the head of the list
 * @str: String to be duplicated and added
 * as the new node's str value.
 * Return: Address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **h, const char *str)
{
list_t *new_elem;
if (str == NULL)
return (NULL);
new_elem = malloc(sizeof(list_t));
if (new_elem == NULL)
return (NULL);
new_elem->str = strdup(str);
if (new_elem->str == NULL)
{
free(new_elem);
return (NULL);
}
new_elem->len = strlen(str);
new_elem->next = *h;
*h = new_elem;
return (new_elem);
}
