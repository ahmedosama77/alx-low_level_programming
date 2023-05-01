#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning
 * @head: pointer to the node
 * @n: pointer to the data of the node
 *
 * Return: size of the node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (head || newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
