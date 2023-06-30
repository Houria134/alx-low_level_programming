#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @list_head: Pointer to a pointer to the head of the list
 * @str: String to be duplicated and
 * added as the new node's str value
 * Return: Address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **list_head, const char *str)
{
list_t *new_node, *current_node;
if (str == NULL)
return (NULL);
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
new_node->len = strlen(str);
new_node->next = NULL;
if (*list_head == NULL)
{
*list_head = new_node;
return (new_node);
}
current_node = *list_head;
while (current_node->next != NULL)
current_node = current_node->next;
current_node->next = new_node;
return (new_node);
}
