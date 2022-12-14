#include<stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars and initializes
 *	 it with a specific char.
 *
 * @size: - array of chars to be created.
 * @c: - Specific character that initializes chars created.
 *
 * Return: if size == 0 or the function fails - NULL.
 *	 otherwise - a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}

