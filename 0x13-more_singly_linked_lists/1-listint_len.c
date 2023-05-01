#include "lists.h"

/**
 * listint_len - prints a linked list
 * @h: pointer to the list
 *
 * Return: size of the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t m = 0;

	while (h)
	{
		h = h->next;
		m++;
	}
	return (m);
}
