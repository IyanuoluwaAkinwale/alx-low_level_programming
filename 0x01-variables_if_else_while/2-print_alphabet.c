#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in lowercase,
 *	followed by a new line
 *
 * alp: characte
 *
 * Return: Always 0
 */

int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		putchar(alp);
		alp++;
	}
	putchar('\n');

	return (0);
}
