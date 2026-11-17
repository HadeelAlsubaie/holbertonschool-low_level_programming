#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars filled with one char
 * @size: number of chars in the array
 * @c: the char used to fill the array
 *
 * Return: pointer to the array, or NULL if size is 0 or malloc fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
