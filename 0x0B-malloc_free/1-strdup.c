#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string
 * which is a duplicate of the string str.
 * @str: string to duplicate
 * Return: pointer to duplicated string in allocated memory.
 */

char *_strdup(char *str)
{
	char *strPtr;
	unsigned int count, i;

	if (str == NULL)
		return (NULL);

	for (count = 0; str[count] != '\0'; count++)
		;

	strPtr= malloc(sizeof(char) * (count + 1));

	if (strPtr == NULL)
		return (NULL);

	for (i = 0; i <= count; i++)
	{
		strPtr[i] = str[i];
	}

	return (strPtr);
}
