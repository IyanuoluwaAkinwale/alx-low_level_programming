#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for the
 * program 101-crackme.
 * Return: Always 0.
 */

int main(void)
{
	char password[84];
	int index = 0, sum = 0, num_half1, num_half2;

	srand(time(0));

	while (sum < 2772)
	{
		password[index] = 33 + rand() % 94;
		sum += password[index++];
	}

	password[index] = '\0';


	if (sum != 2772)
	{
		num_half1 = (sum - 2772) / 2;
		num_half2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
		{
			num_half1++;
		}

		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + num_half1))
			{
				password[index] -= num_half1;
				break;
			}
		}
		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + num_half2))
			{
				password[index] -= num_half2;
				break;
			}
		}
	}

	printf("%s", password);
	return (0);
}
