#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a
 *							listint_t linked list, and returns the head node’s data (n)
 * @head: pointer to the first element in the linked list
 * Return: The value of the deleted node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *new_h;

	if (!*head)
		return (0);
	new_h = *head;
	n = new_h->n;
	*head = new_h->next;
	free(new_h);
	return (n);
}
