#include "lists.h"
/**
 *print_listint - function that prints all the elements of a listint_t list
 *@h: Pointer to the head node
 *Return: The number of nodes
*/
size_t print_listint(const listint_t *h)
{
	int num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
