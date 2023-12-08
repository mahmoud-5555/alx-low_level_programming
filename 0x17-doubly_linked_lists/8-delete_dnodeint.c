#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node
 * at index index of a dlistint_t linked list.
 * @head: pointer to the head
 * @index: the position of deleted node
 * Return: 1 for succeded -1 for failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *it = *head;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
		return (delete_dnodeint_at_begin(head));
	while (i > index && it != NULL)
	{
		it = it->next;
		i++;
	}
	if (i == index && it != NULL)
	{
		if (it->next != NULL)
		{
			it->prev->next = it->next;
			it->next->prev = it->prev;
		}
		else
			it->prev->next = NULL;

		free(it);
		return (1);
	}
	else
		return (-1);

}

/**
 * delete_dnodeint_at_begin - function that deletes the head
 * @head: pointer to the head
 * Return: 1 for succeded -1 for failed
*/
int delete_dnodeint_at_begin(dlistint_t **head)
{
	dlistint_t *it;

	if (head == NULL)
		return (-1);
	it = *head;
	*head = (*head)->next;
	if (*head != NULL)
		(*head)->prev = NULL;
	free(it);
	return (1);
}
