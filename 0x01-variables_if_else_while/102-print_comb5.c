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
		for (numB = numA + 1; numB < 100; numB++)
		{
			putchar((numA / 10) + '0');
			/*the '0' converts the answer to ascii character*/
			putchar((numA % 10) + '0');
			putchar(' ');
			putchar((numB / 10) + '0');
			putchar((numB % 10) + '0');
			if (numA == 98 || numB == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
