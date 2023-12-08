#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a
 * dlistint_t linked list.
 * @head: pointer to the head
 * @index: the index of the node that wanna to return
 * Return: pointer to node that have indiex "index"
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL && index > i)
	{
		head = head->next;
		i++;
	}
	if (index == i)
		return (head);

	return (NULL);
}
