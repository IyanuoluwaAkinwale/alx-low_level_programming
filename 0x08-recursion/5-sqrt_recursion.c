#include "main.h"

int _find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number to find the square root of
 * Return: The natural square root of n,
 * or -1 if n does not have a natural square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (_find_sqrt(n, 1));
}


/**
 * _find_sqrt - Helper function for calculating square root recursively.
 * @num: The number to find the square root of.
 * @rt_guess: The current guess for the square root.
 *
 * Return: The natural square root of num,
 * or -1 if num does not have a natural square root.
 */

int _find_sqrt(int num, int rt_guess)
{
	if (rt_guess * rt_guess == num)
	{
		return (rt_guess);
	}
	if (rt_guess * rt_guess > num)
	{
		return (-1);
	}
	return (_find_sqrt(num, rt_guess + 1));
}
