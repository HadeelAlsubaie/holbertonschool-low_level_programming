#include <stdlib.h>
#include "main.h"

/**
 * str_concat - joins two strings into a new string
 * @s1: the first string
 * @s2: the second string, added after s1
 *
 * Return: pointer to the new string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *joined;
	unsigned int len1;
	unsigned int len2;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;
	joined = malloc(sizeof(char) * (len1 + len2 + 1));
	if (joined == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		joined[i] = s1[i];
	for (i = 0; i <= len2; i++)
		joined[len1 + i] = s2[i];
	return (joined);
}
