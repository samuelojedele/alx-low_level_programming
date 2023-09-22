#include "lists.h"

/**
 * free_list - frees a linked list.
 * @head: address of a note.
 *
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head; /* Store the current node */
		head = head->next; /* Move to the next node */
		free(current->str); /* Free the string */
		free(current);	/* Free the node itself */
	}
}
