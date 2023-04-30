#include "lists.h"
/**
 * listint_len - function that returns the number of
 *								elements in a linked listint_t list
 * @h: pointer to the head
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t n;

	n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
