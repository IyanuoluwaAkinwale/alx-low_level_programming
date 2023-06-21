#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints alphabet in lowercase,
 *	and then in uppercase,then a new line.
 * alp: character
 *
 * Return - Always 0
 */

int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		putchar(alp);
	for (alp = 'A'; alp <= 'Z'; alp++)
		putchar(alp);
	putchar('\n');

	return (0);
}
