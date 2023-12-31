#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number to find the factorial
 * Return: If n > 0 - the factorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
