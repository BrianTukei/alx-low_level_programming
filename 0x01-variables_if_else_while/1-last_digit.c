#include <stdio.h>

/**
 * main - prints the alphabet.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char alp[26] = "Last digit of 98 is 8 and is greater than 5";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}

