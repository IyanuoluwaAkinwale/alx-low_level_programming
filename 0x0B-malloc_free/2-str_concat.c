#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *chrPtr;
	int str1len = 0, str2len = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (*(s1 + i))
		str1len++, i++;

	while (*(s2 + j))
		str2len++, j++;
	str2len++;/*adds null terminator to string length.*/

	chrPtr = malloc(sizeof(char) * (str1len + str2len));

	if (chrPtr == NULL)/*validate memory*/
		return (NULL);

	i = 0, j = 0;

	while (i < str1len)/*concatenate*/
	{
		*(chrPtr + i) = *(s1 + i);
		i++;
	}

	while (j < str2len)
	{
		*(chrPtr + i) = *(s2 + j);
		i++;
		j++;
	}

	return (chrPtr);
}
