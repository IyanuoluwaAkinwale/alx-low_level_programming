#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array.
 * @c: char storage
 * Return: pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *arrPtr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arrPtr = malloc(size * sizeof(char));

	if (arrPtr == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arrPtr[i] = c;
	}

	return (arrPtr);
}
