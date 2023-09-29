#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: String where substring will look.
 * @accept: Substring of accepted chars.
 * Return: Length of occurrence.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0' && *accept != '\0')
	{
		if (*s == *accept)
		{
			count++;
			s++;
			accept++;
		}
		else
		{
			break;
		}
	}
	return (count);
}
