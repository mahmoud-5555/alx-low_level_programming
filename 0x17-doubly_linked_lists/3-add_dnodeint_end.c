#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at
 * the end of a dlistint_t list
 * @head: pointer to the head
 *@n: the vaule in the new node
 * Return: pointer to new node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *it = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (it != NULL)
	{
		while (it->next != NULL)
			it = it->next;
	}
	else
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*head = new_node;
		return (*head);
	}
	new_node->next = NULL;
	new_node->prev = it;
	it->next = new_node;
	return (new_node);

}
