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
	dlistint_t *it = *h, *previous;
	unsigned int i = 0;
	dlistint_t *new_node;

	if(idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	previous = it;
	while (it != NULL && idx > i)
	{
		previous = it;
		it = it->next;
		i++;
	}
	if (idx == i)
	{
		new_node->next = it;
		if (it == NULL)
		{
			new_node->prev = previous;
			return (new_node);
		}
		if (it->prev != NULL)
		{
			it->prev->next = new_node;
			new_node->prev = it->prev;
			it->prev = new_node;
		}
		else
		{
			it->prev = new_node;
			new_node->prev = NULL;
			*h = new_node;
		}
		return (new_node);
	}

	return (NULL);
}
