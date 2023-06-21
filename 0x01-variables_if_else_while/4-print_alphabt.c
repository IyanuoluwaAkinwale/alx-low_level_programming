#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase,
 *	except for q and e
 *
 * alp: character
 *
 * Return: Always 0.
 */

int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		putchar(alp);
		if (alp == 'q' || alp == 'e')
			continue;
		alp++;
	}

	return (0);
}
