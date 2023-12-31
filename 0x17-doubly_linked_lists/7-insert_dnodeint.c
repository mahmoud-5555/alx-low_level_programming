#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - function that
 * inserts a new node at a given position.
 * @h: pointer to the head
 * @idx: the position of the new node
 * @n: the value of the new node
 * Return: if the list is empty, return 0 or the sum
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *it = *h, *new_node = NULL;
	unsigned int i = 0;

	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	while (it != NULL && idx > i)
	{
		it = it->next;
		i++;
	}
	if (idx == i && idx != 0)
	{
		new_node->next = it;
		if (it == NULL)
		{
			new_node = add_dnodeint_end(h, n);
			return (new_node);
		}
		if (it->prev != NULL)
		{
			it->prev->next = new_node;
			new_node->prev = it->prev;
			it->prev = new_node;
		}

		return (new_node);
	}
	return (NULL);
}
