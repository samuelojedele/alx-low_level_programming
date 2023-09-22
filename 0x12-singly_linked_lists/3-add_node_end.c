#include "lists.h"

/**
 * add_node_end - adds a new node
 * at the end of a linked list.
 * @head: address of the first node.
 * @str: string.
 *
 * Return: address of the new element,
 * or (NULL) if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current;

	if (head == NULL || str == NULL)
		return (NULL);

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL); /* Memory allocation failed */
	}

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	/* If the list is empty, make the new node the head */
	if (*head == NULL)
		*head = new_node;
	else
	{
		/* Find the last node in the list */
		current = *head;
		while (current->next != NULL)
			current = current->next;

		/* Append the new node to the end */
		current->next = new_node;
	}

	return (new_node);
}
