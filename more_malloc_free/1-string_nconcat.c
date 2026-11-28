#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 * @n: Maximum number of bytes to copy from s2.
 *
 * Return: Pointer to the new string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t len1 = 0, len2 = 0, i;
	char *str;

	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
			len1++;
	}

	if (s2 != NULL)
	{
		while (len2 < n && s2[len2] != '\0')
			len2++;
	}

	str = malloc(len1 + len2 + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		str[i] = s1[i];

	for (i = 0; i < len2; i++)
		str[len1 + i] = s2[i];

	str[len1 + len2] = '\0';

	return (str);
}
