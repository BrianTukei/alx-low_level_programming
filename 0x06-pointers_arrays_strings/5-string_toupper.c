#include "main.h"

/**
 * string_toupper - changes all lowercase to uppercase letters
 * @n: The string to be changed
 * Return: n
 *
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= '0' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
