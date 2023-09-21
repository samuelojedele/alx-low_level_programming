#include "lists.h"

/**
 * print_list - prints all the elements
 * a singly link list.
 * @h: pointer to a link list
 *
 * Return: number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t sum = 0;

	if (h != NULL)
	{
		char *str = h->str;
		size_t length = h->len;
		const list_t *next = h->next;


		if (str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%lu] %s\n", length, str);

		sum += 1;
		sum += print_list(next);
	}

	return (sum);
}
