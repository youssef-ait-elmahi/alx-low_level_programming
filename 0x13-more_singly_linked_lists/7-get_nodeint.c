#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of
 *													a listint_t linked list
 * @head: A pointer to the head
 * @index: The index of the node to retrieve
 * Return: A pointer to the node at the specified index
 *													or NULL node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (index-- && head)
		head = head->next;
	return (head);
}
