#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory and exits if it fails
 * @b: number of bytes to allocate
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
