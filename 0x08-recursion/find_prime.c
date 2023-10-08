#include "main.h"
#include <stdio.h>

/**
 * main - starting point
 * Return: int
 */

int main(void)
{
	int user_num;
	int val;

	printf("Enter a number: ");
	scanf("%d", &user_num);
	val = is_prime_number(user_num);

	if (val == 1)
	{
		printf("\nThe number %d is a prime number\n", user_num);
	}
	else
	{
		printf("%d is not a prime number\n", user_num);
	}
	return (0);
}
