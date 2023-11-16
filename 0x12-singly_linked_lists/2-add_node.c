#include <stdlib.h>
#include <string.h>
#include "list.h"

/**
 * add_node - ...
 * @head: ...
 * @str: ...
 * Return: The address of the new list or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (head !=  NULL && str != NULL)
	{
		temp = malloc(sizeof(list_t));
		if (head == NULL)
			return (NULL);
		temp->str = strdup(str);
		temp->len = _strlen(str);
		temp->next = *head;

		*head = temp;

		return (temp);
	}
	return (0);
}

/**
 * _strlen - Returns the length of a string
 * @s: string to count
 *
 * Return: string length
 */
int _strlen(const char *s)
{
	int c = 0;

	while (*s)
	{
		s++;
		c++;
	}

	return (c);
}