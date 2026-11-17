#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - joins s1 and the first n bytes of s2
 * @s1: the first string
 * @s2: the second string
 * @n: how many bytes of s2 to add
 *
 * Return: pointer to the new string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
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
	if (n > len2)
		n = len2;
	joined = malloc(sizeof(char) * (len1 + n + 1));
	if (joined == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		joined[i] = s1[i];
	for (i = 0; i < n; i++)
		joined[len1 + i] = s2[i];
	joined[len1 + n] = '\0';
	return (joined);
}
