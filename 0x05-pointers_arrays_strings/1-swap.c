#include <stdio.h>

/**
 * swap_int - swaps the value of two integers.
 * @a: The frist value of integer to be swapped.
 * @b: The second value of integer to be swapped.
 *
 * Return: Nonthing
 */
void swap_int(int *a, int *b)
	/* the function that swaps the values of two integers */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
