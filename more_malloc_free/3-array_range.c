#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of consecutive integers.
 * @min: Minimum integer value.
 * @max: Maximum integer value.
 *
 * Return: Pointer to the array, or NULL on failure.
 */
int *array_range(int min, int max)
{
	int *arr;
	size_t count, i;

	if (min > max)
		return (NULL);

	count = (size_t)((long)max - (long)min) + 1;

	if (count > (size_t)-1 / sizeof(int))
		return (NULL);

	arr = malloc(count * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < count; i++)
		arr[i] = (int)((long)min + (long)i);

	return (arr);
}
