#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int numA, numB;

	for (numA = 0; numA < 100; numA++)
	{
		for (numB = numA; numB < 100; numB++)
		{
			putchar((numA / 10) + '0');
			putchar((numA % 10) + '0');
			putchar(' ');
			putchar((numB / 10) + '0');
			putchar((numB % 10) + '0');
			if (numA != 99 || numB != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
