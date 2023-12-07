#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - function that print the nodes values
 * @h: pointer to the head
 * Return: number of node in the linked_list
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter += 1;
	}
	return (counter);
}
