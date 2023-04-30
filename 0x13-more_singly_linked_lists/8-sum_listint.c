#include "lists.h"
/**
 * sum_listint - function that returns the sum of all
 *							the data (n) of a listint_t linked list
 * @head: A pointer to the head
 * Return: The sum of all integer values
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
