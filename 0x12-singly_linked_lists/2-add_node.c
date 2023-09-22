#include "lists.h"

/**
 * add_node - adds a node at the
 * beginnning of a linked list.
 * @head: address of the first node.
 * @str: string
 *
 * Return:  the address of the new
 * element, or (NULL) if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;


	if (head != NULL && str != NULL)
	{
		new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
		{
			return (NULL);
		}
		new_node->str = strdup(str);
		new_node->len = strlen(str);
		new_node->next = *head;
		*head = new_node;
	}
	else
		return (NULL);

	return (new_node);
}
