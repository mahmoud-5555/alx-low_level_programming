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
	dlistint_t *it = *h;
	unsigned int i = 0;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);
	new_node->n = n;

	while (it != NULL && idx > i)
	{
		it = it->next;
		i++;
	}
	if (idx == i && it != NULL)
	{
		new_node->next = it;
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
		}
		return (new_node);
	}

	return (NULL);
}
