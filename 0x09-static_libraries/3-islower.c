#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * desc - checks for lowercase character.
 *
 * @c: c is an ascii character
 *
 * Return: 1 if lowercase
 */

int _islower(int c)
{
[I	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
