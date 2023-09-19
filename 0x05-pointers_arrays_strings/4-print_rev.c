#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string
 */

void print_rev(char *s)
{
	int len = i = 0;

	/*to get length of string*/
	while (s[i++])
		len[i++];

	/*to reverse string*/
	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
