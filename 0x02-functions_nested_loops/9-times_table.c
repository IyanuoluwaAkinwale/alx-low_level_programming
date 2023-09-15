#include "main.h"

/**
 * times_table -prints the 9 times table
 *
 * Description: prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int row, col, result;

	for (row = 0; col <= 9; row++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (col = 1; col <= 9; col++)
		{
			result = (row * col);
			if ((result / 10) > 0)
				_putchar((result / 10) + '0');
			else
				_putchar(' ');
			_putchar((result % 10) + '0');

			if (col < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
