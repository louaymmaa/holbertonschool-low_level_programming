#include <stdlib.h>
#include "dog.h"

/**
 * copy_string - Creates a dynamically allocated copy of a string
 * @str: String to copy
 *
 * Return: Pointer to the copy, or NULL on failure
 */
static char *copy_string(char *str)
{
	char *copy;
	size_t len = 0, i;

	while (str[len])
		len++;

	copy = malloc(len + 1);
	if (copy == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		copy[i] = str[i];

	return (copy);
}

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the new dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (name == NULL || owner == NULL)
		return (NULL);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = copy_string(name);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = copy_string(owner);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->age = age;

	return (d);
}

