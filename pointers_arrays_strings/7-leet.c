#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string to encode
 *
 * Return: a pointer to the encoded string
 */
char *leet(char *str)
{
	char *letters;
	char *digits;
	int i;
	int j;

	letters = "aAeEoOtTlL";
	digits = "4433007711";
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (letters[j] != '\0')
		{
			if (str[i] == letters[j])
				str[i] = digits[j];
			j++;
		}
		i++;
	}
	return (str);
}
