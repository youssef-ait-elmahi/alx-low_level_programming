#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the
 *									beginning of a listint_t list
 * @head: double pointer to the head of the list
 * @n: integer to be stored in the new node
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = (*head);
	(*head) = new;
	return (*head);
}
