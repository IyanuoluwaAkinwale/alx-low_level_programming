#include "main.h"

int prime_divisor(int num, int div);

/**
 * prime_divisor - Checks if a number is divisible.
 * @num: The number to be checked.
 * @div: The divisor.
 * Return: If the number is divisible - 0.
 */

int prime_divisor(int num, int div)
{
	if (div == 1)
	{
		return (1);
	}
	if (num % div == 0)
	{
		return (0);
	}
	return (prime_divisor(num, div - 1));
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
	return (prime_divisor(n, divi2));
}
