#include "lists.h"

/**
 * print_listint - prints a linked lists
 * @h: pointer to the first node
 *
 * Return: size of the list
 */

size_t print_listint(const listint_t *h)
{
	size_t m = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		m++;
	}
	return (m);
}
