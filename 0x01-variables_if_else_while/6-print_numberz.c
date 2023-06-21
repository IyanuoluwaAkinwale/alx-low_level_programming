#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int b = 0;

	while (b < 10)
	{
		putchar(b + '0');
		b++;
	}
	putchar('\n');

	return (0);
}
