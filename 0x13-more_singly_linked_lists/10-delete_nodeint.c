#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a linked list
 * @head: double pointer to head of linked list
 * @index: index of node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i;

	if (!head || !*head)
		return (-1);

	current = *head;
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	for (i = 0; i < index - 1 && current->next; i++)
		current = current->next;

	if (!current->next)
		return (-1);

	temp = current->next;
	current->next = temp->next;
	free(temp);
	return (1);
}
