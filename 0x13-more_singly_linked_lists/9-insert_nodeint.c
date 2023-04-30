#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new
 *										node at a given position
 * @head: A pointer to a pointer to the head
 * @idx: The index at which to insert the new node
 * @n: The integer value to assign to the new node
 * Return: A pointer to the newly inserted node
 *									or NULL if the insertion failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *tmp;
	unsigned int i;

	if (!head)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	tmp = *head;
	for (i = 0; i < idx - 1 && tmp; i++)
		tmp = tmp->next;
	if (!tmp)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);
}
