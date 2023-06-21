#include <stdio.h>

/**
 * main - prints the lowercase alphabet in
 *	reverse, followed by a new lin
 *
 * Return: Always 0
 */

int main(void)
{
	int b = 'z';

	while (b >= 'a')
	{
		putchar(b);
		b--;
	}
	putchar('\n');

	return (0);
}
