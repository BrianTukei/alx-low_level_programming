#include "function_pointers.h"

/**
 *  print_name - prints a name
 *  @name: the name to print
 *  @f: pointer to a function
 *
 *  Return: Nonthing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
