#include "main.h"

int is_divisible(int num, int div);

/**
 * is_divisible - Checks if a number is divisible.
 * @num: The number to be checked.
 * @div: The divisor.
 * Return: If the number is divisible - 0.
 */

int is_divisible(int num, int div)
{
	if (div == 1)
	{
		return (1);
	}
	if (n % div == 0)
	{
		return (0);
	}
	return (is_divisible(num, div - 1));
}

/**
 * is_prime_number - Checks if a number is a prime number
 * @n: The number is to be checked.
 * Return: If the number is prime - 1.
 */

int is_prime_number(int n)
{
	int divi2 = n / 2;
	
	if (n < 2)
	{
		return (0);
	}
	return (prime_divisor (n, divi2));
}
