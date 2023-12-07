#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - function that count the legnth of the linked_list
 * @h: pointer to the head
 * Return: number of node in the linked_list
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter += 1;
	}
	return (counter);
}