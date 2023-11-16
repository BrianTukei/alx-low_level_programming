#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: A linked list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size _t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[o] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		count++;
	}
	return (count);
}
