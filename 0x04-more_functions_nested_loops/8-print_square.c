#include "main.h"

/**
 * print_square - prints a square of size size
 * @size: size of the square
 *
 * Return: void
 */


void print_square(int size)
{
	int col, row;

	if (size <= 0)
		_putchar('\n');

	for (col = 0; col < size; col++)
	{
		for (row = 0; row < size; row++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
