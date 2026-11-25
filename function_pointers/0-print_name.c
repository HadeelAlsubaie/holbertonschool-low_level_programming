#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - prints a name using the given function
 * @name: the name to print
 * @f: pointer to the function that prints the name
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
