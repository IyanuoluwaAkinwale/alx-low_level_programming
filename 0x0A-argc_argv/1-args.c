#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line argument
 * Return: 0 - success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}