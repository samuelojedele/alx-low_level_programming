#include "lists.h"

/**
 * list_len - returns the number of
 * elements in a linked list.
 * @h: pointer to a linked list.
 *
 * Return:  number of elements in
 * the linked list.
 */
size_t list_len(const list_t *h)
{
	size_t sum = 0;

	if (h != NULL)
	{
		const list_t *next = h->next;

		sum++;
		sum += list_len(next);
	}

	return (sum);
}
