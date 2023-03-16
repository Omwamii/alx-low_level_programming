#include "lists.h"

/**
 * add_dnodeint_end - add node at end
 * @head: node head
 * @n: node data
 *
 * Return: address of new element or null if fail
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp = *head;
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (tmp == NULL) /* empty list */
	{
		new->next = NULL;
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while(tmp->next)
			tmp = tmp->next;
		new->prev = tmp;
		new->next = NULL; /* end of list*/
		tmp->next = new;
		tmp = new;
	}
	return (new);
}

