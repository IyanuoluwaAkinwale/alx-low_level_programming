#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c: integer
 *
 * Return: 1 if c is uppercase,0 if otherwise
 */

int _isupper(int c)
{
	c = 'A';

	if (c <= 'Z')
		return (1);
	else
		return (0);
}
