#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int b;

	for (b = 0; b < 16; b++)
	{
		if (b < 10)
		{
			putchar(b + '0');
		}
		else
			/*if b > 10,ie 10 - 15,reps a to f*/
			putchar(b - 10 + 'a');
	}
	putchar('\n');

	return (0);
}
